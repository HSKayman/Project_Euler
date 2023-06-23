#include<stdio.h>
#include<math.h>
#include<stdbool.h>
 bool IsntPrime( unsigned long long int x){
	unsigned long long int i;
	if(!(x%2))
		return true;
	for(i=3;i<=sqrt(x);i+=2)
		if(x%i==0)
			return true;
	return false;
}
int main(){
	unsigned long long int p=72,i;
	printf("%llu    \n\n",p);
	while(!(p%2)){
		p/=2;
		printf("\n2");
	}
	for(i=3;i<=p;i+=2){
		if(IsntPrime(i))
			continue;
		if(p%i==0){
			p/=i;
			printf("\n%llu",i);
			i-=2;
		}
	}
}