#include<stdio.h>
#include<stdbool.h>
long long unsigned gcd(long long unsigned x,long long unsigned y){
	if(x==0)
		return y;
	return gcd(y%x,x);
}
long long unsigned mcm(long long unsigned x,long long unsigned y){
	return (x*y)/gcd(x,y);
}
int main(){
	long long unsigned x=mcm(2,1);
	int i,l=20;
	for(i=3;i<=l;i++)
		x=mcm(x,i);
	printf("\n%llu\n",x);
}

/*
bool IsPrime(long long unsigned x){
	if(x==2)
		return true;
	if(!(x%2)||x<=1)
		return false;
	int i;
	for(i=3;i<=(int)sqrt(x);i+=2)
		if(x%i==0)
			return false;
	return true;
}
int main(){
	long long unsigned x=1;
	int i,l=20;
	for(i=1;i<=l;i++){
		if(IsPrime(i)){
			x*=pow(i,(int)((log(l))/log(i)));
			printf("%d^%d\n",i,(int)((log(l))/log(i)));
		}
	}
	printf("\n%llu\n",x); 
}
*/