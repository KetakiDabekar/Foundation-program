#include<stdio.h>

int main()
{
int n,d,r;
printf("Enter the number:");
scanf("%d:",&n);

while(n>0)
{
	d=n%10;
	n=n/10;
	r=d%2;
	if(r==0)
	printf("%d:",d);
}

return 0;
}
