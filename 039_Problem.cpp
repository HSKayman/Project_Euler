#include<stdio.h>
#include<math.h>
int main(){
	int k[1001]={0};
	int i,j;
	for(i=1;i<1001;i++){
		for(j=1;j<1001;j++){
			double a=sqrt(i*i+j*j);
			int p=a+j+i;
			if(a-int(a)==0&&p<=1000&&i+j>a){
				k[p]++;
			}
		}
	}
	int max=0,maxi=0;
	for(i=1;i<1001;i++){
		if(max<k[i]){
			max=k[i];
			maxi=i;
		}
	}
	printf("maxi==%d\nmax==%d",maxi,max);
}
