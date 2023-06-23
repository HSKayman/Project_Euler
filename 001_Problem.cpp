#include<stdio.h>
int main(){
	int sum1=0;
	for(int i=0;i<=999;i++){
		if(i%3==0||i%5==0)
		sum1=sum1+i;		
	}
	printf("%d",sum1);
}
