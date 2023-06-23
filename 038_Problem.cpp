#include<stdio.h>
#include<math.h>
int isPan(int x);
int main(){
	int i,max=0;
	for(i=9012;i<9488;i++)
		if(isPan(i)&&max<i)
			max=i;
	printf("%d%d",max,2*max);
	
}
int isPan(int x){
	int i,a[4]={0},b[5]={0},y=2*x;
	for(i=3;i>=0;i--){
		a[i]=x/pow(10,i);
		x%=int(pow(10,i));
	}
	for(i=4;i>=0;i--){
		b[i]=y/pow(10,i);
		y%=int(pow(10,i));
	}
	int count,j;
	for(i=1;i<=9;i++){
		count=0;
		for(j=3;j>=0;j--)
			if(i==a[j])
				count++;
		for(j=4;j>=0;j--)
			if(i==b[j])
				count++;
		if(count!=1)
			return 0;	
	}
	return 1;
}
