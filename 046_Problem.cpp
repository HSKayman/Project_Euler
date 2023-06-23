#include<stdio.h>
#include<math.h>
int primer(int x);
int main(){
	int a[70000]={0},i,j,k;
	a[0]=1;
	for(i=1;i<70000;i++){
		if(primer(i)){
			a[i]=1;
			continue;
		}
		if(i%2==0){
			a[i]=1;
			continue;
		}
	}
	for(j=1;j<700;j++){		
		for(k=1;k<70000;k++){
			if(primer(k)&&j*j*2+k<70000){
				a[j*j*2+k]=1;
			}
		}
	}
	for(i=0;i<70000;i++){
		if(a[i]!=1){
			printf("%d\n",i);
			break;
		}
	}
}
int primer(int x){
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}
