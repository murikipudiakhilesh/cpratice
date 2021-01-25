#include<stdio.h>
#include<limits.h>

int main()
{
	int 	**pp,*p;
	char 	*cp,**cpp;

	pp=1;
	p=1;
	cpp=1;
	cp=1;
	
	printf("value of **pp:%p\n",pp);
	printf("value of *p:%p\n",p);

	printf("value of **cpp:%p\n",cpp);
	printf("value of *cp:%p\n",cp);
	
	
	cpp=cpp+1;
	cp=cp+1;		
	pp=pp+1;
	p=p+1;		
	

	printf("value of **pp:%p\n",pp);
	printf("value of *p:%p\n",p);

	printf("value of **cpp:%p\n",cpp);
	printf("value of *cp:%p\n",cp);

	unsigned long bit=0,bitcnt=0;

	bit= (~0);
	while(bit != 0)
	{
		bitcnt=bitcnt+(bit&1);
		bit=bit>>1;
		//bit=bit&(bit-1);
		//bitcnt++;
	}
	printf("%d bits\n", (int)(CHAR_BIT * sizeof(void *)));
	printf("%d bits\n", sizeof(int));
	printf("%d bits\n", sizeof(unsigned int));
	printf("%d bits\n", sizeof(long));
	printf("cpu architechture:%d\n",bitcnt);
	printf("%d byte\n",(sizeof(void *)));
	printf("%d byte\n",(sizeof(int *)));
	printf("%d byte\n",(sizeof(float *)));
	printf("%d byte\n",(sizeof(long *)));
return 0;
}
