#include<stdio.h>
#include<math.h>
int isMir(int x);
int hm(int x);
int main(){
	int i;
	for(i=1;i<=100000000;i++){
		if(i/pow(10,hm(i)-1)>17)
			continue;
			
		if(isMir(i)){
			printf("%d %d %d %d %d %d ",i,i*2,i*3,i*4,i*5,i*6);
			break;
		}
	}
	
}
int hm(int x){
	int i=0;
	while(x!=0){
		x/=10;
		i++;
	}
	return i-1;
}
int isMir(int x){
	int x1=hm(x),i,j,k,sbt=x;
	int a[x1+1]={0};
	for(i=x1;i>=0;i--){
		a[i]=x/pow(10,i);
		x%=int(pow(10,i));
		for(k=i+1;k<=x1;k++){
			if(a[i]==a[k])
				return 0;
		}
	}
	for(i=2;i<=6;i++){
		int b[x1+1]={0},y=i*sbt;
		for(k=x1;k>=0;k--){
		b[k]=y/pow(10,k);
		y%=int(pow(10,k));	
		}
		int flag;
		for(j=0;j<=x1;j++){
			flag=1;
			for(k=0;k<=x1;k++){
				if(b[k]==a[j])
					flag=0;
			}	
			if(flag)
				return 0;	
		}
	}
	return 1;
}
