#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j,m;
clrscr();
scanf("%d %d",&m,&n);
for(i=m;i<=n;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
getch();
return 0;
}
