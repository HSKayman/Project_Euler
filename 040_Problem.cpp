#include<stdio.h>
#include<math.h>
int hm(int x);
int dd(int x,int y,int z);
int main(){
	int k[250001]={0},i,sum=0,s=0,p=1,ans=1;
	for(i=1;i<250001;i++){
		k[i]=hm(i);
		sum+=k[i];
		if(sum>=p){
			ans*=dd(i,sum-p,k[i]);
			p=pow(10,++s);
		}
	}
	printf("%d",ans);
}
int hm(int x){
	int i=0;
	while(x!=0){
		x/=10;
		i++;
	}
	return i;
}
int dd(int x,int y,int z){
	int a[z+1]={0},i;
	z--;
	for(i=0;i<=z-y;i++){
		a[i]=x/pow(10,(z-i));
		x%=int(pow(10,(z-i)));
	}
	i--;
	return a[i];
}
