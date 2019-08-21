#include<stdio.h>
#include<string.h>
int main ()
{
char surname[31];
char name [31];
long long int sum1=0,sum2=0;
scanf("%s",name);
scanf ("%s",surname);
int flag =0,length,i=1,j=0,ten1=1,ten2=1;
length = strlen(name) ;
length = length + strlen(surname);
if (length % 2 == 0 )
{
	while (name[j] != '\0')
          {
                if (i > (length/2))
                      flag=1;
                if (flag == 0)
                {
		sum1 *= 100;
		sum1 = sum1 + name[j];
                }
                else if (flag = 1)
                {
		sum2 *= 100;
		sum2 = sum2 + name[j];
                }  
		i++;
		j++; 
       	  }
	j=0;	
         while (surname[j] != '\0')
	 {
                if (i > (length/2))
                      flag=1;
                if (flag == 0)
                {
		sum1 *= 100;
		sum1 = sum1 + surname[j];
                }
                else if (flag = 1)
                {
		sum2 *= 100;
		sum2 = sum2 + surname[j];
                }  
		i++; 
		j++; 
      	  }
         
}
 if (length % 2 != 0)
{

	while (name[j] != '\0')
          {

                if (i < ((length/2)+1))
                {
		sum1 *= 100;
		sum1 = sum1 + name[j];
                }
                if (i > ((length/2)+1))
                {
		sum2 *= 100;
		sum2 = sum2 + name[j];
                }

		if (i == ((length/2)+1))
                {
		sum2 = sum2*10; 
		sum2 = sum2 + (name[j]%10);
                name[j] = name[j]/10;
                sum1 = sum1*10;
                sum1 = sum1 + name[j];
		}
		j++;
		i++; 
       	  }
      j=0;
	while (surname[j] != '\0')
          {

                if (i < ((length/2)+1))
                {
		sum1 *= 100;
		sum1 = sum1 + surname[j];
                }
                if (i > ((length/2)+1))
                {
		sum2 *= 100;
		sum2 = sum2 + surname[j];
                }

		if (i == ((length/2)+1))
                {
		sum2 = sum2*10; 
		sum2 = sum2 + (surname[j]%10);
                surname[j] = surname[j]/10;
                sum1 = sum1*10;
                sum1 = sum1 + surname[j];
		}
		j++;
		i++; 
       	  }


}

sum1 = sum1 + sum2;
sum2 = sum1 % 1003;


printf("%lld\n",sum2);
return 0;

}
