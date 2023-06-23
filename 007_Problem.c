#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(long long unsigned x,unsigned *y,int *z){
	short int i;
	for(i=0;i<z[0]&&y[i]<=sqrt(x);++i){
		if(x%y[i]==0){
			return false;
		}
	}
	if(2>x)
		return false;
	else{
		y[z[0]++]=x;
		return true;
	}

}
int main(){
	long long unsigned i;
	int z=1;
	unsigned *y=(unsigned*)malloc(10001*sizeof(unsigned));
	y[0]=2;
	for(i=0;z<10000;++i){
		isPrime(i,y,&z);
	}
		printf("%llu\n",--i);
	
}
/*unsigned long long func(unsigned long long x){
	//return ((unsigned long long)(3*x*x*x*x)+(unsigned long long)(2*x*x*x)-(unsigned long long)(3*x*x)-(unsigned long long)(2*x))/12;
	return (unsigned long long)x*(unsigned long long)(x*x-1)*(unsigned long long)(3*x+2);

}*/