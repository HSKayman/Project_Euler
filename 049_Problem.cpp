#include<stdio.h>
#include<math.h>
int primer(int x);
int digit(int x,int y);
int main(){
	int i,j,k,count=0;
	for(i=1000;i<10000;i++){
		if(!primer(i))
			continue;
		for(j=i+1;j<10000;j++){
			if(!primer(j))
				continue;
			for(k=j+1;k<10000;k++){
				if(!primer(k))
					continue;
				if(digit(i,j)){
					if(digit(j,k)){
						if(j-i==k-j){
							printf("%d%d%d\n",i,j,k);
						}
					}
				}else{
					break;
				}
			}
		}
	}
}

int primer(int x){
	if(x==1)
		return 0;
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	return 1;
}
int digit(int x,int y){
	int a[4]={0},b[4]={0},i;
	for(i=3;i>=0;i--){
		a[3-i]=x/pow(10,i);
		x%=int(pow(10,i));
		b[3-i]=y/pow(10,i);
		y%=int(pow(10,i));
	}
	int j,flag;
	for(i=0;i<4;i++){
		flag=1;
		for(j=0;j<4;j++){
			if(a[i]==b[j]){
				flag=0;
				b[j]=-1;
				break;
			}
		}
		if(flag)
			return 0;
	}
	return 1;
}

