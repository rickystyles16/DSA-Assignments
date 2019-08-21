#include<stdio.h>
#include<time.h>
int main ()
{
int i,j;
char letter;
srand(1);
FILE *fp;
fp = fopen("Randomstrings.txt","w");

 for (i=0;i<100000;i++)
{
 for (j=0;j<10;j++)
{
letter  = rand() %26 + 65;
fprintf(fp,"%c",letter);
}
fprintf(fp,"\n");
}
 
fclose(fp);

return 0 ;
}
