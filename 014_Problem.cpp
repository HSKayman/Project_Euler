#include<stdio.h>
int main(){int max=0;
	for(int i=1;i<=1000000;i++){
		unsigned long long int f=i;
		long long int say=0;
		while(f!=1){
			if(f%2==0){
				f=f/2; say++;
			}
			else{
			 	f=(3*f)+1;
			 	f=f/2;
				say+=2;
			}
		
		}
		if(max<say){
				max=say; printf("%d===>%d\n",i,say);			
}
}}
