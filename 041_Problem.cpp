#include<stdio.h>
#include<math.h>
int prime(unsigned long long x);
int hm(unsigned long long x);
int isPan(unsigned long long x);
int main(){
	unsigned long long int i,max=0;
	for(i=1000;i<=7654321;i++){
		if(!prime(i))
			continue;
		if(!isPan(i))
			continue;
		if(max<i)
			max=i;
	}
	printf("%llu",max);
}
int prime(unsigned long long x){
	unsigned long long i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	if(x!=1)
		return 1;
	else
		return 0;
}
int hm(unsigned long long x){
	int i=0;
	while(x!=0){
		x/=10;
		i++;
	}
	return i-1;
}
int isPan(unsigned long long x){
	int z=hm(x);
	int a[z+1]={0},i;
	for(i=z;i>=0;i--){
		a[i]=x/pow(10,i);
		x%=int(pow(10,i));
	}
	int j,count;
	for(i=1;i<=z+1;i++){
		count=0;
		for(j=0;j<=z;j++)
			if(a[j]==i)
				count++;
		if(count!=1)
			return 0;
	}
	return 1;
}
