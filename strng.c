//1)puts,gets
/*#include<stdio.h>
int main()
{
char name[10];
printf("enter string:\n");
scanf("%s",name);//wide space are not considered so we use gets()
printf("%s",name);
return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
char name[3];
printf("enter string:\n");
gets(name);
printf("%s",name);
return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
char name[10];
printf("enter string:\n");
scanf("%s",name);//ranjitha
printf("%s\n",name);//ranjitha
printf("%.5s\n",name);//ranji
printf("%10.5s\n",name);//     ranji
printf("%s\n",&name);//ranjitha
//printf("%s\n",name[2]);//error
printf("%s\n",&name[2]);//njitha
return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
char name[10];
printf("enter string:\n");
scanf("%s",name);//ranjitha
puts(name);//ranjitha
puts(&name);//ranjitha
puts(&name[2]);//njitha
puts(name[2]);//error core dumped
return 0;
}*/
//2)length of string
//a)using predefined function(strlen)
#include<stdio.h>
#include<string.h>
int main()
{
char name[10];
unsigned int count=0;
printf("enter string:\n");
scanf("%s",name);//ranjitha
count=strlen(name);

printf("%u",count);
return 0;
}
//wthout strlen()
#include<stdio.h>
#include<string.h>
int main()
{
unsigned int count=0;
int i=0;
char name[10];
printf("enter string:\n");
scanf("%s",name);//ranjitha
while(name[i]!='\0')
{
count++;
i++;
}
printf("%d",count);
return 0;
}

