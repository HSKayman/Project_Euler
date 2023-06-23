#include<stdio.h>
int main(){
	int i,j,k;
	double sum=1;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			for(k=1;k<=9;k++){
				if(10*k*i+j*i==10*j*i+k*j&&i!=j){
					sum*=(double)j/(double)i;
				}
			}
		}
	}
	printf("%.0lf",sum);
}
