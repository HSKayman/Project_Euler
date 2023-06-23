#include<stdio.h>
int main(){
	int coun=0,i,j,k,l,m,n,o;
	for(i=200;i>=0;i-=200)
		for(j=i;j>=0;j-=100)
			for(k=j;k>=0;k-=50)
				for(l=k;l>=0;l-=20)
					for(m=l;m>=0;m-=10)
						for(n=m;n>=0;n-=5)
							for(o=n;o>=0;o-=2)
								coun++;
	printf("%d",coun);
}
