#include<stdio.h>
int main(){
	int i,j,sum=0,a[30000]={0},k=0,l,c=0,levye=0;
	for(i=2;i<30000;i++)
	{	
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(i<sum)
		{
			a[k++]=i;
		}
	}
	for(i=0;i<30000;i++)
	{
		int flag=1;
		for(j=0;j<k;j++)
		{
			for(l=0;l<k;l++)
			{
				if(i==a[j]+a[l])
				{
					flag=0;
					break;
				}
				if(flag==0)	break;
			}
		}
		if(flag==1)
		{
			levye+=i;
			printf("%d.  %d\t\t%d\n",++c,i,levye);	
		}		
	}
}
