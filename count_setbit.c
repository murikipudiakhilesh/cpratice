#include<stdio.h>

int cnt=0;

int count(int a)
{
	printf("Value given is:%p\n",a);
	while( a != 0)
	{
		a = a&(a-1);
		cnt++;
	}
	printf("No of set bits are:%d\n",cnt);
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Please pass the arg\n");
		return 0;
	}
	count(atoi(argv[1]));
	return 0;
}

