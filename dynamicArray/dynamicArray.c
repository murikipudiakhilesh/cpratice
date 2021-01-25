#include<stdio.h>
#include<stdlib.h>



//int array[3][3];


//1 2 3
//1 2 3
//1 2 3

//nt      100 112 124=========a[
//a[0][0]; 100 104 108
//a[1][0]; 112 116 120
//a[2][0]; 124 128 132

//sizeof((int)*rows*coloums)+sizeof(int*rows);

//int *a[3];

//a++;
//{{},{1,2,3},{4,5,6},{7,8,9}};
int usingDoublePointer(int rows,int coloums)
{
	int *ptr,**arr,cnt=10,i,j,len;
	len=(sizeof(int)*rows*coloums)+(sizeof(int *)*rows);
	arr=(int **)malloc((sizeof(int)*rows*coloums)+(sizeof(int *)*rows));
	memset(arr,0,len);
	printf("Value of arr:%p\n",arr);

	
	printf("Exp 1 Value of ptr:%p\n",(int *)arr+3);
	printf("Exp 2 Value of ptr:%p\n",(int *)(arr+3));
	ptr= (int *)arr+rows;//base address+ sizeof(int*)*rows;

	printf("Wrong Value of ptr:%p\n",ptr);

	ptr=(int *)(arr+rows);//base address+ sizeof(int*)*rows;
	
	printf("Value of ptr:%p\n",ptr);
	for(i=0;i<rows;i++)
	{
		arr[i]=ptr+coloums*i;
		printf("Value of arr[%d]:%p\n",i,arr[i]);
	}

	printf("Creation is completed\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<coloums;j++)
		{
			printf("Loading array values:a[%d][%d]\n",i,j);
			printf("Loading array values:%p\n",&arr[i][j]);
			arr[i][j] = cnt++; //*(*(arr+i)+j)
		}
	}

	for(i=0;i<rows;i++)
	{
		for(j=0;j<coloums;j++)
		{
			printf("a[%d][%d]:%d \t",i,j,arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	usingDoublePointer(3,3);
	return 0;
}

int usingarrayPointer()
{
	int rows=3,coloums=3;
	int (*a)[3];
	int i,j;
	a=malloc((sizeof(int)*rows*coloums)+sizeof(int*)*rows);
	
	for(i=0;i<rows;i++)
	{
		printf("value of head[i]=%p\n",a[i]);
	}
	int cnt=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<coloums;j++)
		{
			a[i][j]=cnt++;	
		}
	}	
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<coloums;j++)
		{
			printf("a[%d][%d]:%d ",i,j,a[i][j]);
		}
		printf("\n");
	}	
}
