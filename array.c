#include<stdio.h>
int main()
{
	int a[10],pos,value,i,n;
	
	printf("Enter Elemrnts in an array:\n");
	for(i=0; i<8; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position To insert element:");
	scanf("%d",&pos);
	
	printf("Enter value to insert");
	scanf("%d",&value);
	for(i=n,i>pos,i--)
	{
		a[i]=a[i-1];
	}
	a[pos-i]=value;
	printf("Array after indetion:")
		for (int i=0;i<10;i++)
		{
			printf("%d",a[i]);
			return 0;
		}
}
