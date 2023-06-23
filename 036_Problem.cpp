#include<stdio.h>
#include<math.h>
int binary(int x);
int pdgr(int x);
int main(){
	int i=0,count=0,sum=0;
	for(i=0;i<=1000000;i++){
		if(binary(i)&&pdgr(i)){
			printf("%d\n",i);
			count++;
			sum+=i;
		}
	}
	printf("sum=%d****count=%d\n",sum,count);
}
int binary(int x){
	if(x==0)
		return 1;
	int a[100]={0};
	int i=-1;
	while(x!=0){
		a[++i]=x%2;
		x/=2;
	}
	int j=0;
	while(i!=-1){
		if(a[j++]!=a[i--]){
			return 0;
		}
	}
	return 1;
}
int pdgr(int x){
	if(x==0)
		return 1;
	int count=0;
	int x1=x;
	while(x1!=0){
		x1/=10;
		count++;
	}
	int in[count];
	x1=x;
	int cs=count;
	while(count!=0){
		in[--count]=x1/int(pow(10,count));
		x1=x1%int(pow(10,count));
	}
	int sum=0; 
	count=0;
	cs--;
	for(;cs!=-1;cs--){
		sum+=in[cs]*pow(10,count++);
	}
	if(sum==x)
		return 1;
	else
		return 0;
}

