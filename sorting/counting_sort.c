#include<stdio.h>
void main()
{
	int n,i;
	
	
	printf("Enter the size of Input array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in array\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
    printf("PRINTING\n");
    for(i=0;i<n;i++)
	   printf("%d ",a[i]);
	printf("\n");
	int count[6]={0};
	for(i=0;i<n;i++)
	   printf("%d ",count[i]);
	for(i=0;i<n;i++)
	   count(a[i])++;
	for(i=0;i<n;i++)
	   printf("%d ",count[i]);
}
