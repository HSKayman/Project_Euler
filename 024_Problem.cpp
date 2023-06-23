#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long i; int count=0;
	for(i=123456789;i<=9876543210;i++)
	{    
		int a[10];
		for(int j=0;j<10;j++)
		{
			a[j]=j;
		}
			int as=i;
			int u;
			if(i<1000000000)
			{
				a[0]=-1;
				u=8;
			}
			else 
				u=9;
			for(;u>=0;u--)
			{
				int s=as/int(pow(10,u));
				int flag;
				for(int j=0;j<10;j++)
				{
					flag=0;
					if(a[j]==s)
					{
						a[j]=-1;
						flag=1;
						break;		
					}
				}
				if(flag==0)
					break;
				as=as%int(pow(10,u));
			}
			int flag=1;
			for(int j=0;j<10;j++)
			{
				if(a[j]!=-1)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{	
				count++;
				if(count%10000==0)
				{
					printf("%d\t%llu\n",count,i);
				}
				if(count>=999990&&count<=1000010)
				{
					printf("%d\t%llu\n",count,i);
				}
				if(count>=1000010)
				{
					break;
				}
			}
	}
	}
	

