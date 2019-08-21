#include<stdio.h>
int fibo(int x)
{
if (x==1 || x== 0)
return x;
else
return fibo(x-1) + fibo(x-2);
}

int main ()
{
int x,a=0,b=1,ans=0;
scanf("%d",&x);
for (int i=0;i<x-1;i++)
{
  ans = a + b;
  a = b;
  b = ans; 
}
printf("The fibonacci number by iteration is %d\n",ans);
printf("The fibonacci number by recursion is %d\n",fibo(x));
return 0;
}
