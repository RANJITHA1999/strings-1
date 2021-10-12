//str rev
#include<stdio.h>
#include<string.h>
int main()
{
int lens1=0,i;
char s1[10]="ranju";
char ch;
lens1=strlen(s1);
for(i=0;i<lens1/2;i++)
{
ch=s1[i];
s1[i]=s1[lens1-1-i];
s1[lens1-1-i]=ch;
}
printf("%s",s1);
return 0;
}




/*strcmp
#include<stdio.h>
#include<string.h>
int main()
{
int flag=0,i;
char s1[10]="ranju";
char s2[10]="rakshu";
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
if(s1[i]!=s2[i]){
flag=1;
break;
}
}
if(flag==1)
{
printf("not same");
}
else
{
printf("same");
}
return 0;
}
