#include<stdio.h>
#include<time.h>
int main ()
{
int num,i,j;
srand(time(0));
FILE *fp;
fp = fopen("Random_numbers.txt","w");
for (i=0;i<100000;i++)
{
num = rand()%100000 +1;

fprintf(fp,"%d",num);
fprintf(fp,"\n");
}

fclose(fp);
return 0;
}
