#include<stdio.h>
void main()
{
	printf("Enter the size of  array\n");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int count[6]={0};
	for(i=0;i<6;i++)
	   count[a[i]]++;
	   
	printf("PRINTING NEW COUNT ARRAY\n");
	for(i=0;i<6;i++)
	   printf("%d ",count[i]);
	printf("\n");

    int k=(n/4);
    for(i=0;i<6;i++)
    {
    	if(count[i]==k)
    	   break;
	}
	

}
