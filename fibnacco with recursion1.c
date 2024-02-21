#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Fibnaocci series :");
	printf("%d %d ",0,1);
		printFibnoacci(n-2);
}
int printFibnoacci(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
			n3=n2+n1;
			n1=n2;
			n2=n3;
				printf("%d ",n3);
				printFibnoacci(n-1);
				
	}
	return 0;
}
