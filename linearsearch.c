#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int n=0;
while (n != 1 && n != 2 && n != 3)
{
printf("Enter 1 for Character search\n Enter 2 for integer search\n Enter 3 for floating point numbers search\n");
scanf("%d",&n);
}

if(n==1)
{
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements\n");
int i,flag=0;
char *a[n],*x;
for (i=0;i<n;i++)
{
 a[i] = malloc(100 * sizeof(char)); 
 scanf ("%s",a[i]);
}
x = malloc(100 * sizeof(char));
printf("Enter the element you want to search :");
scanf("%s",x);
 for(i=0;i<n;i++)
  { 
   if (strcmp(a[i],x)==0)
     {
      printf("%s found at position %d\n",x,i+1);
      flag =1;
     }
  }
if (flag == 0)
{
   printf("Not found\n");
}
return 0;
}


if (n==2)
{
printf("Enter the number of elements : ");
scanf("%d",&n);
int x,i,flag=0;
int a[n];
for (i=0;i<n;i++)
{
scanf ("%d",&a[i]);
}
printf("Enter the element you want to search :");
scanf("%d",&x);
for (i=0;i<n;i++)
{
   if (a[i] == x)
  { 
     printf("%d found at position %d\n",x,i+1);
     flag = 1;
  }
}
if (flag == 0)
printf("Not found\n");
return 0;
}




if (n==3)
{
printf("Enter the number of elements : ");
scanf("%d",&n);
int i,flag=0;
float x,a[n];
for (i=0;i<n;i++)
{
scanf ("%f",&a[i]);
}
printf("Enter the element you want to search :");
scanf("%f",&x);
for (i=0;i<n;i++)
{
   if (a[i] == x)
  { 
     printf("%f found at position %d\n",x,i+1);
     flag = 1;
  }
}
if (flag ==0)
printf("Not found\n");
}
 return 0;
}











