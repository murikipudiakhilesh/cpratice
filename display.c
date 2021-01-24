#include<stdio.h>

void display(int n)
{
	int mask=0;
	printf("value of n is:%p\n",n);
#if 1
	for(int i=31;i >= 0 ;i--)
	{
		mask=1<<i;
		(n&mask)?printf("1"):printf("0");
		
		if(i%8 == 0)
			printf(":");
		 
	}
#endif	
}
