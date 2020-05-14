#include<stdio.h>

int main()
{
int n,cnt=0;
printf("Enter the number:");
scanf("%d:",&n);

while(n>0)
{
	cnt++;
	n=n/10;
}

printf("The total digits in given number is %d\n",cnt);
return 0;
}
