#include<stdio.h>
int main()
{
	int n,i;
	int c,max;
	int b[9];
	
	printf("Enter the size of Input array\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elements in array\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
    
	for(i=1;i<n;i++){
		max=a[i-1];
       if(a[i]>a[i-1])
          max =a[i];
        else
        max=a[i-1];
    }
    printf("max is %d\n",max);
    
	printf("PRINTING THE ARRAY\n");
    for(i=0;i<n;i++)
	   printf("%d ",a[i]);
	printf("\n");
	
	int max1=max+1;
	int count[max1]={0};
	printf("PRINTING INITIAL COUNT ARRAY\n");
	for(i=0;i<max1;i++)
	   printf("%d ",count[i]);
	printf("\n");
	
	for(i=0;i<n;i++)
	   	count[a[i]]++;
	   
	printf("PRINTING NEW COUNT ARRAY\n");
	for(i=0;i<max1;i++)
	   printf("%d ",count[i]);
	printf("\n");
	
	for(i=0;i<max1;i++)
	   count[i+1]+=count[i];
	   
	printf("PRINTING CUMULATIVE COUNT ARRAY\n");
	for(i=0;i<max1;i++)
	   printf("%d ",count[i]);
	printf("\n"); 
	
	for(i=1;i<=9;i++)
	{
	   	b[count[a[n-i]]]=a[n-i];
	   	count[a[n-i]]--;
	}  
	
	printf("PRINTING SORTED ARRAY\n");
	for(i=1;i<=9;i++)
	   printf("%d ",b[i]);
	printf("\n"); 
	
	return 0;
}
