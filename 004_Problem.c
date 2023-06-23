#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
bool cdigit(int x){
	int i=0;
	while(x!=0){
		x/=10;
		i++;
	}
	return (i!=6);
}
bool digit(int x){
	if(cdigit(x))
		return false;
	int i,*a=(int *)malloc(6*sizeof(int));
	for(i=5;i>-1;i--){
		a[i]=x/pow(10,i);
		x%=(int)pow(10,i);
		
	}
	for(i=5;i>2;i--)
		if(a[i]!=a[5-i]){
			free(a);
			return false;
		}
	free(a);
	return true;
}
int main(){
	int i,j,max=0;
	for(i=999;i>100;i--)
		for(j=999;j>100;j--)
			if(max<i*j&&digit(i*j)){
				printf("%d *%d =%d\n",i,j,i*j);
				max=i*j;
			}
}