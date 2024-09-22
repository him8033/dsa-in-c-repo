#include<stdio.h>
void Binarysearch(int n[],int sz,int search);
int main()
{
	int n[100],sz,search,i;
	printf("Enter the range of Array: ");
	scanf("%d",&sz);
	printf("Enter the numbers: ");
	for(i=0;i<sz;i++)
	scanf("%d",&n[i]);
	printf("Enter the Number you want to search: ");
	scanf("%d",&search);
	Binarysearch(n,sz,search);
	return 0;
}
void Binarysearch(int n[],int sz,int search)
{
	int i,l=0,r,m;
	r=sz-1;
	while(l<=r)
	{
		m=(l+r)/2;
		if(n[m]==search)
		{
			printf("number is found and position is: %d",m+1);
			break;
		}
		else if(n[m]<search)
		{
			l=m+1;
		}
		else if(n[m]>search)
		{
			r=m-1;
		}
	}
	 if(l>r)
	printf("number is not found");
}
