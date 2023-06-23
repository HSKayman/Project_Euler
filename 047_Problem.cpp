#include<stdio.h>
#include<math.h>
#define Q 50000
int primers(int x);
int main(){
	int i,a[Q]={0};
	for(i=1;i<Q;i++){
		if(primers(i)){
			int j;
			for(j=i;j<Q;j+=i)
				a[j]++;
		}
	}
	for(i=0;i<Q;i++){
		if(a[i]==4&&a[i+1]==4&&a[i+2]==4&&a[i+3]==4){
			printf("%d",i);
			break;
		}
	}
}
int primers(int x){
	if(x==1)
		return 0;
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}
