#include<stdio.h>

int main(int argc,char *argv[])
{

	int p=0,n=0,v=0;

	if(argc != 3)
		printf("please enter the P=position and N=number of bits from there,and V=value to be modified");

	p=(int)(atoi(argv[1]));
	n=(int)(atoi(argv[2]));
	v=(int)(atoi(argv[3]));

	printf("The arguments are p=%d,n=%d,v=%d\n",p,n,v);
	
	display(v);
	//suppose p=7,n=4, p=0x64
	//setp 1:~0			= 1111 1111 1111 1111 1111 1111 1111 1111
	//setp 2:~0<<n			= 1111 1111 1111 1111 1111 1111 1111 0000 
	//setp 3:(~(~0<<n)) 		= 0000 0000 0000 0000 0000 0000 0000 1111
	//setp 4:(~(~0<<n))<<p-n+1 	= 0000 0000 0000 0000 0000 0000 1111 0000
	//				=                               7654 3210
	//setp 4:(~(~0<<n))<<p+1 	= 0000 0000 0000 0000 0000 1111 0000 0000
	
	//setp 5:to clear ~(setp 4)     = 1111 1111 1111 1111 1111 1111 0000 1111

	if(n>0)
	{
		v=(v & (~(((~((~0)<<n))<<p-n+1))));
		printf("N is + Value after changing the bits are:%p\n",v);
		display(v);
	}
	else
	{
		v= v & ( ~((~((~0)<<-n)<<p+1) ));
		printf("\nN is - Value after changing the bits are:%p\n",v);
		display(v);
	}
}
	
