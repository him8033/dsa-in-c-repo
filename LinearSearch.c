#include<stdio.h>
void Linearsearch(int n[],int sz,int search);
int main()
{
	int n[100],search,sz,i;
	printf("Enter the size of array: ");
	scanf("%d",&sz);
	for(i=0;i<sz;i++)
	scanf("%d",&n[i]);
	printf("Search number: ");
	scanf("%d",&search);
	Linearsearch(n,sz,search);
}
void Linearsearch(int n[],int sz,int search)
{
	int i,count=0;
	for(i=0;i<sz;i++)
	{
		if(n[i]==search)
		{
			printf("number is found & its position is: %d",i+1);
			count++;
			break;
		}
	}
	if(count==0)
	printf("number is nor found");
	
}
