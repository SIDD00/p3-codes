#include<stdio.h>
int main()
{
	int k;
	int a[]={1,5,7,15,20};
	int b[]={2,4,5,8,15,21};
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	int asize=sizeof(a)/4;
	int bsize=sizeof(b)/4;
	printf("%d\n",asize);
	printf("%d\n",bsize);
    k=asize+bsize;
    printf("%d\n",k);
	int c[k];
	int i=0,j=0,l=0;
	while((i<k)&&(j<k))
	{
		if(a[i]<b[j] && i==5) continue;
		{
			c[l]=a[i];
			l++;
			i++;
			//printf("Hello");
		}
		else if(a[i]>b[j] && j==6 ) continue;
		{
			c[l]=b[j];
			l++;
			j++;
            //printf("Hello");
		}
		else if(a[i]==b[j])
		{
			c[l]=a[i];
			l++;
			i++;
			j++;
		}
	}
	for(i=0;i<k;i++)
	printf("%d " ,c[i]);
	return 0;
}
