#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

FILE *fp;
FILE *fp1;

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
char mech=38,bt=39,field,q;

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
    int cy,i,p;
    char name[20],id[10];
    fp=fopen("rec","r");
    rewind(fp);
    if(count()==0)
     printf("\nDatabase empty");
    else
    {
pq:   printf("\nPlease select a choice\n1.Access by name\n2.Access by  id");
      scanf("%d",&p);
      if(p==1)
      {
	 printf("\nPlease enter the name to access the details \n");
	 fflush(stdin);
	 gets(name);
	}
      else if(p==2)
      {
	 printf("\nPlease enter the id of the student to access the details of the student\n");
	 scanf("%s",id);
      }
      else
      {
	 printf("\nWrong choice");
	 goto pq;
      }
      while(!feof(fp))
       {
	   fread(&s,1,sizeof(struct student),fp);
	   if((strcmp(s.id,id)==0)||(strcmp(s.nam,name)==0))
	   {
	     cy=0;
	     break;
	   }
       }
      if(cy==0)
       {
	  printf("\nThe student details are as follows:");
	  printf("\nName:%s",s.nam);
	  printf("\nStudents ID:");
	  puts(s.id);
	  printf("\nADDRESS:");
	  puts(s.addr);
	  printf("\nEmail id:");
	  puts(s.email);
	  printf("\nPhone no:");
	  puts(s.phno);
	  switch(s.x)
	     {
	      case 32:printf("\nDiscipline:CS&E");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 33:printf("\nDiscipline:IS&E");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 34:printf("\nDiscipline:EC&E");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 35:printf("\nDiscipline:EEE");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 36:printf("\nDiscipline:I&TE");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 37:printf("\nDiscipline:IP");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 38:printf("\nDiscipline:ME");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 39:printf("\nDiscipline:BT");
		        printf("\nGender:Female");
		        printf("\nModule:PG");
		        break;

	      case 40:printf("\nDiscipline:CS&E");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 41:printf("\nDiscipline:IS&E");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 42:printf("\nDiscipline:EC&E");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 43:printf("\nDiscipline:EEE");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 44:printf("\nDiscipline:I&TE");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 45:printf("\nDiscipline:IP");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 46:printf("\nDiscipline:ME");
  		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 47:printf("\nDiscipline:BT");
		        printf("\nGender:Male");
		        printf("\nModule:PG");
		        break;

	      case 48:printf("\nDiscipline:CS&E");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 49:printf("\nDiscipline:IS&E");
		        printf("\nGender:Female");
		        printf("\nModule:UG");break;

	      case 50:printf("\nDiscipline:EC&E");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 51:printf("\nDiscipline:EEE");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 52:printf("\nDiscipline:I&TE");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 53:printf("\nDiscipline:IP");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 54:printf("\nDiscipline:ME");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 55:printf("\nDiscipline:BT");
		        printf("\nGender:Female");
		        printf("\nModule:UG");
		        break;

	      case 56:printf("\nDiscipline:CS&E");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 57:printf("\nDiscipline:IS&E");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 58:printf("\nDiscipline:EC&E");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 59:printf("\nDiscipline:EEE");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 60:printf("\nDiscipline:I&TE");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 61:printf("\nDiscipline:IP");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 62:printf("\nDiscipline:ME");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;

	      case 63:printf("\nDiscipline:BT");
		        printf("\nGender:Male");
		        printf("\nModule:UG");
		        break;
	     }
       }
      else
       printf("\nNo such record found");
     }
   return;
}


void display()
{
  int xy,a,c;
  if(count()==0)
    printf("\nDatabase empty");
  else
   {

cc: printf("\n1.Display all\n2.Display with restrictions\n");
    scanf("%d",&xy);
    if(xy==2)
     {
      printf("\nSelect one of the choices in each case as follows:\n");

x:    printf("\n1.To display UG students\n2.To display PG students\n");
      printf("3.For not restricting it with these fields");
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
      printf("3.For not restricting it with these fields");
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
      printf("9.For not restricting according to these fields");
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
      rewind(fp);
      while(1)
       {
        fread(&s,1,sizeof(struct student),fp);
        q=s.x&field;
        if(feof(fp))
          break;
        if(q==field)
          printf("\n%s\t%s",s.nam,s.id);
       }
      fclose(fp);
     }
    else if(xy==1)
     {
      fp=fopen("rec","r");
      while(1)
      {
        fread(&s,1,sizeof(struct student),fp);
        if(feof(fp))
          break;
        printf("%s\t%s\n",s.nam,s.id);
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

read: printf("\nPlease enter the branch\n1.CS&E\n2.ISE\n3.EC&E\n");
      printf("4.EE&E\n5.IT&E\n6.IPE\n7.ME\n8.BTE\n");
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
      printf("Enter the gender\n1.Male\n2.Female\n");
      scanf("%d",&ch);
      if(ch==1)
	  gen=40;
      else
	  gen=32;
      printf("Enter the discipline\n1.UG\n2.PG");
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
  int w;
  char name[20],id[10];
  fp=fopen("rec","r");
  if(count()==0)
    printf("Database empty");
  else
   {
    fp1=fopen("tem","w");

d:  printf("\nPlease select a choice\n1.Delete by name\n");
    printf("2.Delete by id\n");
    scanf("%d",&w);
    if(w==1)
     {
      printf("Please enter the name of the detail to be deleted \n");
      fflush(stdin);
      gets(name);
     }
    else if(w==2)
     {
      printf("\nPlease enter the id of the detail to be deleted \n");
      scanf("%s",id);
     }
    else
     {
      printf("Wrong choice");
      goto d;
     }
     while(1)
     {
       fread(&s,1,sizeof(struct student),fp);
       if(feof(fp))
	 break;
       if((strcmp(s.id,id)!=0)||(strcmp(s.nam,name)!=0))
	 fwrite(&s,1,sizeof(struct student),fp1);
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
}


void main()
{
  int ch;
  clrscr();
  while(1)
     {
       clrscr();
       printf("\n1.To enter the details of a student\n");
       printf("2.Access the details of a particular student\n");
       printf("3.To delete a particular students record\n");
       printf("4.To display details of students\n5.Exit");
       printf("\nPlease enter your choice:\n");
       scanf("%d",&ch);
       switch(ch)
	   {
	      case 1:write();
                 getch();
		     break;
	      case 2:read();
                 getch();
		     break;
	      case 3:del();
                 getch();
		     break;
	      case 4:display();
                 getch();
		     break;
	      case 5:exit(0);
	      default:printf("Wrong Choice:Please enter a valid choice");
                    getch();
	   }
    }
}









