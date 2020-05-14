#include<stdio.h>
 
int main()
{

int num,a,d;
printf("Enter the number:");
scanf("%d:",&num);

printf("Enter the number to be search:");
scanf("%d:",&a);

while(num>0)
	{
	d=num%10;
	if(d==a)
	{
		printf("t");
	}	
	else
	{
		printf("f");	
	}
	num=num/10;
		}


return 0;

}
