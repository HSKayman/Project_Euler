#include<stdio.h>
int main()
{
	int i,j,k,l,m=0;
	for(i=1;i<10000;i++)
	{	
		k=0;
		l=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				k+=j;
		}
		for(j=1;j<k;j++)
		{
			if(k%j==0)
				l+=j;
		}
		if(l==i&&k<=10000&&k!=i)
		{
			printf("%d--GUYS--%d\n",i,k);
			m+=i+k;
		}
	}
	printf("\n------------%d----------",m/2);
}

