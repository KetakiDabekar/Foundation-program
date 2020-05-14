#include<stdio.h>

int main()
{
int n,num,r=0;
printf("Enter the number:");
scanf("%d:",&n);
num=n;

while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}

if(r==num)
	printf("The number is palindrrome\n");
else
	printf("The number is not palindrrome\n");
return 0;

}
