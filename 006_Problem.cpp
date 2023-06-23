#include<stdio.h>
int main(){
	int top=0;
	for(int i=1;i<101;i++){
		top=top+(i*i);
	}
	int x=100;
	x=x*x*(x+1)*(x+1)/4;
	printf("%d\n%d\n%d",x,top,x-top);
}
