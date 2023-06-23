#include<stdio.h>
long long fib(unsigned a);
int main(){
	unsigned a,i;
	printf("kullanıcı sayı degerini girsin");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
		printf("%u. indexteki deger %llu'dir\n",i,fib(i));
}
long long int fib(unsigned a){
	if(a<=2)
		return 1;
	static long long int i=1,j=1;
	long long int c=i+j;
	j=i;
	i=c;
	return c;
}