#include<stdio.h>
#include<math.h>
int hersey(int x,int y);
int hm(int x);
int main(){
	int i,j,fas[1000]={0},count=0;
	for(i=1;i<10000;i++){
		for(j=i+1;j<10000;j++){
			if(hersey(i,j))
				fas[count++]=i*j;
		}
	}
	int sum=0;
	for(i=0;i<count;i++){
		int flag=1;
		for(j=i+1;j<count;j++){
			if(fas[i]==fas[j]){
				flag=0;
				break;
			}
		}
		if(flag)
			sum+=fas[i];
		
	}
	printf("%d",sum);
}
int hm(int x){
	int i=0;
	while(x!=0){
		x/=10;
		i++;
	}
	return i-1;
}
int hersey(int x,int y){
	int a=hm(x),b=hm(y),car=x*y,c=hm(car),i;
	int x1[a+1]={0},y1[b+1]={0},car1[c+1]={0};
	if(a+b+c+3!=9)
		return 0;
	for(i=a;i>=0;i--){
		x1[a-i]=x/pow(10,i);
		x%=int(pow(10,i));
	}
	for(i=b;i>=0;i--){
		y1[b-i]=y/pow(10,i);
		y%=int(pow(10,i));
	}
	for(i=c;i>=0;i--){
		car1[c-i]=car/pow(10,i);
		car%=int(pow(10,i));
	}
	int j;
	for(i=1;i<10;i++){
		int count=0;
		for(j=0;j<=a;j++)
			if(i==x1[j])
				count++;
		for(j=0;j<=b;j++)
			if(i==y1[j])
				count++;		
		for(j=0;j<=c;j++)
			if(i==car1[j])
				count++;
		if(count!=1)
			return 0;	
	}
	return 1;
}
