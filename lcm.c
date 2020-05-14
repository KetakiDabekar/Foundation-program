#include<stdio.h>

int main()
{
int a,b,lcm;
printf("Enter the first number:");
scanf("%d:",&a);

printf("Enter the second number:");
scanf("%d:",&b);

lcm=(a>b) ? a : b;
while(1)
{
	if(lcm % a == 0 && lcm % b == 0)
	{
		printf("lcm of %d and %d is %d",a,b,lcm);
		printf("\n");
		break;
	}
	++lcm;

}
return 0;


}
