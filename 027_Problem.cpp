#include<stdio.h>
#include<math.h>
int primer(int x);
int main(){
	int result,max=0,i,j;
	for(i=-999;i<1000;i++){
		for(j=-999;j<1000;j++){
			int k=0;
			while(primer(k*k+j*k+i)){
				k++;
			}
			if(max<k){
				max=k;
				result=i*j;
			}
		}
	}
	printf("****%d",result);
	
	
	
}
int primer(int x){
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	if(x<=1)
		return 0;
	else 
		return 1;
}
