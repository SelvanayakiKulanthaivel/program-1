#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,a;
printf("Enter number of pairs:");
scanf("%d",&a);
a=2*n;
printf("\n Number of students:",a);
for(i=1;i<=n;i++)
{
a=i++;
printf("The pairs are:%d %d",i,a);
}
getch();
}
