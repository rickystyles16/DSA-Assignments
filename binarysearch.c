#include<stdlib.h>
#include<string.h>
#include<stdio.h>                      
int main () {
int choice=0;
printf("Enter 1 for character seacrh\n Enter 2 for integer search\n Enter 3 for floating point integers search\n ");
 while (choice != 1 && choice != 2 && choice != 3)
   {
      scanf ("%d",&choice);
   }




if (choice == 1)
{
 printf("Enter the number of string elements to be searched\n");
int first,middle,last;
int n,i,j,flag =0;
scanf("%d",&n);
char *search,**a[n],**index[n],*v;

*a = (char **)malloc(n*sizeof(char*));
*index = (char **)malloc(n*sizeof(char*));
search = (char *)malloc(100*sizeof(char));
v = (char *)malloc(100*sizeof(char));

for (i=0;i<n;i++)
{
	a[i] = (char *)malloc(100*sizeof(char));
        index[i] = (char *)malloc(100*sizeof(char));
}


printf("Enter the elements\n");
for(i=0;i<n;i++)
{
	scanf("%s",a[i]);
        index[i] = a[i];
}

for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
		if (strcmp(a[i], a[j]) == -1)
 		{
 			strcpy(v,a[i]);
			 strcpy(a[i],a[j]);
         		strcpy(a[j],v);
		}
	}
}

printf("Enter the element you want to search for\n");
scanf ("%s",search);
first = 0;
last = n-1;
middle = (last + first)/2;

while (first <= last)
{
	if (strcmp (a[middle], search) == -1)
             first = middle +1;
        else if (strcmp(a[middle],search)==0)
         {
             for (i=0;i<n;i++)
              { 
                if (strcmp(search,index[i])==0)
 		break;
              }
             printf("%s found at position %d\n",search,i+1); 
             flag =1;
             break;
         }
        else 
         {
             last = middle -1;
             middle = (last + first)/2;
         }
} 
if (flag == 0)
printf("Search Element not found \n");

}










 
 
























if(choice == 2) 

{
 printf("Enter the number of integer elements to be searched\n");
int first,middle,last;
int search,n,i,j,flag =0,v;
scanf("%d",&n);
int a[n],index[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
        index[i] = a[i];
}

for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
		if (a[i]< a[j])
 		{
 			v = a[i];
			a[i] = a[j];
         		a[j] = v;
		}
	}
}

printf("Enter the element you want to search for\n");
scanf ("%d",&search);
first = 0;
last = n-1;
middle = (last + first)/2;

while (first <= last)
{
	if (a[middle] < search)
             first = middle +1;
        else if (a[middle] == search)
         {
             for (i=0;i<n;i++)
              { 
                if (search == index[i])
 		break;
              }
             printf("%d found at position %d\n",search,i+1); 
             flag =1;
             break;
         }
        else 
         {
             last = middle -1;
             middle = (last + first)/2;
         }
} 
if (flag == 0)
printf("Search Element not found \n");


}









if (choice == 3)
{
 printf("Enter the number of integer elements to be searched\n");
int n,first,middle,last,i,j,flag=0;
float search,v;
scanf("%d",&n);
float a[n],index[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
	scanf("%f",&a[i]);
        index[i] = a[i];
}

for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
		if (a[i]< a[j])
 		{
 			v = a[i];
			a[i] = a[j];
         		a[j] = v;
		}
	}
}

printf("Enter the element you want to search for\n");
scanf ("%f",&search);
first = 0;
last = n-1;
middle = (last + first)/2;

while (first <= last)
{
	if (a[middle] < search)
             first = middle +1;
        else if (a[middle] == search)
         {
             for (i=0;i<n;i++)
              { 
                if (search == index[i])
 		break;
              }
             printf("%f found at position %d\n",search,i+1); 
             flag =1;
             break;
         }
        else 
         {
             last = middle -1;
             middle = (last + first)/2;
         }
   
} 
if (flag == 0)
printf("Search Element not found \n");


}

















return 0;
}
