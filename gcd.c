#include<stdio.h>

int main()
{
int a,b,i,gcd;
printf("Enter the Two Numbers:\n");
printf("Enter the first number:\n");
scanf("%d:",&a);

printf("Enter the second number:\n");
scanf("%d:",&b);

for(i=1 ; i<=a && i<=b ; i++)
{
	if((a % i==0) && (b % i==0))
	{
		gcd=i;
	}
}
printf("GCD of %d and %d is %d\n",a,b,gcd);

return 0;

}
