#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

FILE *fp;                       //file pointer
FILE *fp1;

int gdriver = DETECT, gmode, errorcode;
char msg[500];

struct student                 //structure definition
{
char nam[20];
char x;
char addr[60];
char id[10];
char email[40];
char phno[15];
}s;

char m=40,f=32,ug=48,pg=32,cs=32,is=33,ec=34,ee=35,it=36,ip=37;//variables used for encoding
char mech=38,bt=39,field=0,q;

//function to get the count of no. student records
int count()
{
   int c=0;
   fp=fopen("rec","r");
   while(1)
    {
      fread(&s,1,sizeof(struct student),fp);
      if(feof(fp))          //check if the end of file is encountered
	 break;
      c++;
    }
   fclose(fp);
   return c;
}

//function to access the student details
void read()
{
    int cy=1,i,p,flag=0;
    char name[20],id[10];
    cleardevice();
    setbkcolor(8);
    if(count()==0)            //check if the database is empty
     {
       cleardevice();
       setbkcolor(0);
       setcolor(15);
       sprintf(msg,"\nDatabase Empty");
       outtextxy(220,220,msg);
     }
    else
pq:   {
	printf("\nPlease select a choice\n1.Access by name\n2.Access by Id");
	printf("\nCHOICE:");
	scanf("%d",&p);
      if(p==1)               //check if to access by name
	 {
	   printf("\nPlease enter the name to access the details \nNAME:");
	   fflush(stdin);
	   gets(name);
	 }
      else if(p==2)          //check if to access by id
	   {
	    printf("\nPlease enter the id of the student to access ");
	  printf("the details of the student\nID:");
	    fflush(stdin);
	    gets(id);
	   }
      else
	 {
	   printf("\nWrong choice");
	   goto pq;
	 }
      fp=fopen("rec","r");
      while(1)
	  {
	   fread(&s,1,sizeof(struct student),fp);
	   if(feof(fp))break;         //check if end of file is reached

	   //comparing entered id or name with the one in the structure
	   if((strcmp(s.id,id)==0)||(strcmp(s.nam,name)==0))
	     cy=0;
	   if(cy==0)//check if the name or id matches with any one in the file
	    {
	     flag=1;
	     clrscr();
	     cleardevice();
	     setbkcolor(0);
	     setcolor(1);
	     settextstyle(1,0,1);
	     sprintf(msg,"SRI JAYACHAMARAJENDRA COLLEGE OF ENGINEERING");
	     outtextxy(75,10,msg);
	     sprintf(msg,"MYSORE-570006");
	     outtextxy(230,40,msg);
	     sprintf(msg,"STUDENT DETAILS");
	     outtextxy(220,100,msg);
	     printf("\n\n\n\n\n\n\n\n\n\n\n");
	     printf("Name      :%s",s.nam);
	     printf("\n\nStudent ID:");
	     puts(s.id);
	     printf("\nADDRESS   :");
	     puts(s.addr);
	     printf("\nEmail id  :");
	     puts(s.email);
	     printf("\nPhone no  :");
	     puts(s.phno);

	     //Decoding the bit string variable
	     switch(s.x)
	     {
	      case 32:printf("\nDiscipline:CS&E");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 33:printf("\nDiscipline:IS&E");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 34:printf("\nDiscipline:EC&E");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 35:printf("\nDiscipline:EEE");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 36:printf("\nDiscipline:I&TE");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 37:printf("\nDiscipline:IP");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 38:printf("\nDiscipline:ME");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 39:printf("\nDiscipline:BT");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :PG");
		      break;

	      case 40:printf("\nDiscipline:CS&E");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 41:printf("\nDiscipline:IS&E");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 42:printf("\nDiscipline:EC&E");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 43:printf("\nDiscipline:EEE");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 44:printf("\nDiscipline:I&TE");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 45:printf("\nDiscipline:IP");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 46:printf("\nDiscipline:ME");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 47:printf("\nDiscipline:BT");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :PG");
		      break;

	      case 48:printf("\nDiscipline:CS&E");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 49:printf("\nDiscipline:IS&E");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 50:printf("\nDiscipline:EC&E");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 51:printf("\nDiscipline:EEE");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 52:printf("\nDiscipline:I&TE");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 53:printf("\nDiscipline:IP");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 54:printf("\nDiscipline:ME");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 55:printf("\nDiscipline:BT");
		      printf("\n\nGender    :Female");
		      printf("\n\nModule    :UG");
		      break;

	      case 56:printf("\nDiscipline:CS&E");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 57:printf("\nDiscipline:IS&E");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 58:printf("\nDiscipline:EC&E");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 59:printf("\nDiscipline:EEE");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 60:printf("\nDiscipline:I&TE");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 61:printf("\nDiscipline:IP");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 62:printf("\nDiscipline:ME");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;

	      case 63:printf("\nDiscipline:BT");
		      printf("\n\nGender    :Male");
		      printf("\n\nModule    :UG");
		      break;
	     }
	cy=1;
       }
     }
     fclose(fp);
     if(flag==0)            //if the reord to be accessed is not found
     {
      cleardevice();
      setbkcolor(0);
      setcolor(15);
      sprintf(msg," NO SUCH RECORD IN DATABASE");
      outtextxy(180,220,msg);
     }
   }
   return;
}


//function to display the student details
void display()
{
  char l;
  int xy,a,i,j,c,flag=0,tie=0;
  cleardevice();
  setbkcolor(8);
  if(count()==0)              //check if the file is empty
    {
    cleardevice();
    setbkcolor(0);
    setcolor(15);
    sprintf(msg,"\nDatabase Empty");
    outtextxy(220,220,msg);
    }

  else
   {

cc: printf("\n1.Display all\n2.Display with restrictions\nCHOICE:");
    scanf("%d",&xy);
    if(xy==1)  //check if details of all the students have to be displayed
     {
      fp=fopen("rec","r");
ad:   clrscr();
      cleardevice();
      setcolor(1);
      setbkcolor(0);
      settextstyle(1,0,1);
      sprintf(msg,"SRI JAYACHAMARAJENDRA COLLEGE OF ENGINEERING");
      outtextxy(75,10,msg);
      sprintf(msg,"MYSORE-570006");
      outtextxy(230,30,msg);
      sprintf(msg,"STUDENT DATABASE");
      outtextxy(220,60,msg);
      printf("\n\n\n\n\n\n\n\n");
      sprintf(msg,"NAME");
      outtextxy(10,100,msg);
      sprintf(msg,"ID");
      outtextxy(190,100,msg);
      if(tie==1)
       {
	 printf("%s",s.nam);flag=1;
	 for(i=0;i<(24-strlen(s.nam));i++)
	 printf(" ");
	 printf("%s\n",s.id);
       }
      for(j=0;j<20;j++)
      {
	fread(&s,1,sizeof(struct student),fp);
	if(feof(fp))           //check if end of file is reached
	  break;
	printf("%s",s.nam);flag=1;
	for(i=0;i<(24-strlen(s.nam));i++)
	printf(" ");
	printf("%s\n",s.id);
      }
       if(j==20)
	{
	 fread(&s,1,sizeof(struct student),fp);
	 if(feof(fp))return;
	 tie=1;
	 printf("\nPRESS ANY KEY TO CONTINUE....");
	 getch();
	 goto ad;
	}
      fclose(fp);
     }

    else if(xy==2)   //check if to display details with ristrictions
     {
      printf("\nSelect one of the choices in each case as follows:\n");
x:    printf("\n1.To display UG students\n2.To display PG students\n");
      printf("3.For not restricting it with these fields\nCHOICE:");
      scanf("%d",&a);

	if(a==1)                  //check if to display details of UG students
	 {
	 fp=fopen("rec","r");
	 fp1=fopen("tem1","w");
	 while(1)
	  {
	    fread(&s,1,sizeof(struct student),fp);
	    if(feof(fp))          //check if the end of file is reached
	      break;
	    if((l=(s.x&ug))==ug)  //decoding bit string to separate the UG students from rest
	      fwrite(&s,1,sizeof(struct student),fp1);
	  }
       fclose(fp);
       fclose(fp1);
      }
      else if(a==2)              //check if to display details of PG students
       {
       fp=fopen("rec","r");
       fp1=fopen("tem1","w");
       while(1)
       {
	fread(&s,1,sizeof(struct student),fp);
	if(feof(fp))              //check if the end of file is reached
	  break;
	if((l=(s.x&ug))!=ug)      //decoding bit string to separate the PG students from rest
	  fwrite(&s,1,sizeof(struct student),fp1);
       }
       fclose(fp);
       fclose(fp1);
	}
      else if(a==3)               //check if to display details of UG and PG students
	 {
	 fp=fopen("rec","r");
	 fp1=fopen("tem1","w");
	 while(1)                 //as long as the end of file is reached
	  {
	    fread(&s,1,sizeof(struct student),fp);
	    if(feof(fp))          //check if the end of file is reached
	      break;
	    fwrite(&s,1,sizeof(struct student),fp1);
	  }
	 fclose(fp);
	 fclose(fp1);
       }
      else
       {
	  printf("\nWrong choice\n");
	  goto x;
       }

y:    printf("\n1.For Male students\n2.For Female students\n");
      printf("3.For not restricting it with these fields\nCHOICE:");
      scanf("%d",&a);
      if(a==1)                   //check if to display details of MALE students
	{
	 fp=fopen("tem1","r");
	 fp1=fopen("tem2","w");
	 while(1)                //as long as the end of file is reached
	 {
	  fread(&s,1,sizeof(struct student),fp);
	  if(feof(fp))           //check if the end of file is reached
	    break;
	  if((l=(s.x&m))==m)     //decoding bit string to separate the MALE students from rest
	    fwrite(&s,1,sizeof(struct student),fp1);
	 }
	 fclose(fp);
	 fclose(fp1);
	}
      else if(a==2)             //check if to display details of FEMALE students
	{
	 fp=fopen("tem1","r");
	 fp1=fopen("tem2","w");
	 while(1)               //as long as the end of file is reached
	 {
	  fread(&s,1,sizeof(struct student),fp);
	  if(feof(fp))          //check if the end of file is reached
	    break;
	  if((l=(s.x&m))!=m)    //decoding bit string to separate the FEMALE students from rest
	    fwrite(&s,1,sizeof(struct student),fp1);
	 }
	 fclose(fp);
	 fclose(fp1);
	}
      else if(a==3)            //check if to display details of both MALE and FEMALE students
	{
	  fp=fopen("tem1","r");
	  fp1=fopen("tem2","w");
	  while(1)
	  {
	    fread(&s,1,sizeof(struct student),fp);
	    if(feof(fp))       //check if the end of file is reached
	      break;
	    fwrite(&s,1,sizeof(struct student),fp1);
	  }
	  fclose(fp);
	  fclose(fp1);
	}
      else
       {
	printf("\nWrong choice\n");
	goto y;
       }

z:    printf("\n1.For CS students only\n2.For IS students only\n");
      printf("3.For EC students only\n4.For EE students only\n");
      printf("5.For IT students only\n6.For IP students only\n");
      printf("7.For Mech students only\n8.BT students only\n");
      printf("9.For not restricting according to these fields\nCHOICE:");
      scanf("%d",&c);
      switch(c)
       {

	  //to display delails of CS students
	  case 1:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		  fread(&s,1,sizeof(struct student),fp);
		  if(feof(fp))        //check if the end of file is reached
		     break;
		  if(s.x==32||s.x==40||s.x==48||s.x==56)
		     fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

	  //to display details of ISE students

	  case 2:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		  fread(&s,1,sizeof(struct student),fp);
		  if(feof(fp))        //check if the end of file is reached
		    break;
		  if(s.x==33||s.x==41||s.x==49||s.x==57)
		     fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

	  //to display details of EC&E students

	  case 3:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		  fread(&s,1,sizeof(struct student),fp);
		  if(feof(fp))        //check if the end of file is reached
		    break;
		  if(s.x==34||s.x==42||s.x==50||s.x==58)

		    fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

          //to display details of E&E students
          case 4:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		  fread(&s,1,sizeof(struct student),fp);
		  if(feof(fp))        //check if the end of file is reached
		    break;
		  if(s.x==35||s.x==43||s.x==51||s.x==59)

		    fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;


          //to display details of IT students
	  case 5:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		  fread(&s,1,sizeof(struct student),fp);
		  if(feof(fp))        //check if the end of file is reached
		    break;
		  if(s.x==36||s.x==44||s.x==52||s.x==60)

		    fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

          //to display details of IP students
	  case 6:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		 fread(&s,1,sizeof(struct student),fp);
		 if(feof(fp))         //check if the end of file is reached
		   break;
		 if(s.x==37||s.x==45||s.x==53||s.x==61)

		   fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

	  //to display details of MECH students
	  case 7:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		 fread(&s,1,sizeof(struct student),fp);
		 if(feof(fp))         //check if the end of file is reached
		    break;
		 if(s.x==38||s.x==46||s.x==54||s.x==62)

		    fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

	  //to display details of BTE students
	  case 8:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		 fread(&s,1,sizeof(struct student),fp);
		 if(feof(fp))          //check if the end of file is reached
		   break;
		 if(s.x==39||s.x==47||s.x==55||s.x==63)

		   fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

	  //to display details of all students
	  case 9:fp=fopen("tem2","r");
	       fp1=fopen("tem3","w");
	       while(1)
		{
		 fread(&s,1,sizeof(struct student),fp);
		 if(feof(fp))          //check if the end of file is reached
		   break;
		 fwrite(&s,1,sizeof(struct student),fp1);
		}
	       fclose(fp);
	       fclose(fp1);
		 break;

	  default:printf("\nWrong choice\n");
		  goto z;
       }
      fp=fopen("tem3","r");
      clrscr();
      cleardevice();
      setcolor(1);
      setbkcolor(0);
      settextstyle(1,0,1);
      sprintf(msg,"SRI JAYACHAMARAJENDRA COLLEGE OF ENGINEERING");
      outtextxy(75,10,msg);
      sprintf(msg,"MYSORE-570006");
      outtextxy(230,30,msg);
      sprintf(msg,"STUDENT DATABASE");
      outtextxy(220,60,msg);
      printf("\n\n\n\n\n\n\n\n");
      sprintf(msg,"NAME");
      outtextxy(10,100,msg);
      sprintf(msg,"ID");
      outtextxy(190,100,msg);
      if(tie==1)
       {
	 printf("%s",s.nam);flag=1;
	 for(i=0;i<(24-strlen(s.nam));i++)
	 printf(" ");
	 printf("%s\n",s.id);
       }
	for(j=0;j<20;j++)
       {
	fread(&s,1,sizeof(struct student),fp);
	if(feof(fp))
	  break;
	 printf("%s",s.nam);flag=1;
	   for(i=0;i<(24-strlen(s.nam));i++)
		printf(" ");
	   printf("%s\n",s.id);
       }
       if(j==20)
	{
	 fread(&s,1,sizeof(struct student),fp);
	 if(feof(fp))return;
	 tie=1;
	 printf("\nPRESS ANY KEY TO CONTINUE....");
	 getch();
	 goto ad;
	}
      fclose(fp);
     }

    else
     {
      printf("\nWrong choice");
      goto cc;
     }
    if(flag==0)
      {
	cleardevice();
	setbkcolor(0);
	setcolor(15);
	sprintf(msg,"NO SUCH RECORD IN DATABASE");
	outtextxy(180,220,msg);
      }

   }
}

//function to write the student details into a file
void write()
{
      int branch,dis,gen,ch;
      cleardevice();
      setbkcolor(8);
      fp=fopen("rec","a");
      printf("\nEnter the name:");
      fflush(stdin);
      gets(s.nam);
      printf("\nID of the student:");
      scanf("%s",s.id);
      printf("\nADDRESS:");
      fflush(stdin);
      gets(s.addr);
      printf("\nEmail Id:");
      scanf("%s",s.email);
      printf("\nPhone Num:");
      scanf("%s",s.phno);

read: printf("\nPlease enter the branch\n1.CS&E\t2.ISE\t3.EC&E\t");
      printf("4.EE&E\n5.IT&E\t6.IPE\t7.ME\t8.BTE\nCHOICE:");
      fflush(stdin);
      scanf("%d",&ch);
      switch(ch)
	{
	  case 1:branch=0;break;  //check if student belongs to CS&E
	  case 2:branch=1;break;  //check if student belongs to ISE
	  case 3:branch=2;break;  //check if student belongs to EC&E
	  case 4:branch=3;break;  //check if student belongs to EE&E
	  case 5:branch=4;break;  //check if student belongs to IT&E
	  case 6:branch=5;break;  //check if student belongs to IPE
	  case 7:branch=6;break;  //check if student belongs to ME
	  case 8:branch=7;break;  //check if student belongs to BTE
	  default:printf("\nInvalid choice entry");
		  goto read;
	}
      printf("\nEnter the gender\n1.Male\n2.Female\nCHOICE:");
      scanf("%d",&ch);
      if(ch==1)                  //check if the gender is male
	  gen=40;
      else
	  gen=32;
      printf("\nEnter the discipline\n1.UG\n2.PG\nCHOICE:");
      scanf("%d",&ch);
      if(ch==1)                  //check if the discipline is UG
	  dis=48;
      else
	  dis=32;

 //Encoding function for storing the three fields of information in 1 byte as BIT STRINGS
      s.x=branch|gen|dis;
      fwrite(&s,1,sizeof(struct student),fp);
      fclose(fp);
      return;
}

//function to delete a student record from the file
void del()
{
  int w,flag=0;
  char name[20],id[10];
   if(count()==0)                //check if the record is empty
     {
       cleardevice();
       setbkcolor(0);
       setcolor(15);
       sprintf(msg,"\nDatabase Empty");
       outtextxy(220,220,msg);
     }
   else
   {
    fp=fopen("rec","r");
    fp1=fopen("tem","w");
    cleardevice();
    setbkcolor(8);
d:  printf("\nPlease select a choice\n1.Delete by name\n");
    printf("2.Delete by id\nCHOICE:");
    scanf("%d",&w);
    if(w==1)                     //check if to delete record based on name
     {
      printf("Please enter the name of the student whose record is to be deleted \nNAME:");
      fflush(stdin);
      gets(name);

     while(1)
     {
       fread(&s,1,sizeof(struct student),fp);
       if(feof(fp))               //check if end of file is reached
	 break;

       //comparing if entered name matches with the one in the structure
       if(strcmp(s.nam,name)!=0)
	 fwrite(&s,1,sizeof(struct student),fp1);
       else
	 flag=1;
     }
    fclose(fp);
    fclose(fp1);
    fp=fopen("rec","w");
    fp1=fopen("tem","r");
    while(1)
     {
	fread(&s,1,sizeof(struct student),fp1);
	if(feof(fp1))            //check if end of file is reached
	  break;
	fwrite(&s,1,sizeof(struct student),fp);
     }
    fclose(fp);
    fclose(fp1);

     }
    else if(w==2)              //check if to detete record based on id
     {
      printf("\nPlease enter the id of the student whose record is to be deleted \nID:");
      scanf("%s",id);

     while(1)
     {
       fread(&s,1,sizeof(struct student),fp);
       if(feof(fp))            //check if end of file is reached
	 break;
       if(strcmp(s.id,id)!=0)
	 fwrite(&s,1,sizeof(struct student),fp1);
       else
	  flag=1;
     }
    fclose(fp);
    fclose(fp1);
    fp=fopen("rec","w");
    fp1=fopen("tem","r");
    while(1)
     {
	fread(&s,1,sizeof(struct student),fp1);
	if(feof(fp1))          //check if end of file is reached
	  break;
	fwrite(&s,1,sizeof(struct student),fp);
     }
    fclose(fp);
    fclose(fp1);

     }
    else
     {
      printf("Wrong choice");
      goto d;
     }
   cleardevice();
   setbkcolor(0);
   setcolor(15);
   if(flag==0)                 //check if the record to be deleted is not found
      {
       sprintf(msg,"RECORD NOT FOUND");
       outtextxy(180,220,msg);
      }
   else
      {
       sprintf(msg,"RECORD WAS SUCCESSFULLY DELETED");
       outtextxy(180,220,msg);
     }
   }
}

void main()
{
  int ch;
  clrscr();
  while(1)
  {
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk)
    {
      printf("%d",errorcode);
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
    }
   cleardevice();
   setbkcolor(6);
   setcolor(15);
   settextstyle(1,0,1);
   sprintf(msg,"SRI JAYACHAMARAJENDRA COLLEGE OF ENGINEERING");
   outtextxy(75,10,msg);
   sprintf(msg,"MYSORE-570006");
   outtextxy(230,40,msg);
   sprintf(msg,"STUDENT DATABASE");
   outtextxy(220,100,msg);
   sprintf(msg,"1. INSERT A RECORD");
   outtextxy(200,200,msg);
   sprintf(msg,"2. ACCESS A RECORD");
   outtextxy(200,240,msg);
   sprintf(msg,"3. DELETE A RECORD");
   outtextxy(200,280,msg);
   sprintf(msg,"4. DISPLAY THE DATABASE");
   outtextxy(200,320,msg);
   sprintf(msg,"5. EXIT");
   outtextxy(200,360,msg);
   sprintf(msg," Please enter your choice:");
   outtextxy(220,400,msg);
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf("\n\t\t\t\t\t");
   scanf("%d",&ch);
   clrscr();
   switch(ch)                //branching to the operation to be performed
      {
	      case 1:write();//write function called to store student details
		     break;
	      case 2:read(); //read function called ta access student details
		     break;
	      case 3:del();  //del function called to delete student details
		     break;
	      case 4:display();//function called to disply student details
		     break;
	      case 5:exit(0);
	      default:sprintf(msg,"Wrong Choice!!Please enter a valid choice");
		      outtextxy(130,220,msg);
      }
      getch();
      closegraph();
    }
}









