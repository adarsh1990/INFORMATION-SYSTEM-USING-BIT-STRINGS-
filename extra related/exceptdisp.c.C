#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

FILE *fp;
FILE *fp1;

int gdriver = DETECT, gmode, errorcode;
char msg[500];

struct student
{
char nam[20];
char x;
char addr[60];
char id[10];
char email[40];
char phno[15];
}s;

char m=40,f=32,ug=48,pg=32,cs=32,is=33,ec=34,ee=35,it=36,ip=37;
char mech=38,bt=39,field=0,q;

int count()
{
   int c=0;
   fp=fopen("rec","r");
   while(1)
    {
      fread(&s,1,sizeof(struct student),fp);
      if(feof(fp))
	 break;
      c++;
    }
   fclose(fp);
   return c;
}

void read()
{
    int cy=1,i,p,flag=0;
    char name[20],id[10];
    cleardevice();
    setbkcolor(8);
    if(count()==0)
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
       if(p==1)
	 {
	   printf("\nPlease enter the name to access the details \nNAME:");
	   fflush(stdin);
	   gets(name);
	 }
      else if(p==2)
	  {
	   printf("\nPlease enter the id of the student to access the details of the student\nID:");
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
	   if(feof(fp))break;
	   if((strcmp(s.id,id)==0)||(strcmp(s.nam,name)==0))
	     cy=0;
	   if(cy==0)
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
	     switch(s.x)
	     {
	      case 32:printf("\nDiscipline:CS&E");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 33:printf("\nDiscipline:IS&E");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 34:printf("\nDiscipline:EC&E");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 35:printf("\nDiscipline:EEE");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 36:printf("\nDiscipline:I&TE");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 37:printf("\nDiscipline:IP");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 38:printf("\nDiscipline:ME");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 39:printf("\nDiscipline:BT");
			printf("\n\nGender:Female");
			printf("\n\nModule:PG");
			break;

	      case 40:printf("\nDiscipline:CS&E");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 41:printf("\nDiscipline:IS&E");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 42:printf("\nDiscipline:EC&E");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 43:printf("\nDiscipline:EEE");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 44:printf("\nDiscipline:I&TE");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 45:printf("\nDiscipline:IP");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 46:printf("\nDiscipline:ME");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 47:printf("\nDiscipline:BT");
			printf("\n\nGender:Male");
			printf("\n\nModule:PG");
			break;

	      case 48:printf("\nDiscipline:CS&E");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 49:printf("\nDiscipline:IS&E");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");break;

	      case 50:printf("\nDiscipline:EC&E");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 51:printf("\nDiscipline:EEE");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 52:printf("\nDiscipline:I&TE");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 53:printf("\nDiscipline:IP");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 54:printf("\nDiscipline:ME");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 55:printf("\nDiscipline:BT");
			printf("\n\nGender:Female");
			printf("\n\nModule:UG");
			break;

	      case 56:printf("\nDiscipline:CS&E");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 57:printf("\nDiscipline:IS&E");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 58:printf("\nDiscipline:EC&E");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 59:printf("\nDiscipline:EEE");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 60:printf("\nDiscipline:I&TE");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 61:printf("\nDiscipline:IP");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 62:printf("\nDiscipline:ME");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;

	      case 63:printf("\nDiscipline:BT");
			printf("\n\nGender:Male");
			printf("\n\nModule:UG");
			break;
	     }
	cy=1;
       }
     }
     fclose(fp);
     if(flag==0)
     printf("\n\nNO SUCH RECORD FOUND");
   }
   return;
}

void display()
{
  int xy,a,c,i;
  cleardevice();
  setbkcolor(8);
  if(count()==0)
    {
    cleardevice();
    setbkcolor(0);
    setcolor(15);
    sprintf(msg,"\nDatabase Empty");
    outtextxy(220,220,msg);
    }
  else
   {
cc: printf("Please select your choice");
    printf("\n1.Display all\n2.Display with restrictions\nCHOICE:");
    scanf("%d",&xy);
    if(xy==2)
     {
      printf("\nSelect one of the choices in each case as follows:\n");

x:    printf("\n1.To display UG students\n2.To display PG students\n");
      printf("3.For not restricting it with these fields\nCHOICE:");
      scanf("%d",&a);
      if(a==1)
	  field=ug;
      else if(a==2)
	  field=pg;
      else if(a==3)
	  field=32;
      else
       {
	  printf("\nWrong choice\n");
	  goto x;
       }

y:    printf("\n1.For Male students\n2.For Female students\n");
      printf("3.For not restricting it with these fields\nCHOICE:");
      scanf("%d",&a);
      if(a==1)
	field=field|m;
      else if(a==2)
	field=field|f;
      else if(a==3)
	field=field|32;
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
	  case 1:field=field|cs;
		 break;
	  case 2:field=field|is;
		 break;
	  case 3:field=field|ec;
		 break;
	  case 4:field=field|ee;
		 break;
	  case 5:field=field|it;
		 break;
	  case 6:field=field|ip;
		 break;
	  case 7:field=field|mech;
		 break;
	  case 8:field=field|bt;
		 break;
	  case 9:field=field|32;
		 break;
	  default:printf("\nWrong choice\n");
		  goto z;
       }
      fp=fopen("rec","r");
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
      rewind(fp);
      while(1)
       {
	fread(&s,1,sizeof(struct student),fp);
	q=s.x&field;
	if(feof(fp))
	  break;
	if(q==field)
	  {
	    printf("%s",s.nam);
	    for(i=0;i<(24-strlen(s.nam));i++)
		printf(" ");
	    printf("%s\n",s.id);
	  }
       }
      fclose(fp);
     }
    else if(xy==1)
     {
      fp=fopen("rec","r");
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
      while(1)
      {
	fread(&s,1,sizeof(struct student),fp);
	if(feof(fp))
	  break;
	printf("%s",s.nam);
	for(i=0;i<(24-strlen(s.nam));i++)
	printf(" ");
	printf("%s\n",s.id);
      }
      fclose(fp);
     }
    else
     {
      printf("\nWrong choice");
      goto cc;
     }
   }
}


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
	  case 1:branch=0;break;
	  case 2:branch=1;break;
	  case 3:branch=2;break;
	  case 4:branch=3;break;
	  case 5:branch=4;break;
	  case 6:branch=5;break;
	  case 7:branch=6;break;
	  case 8:branch=7;break;
	  default:printf("\nInvalid choice entry");
		  goto read;
	}
      printf("\nEnter the gender\n1.Male\n2.Female\nCHOICE:");
      scanf("%d",&ch);
      if(ch==1)
	  gen=40;
      else
	  gen=32;
      printf("\nEnter the discipline\n1.UG\n2.PG\nCHOICE:");
      scanf("%d",&ch);
      if(ch==1)
	  dis=48;
      else
	  dis=32;
      s.x=branch|gen|dis;
      fwrite(&s,1,sizeof(struct student),fp);
      fclose(fp);
      return;
}


void del()
{
  int w,flag=0;
  char name[20],id[10];
   if(count()==0)
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
    if(w==1)
     {
      printf("Please enter the name of the student whose record is to be deleted \nNAME:");
      fflush(stdin);
      gets(name);

     while(1)
     {
       fread(&s,1,sizeof(struct student),fp);
       if(feof(fp))
	 break;
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
	if(feof(fp1))
	  break;
	fwrite(&s,1,sizeof(struct student),fp);
     }
    fclose(fp);
    fclose(fp1);

     }
    else if(w==2)
     {
      printf("\nPlease enter the id of the student whose record is to be deleted \nID:");
      scanf("%s",id);

     while(1)
     {
       fread(&s,1,sizeof(struct student),fp);
       if(feof(fp))
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
	if(feof(fp1))
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
   if(flag==0)
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
   switch(ch)
      {
	      case 1:write();
		     break;
	      case 2:read();
		     break;
	      case 3:del();
		     break;
	      case 4:display();
		     break;
	      case 5:exit(0);
	      default:printf("Wrong Choice:Please enter a valid choice");
      }
      getch();
      closegraph();
    }
}









