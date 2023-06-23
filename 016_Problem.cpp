#include<stdio.h>
int main(){
	int x[3000]={0};
	x[2999]=2;
	for(int i=2;i<=1000;i++){
		int min[3000]={0};
		for(int j=3000;j>-1;j--){
		int f=0;
		if(x[j]!=0){
			f=2*x[j];
			if(f>=10){
				f=f-10;
				min[j-1]=1;
			}
			x[j]=f;
		}}
		for(int j=3000;j>-1;j--){
			if(min[j]==1){
				x[j]++;
			}
		}
		if(i==1000){int k=0;
		for(int j=0;j<3000;j++){
			k=k+x[j];	
		}printf("%d",k);}
	
	}
}
