#include<stdio.h>
#include<math.h>
int main(){
	unsigned long long int m=0;
	int sayy=0;
	for(int i=2;i<2000000;i++){
		int flag=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0)
				flag=0;
		}
		if(flag==1){
			m=m+i; 
			printf("%d====>%d\t%llu\n",++sayy,i,m);
		}
	}	
}
