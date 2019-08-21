#include<stdio.h>
int fact(int x)
{
if (x==1 || x==0)
return 1;
else
return x*fact(x-1);
}
int main ()
{
int x,itr =1,i;
scanf("%d",&x);
for (i=x;i>0;i--)
{
itr = itr * i;
}
printf("Factorial by recursion is %d\n",fact(x));
printf("Factorial by iteration is %d\n",itr);
return 0;
}
