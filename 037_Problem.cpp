#include<stdio.h>
#include<math.h>
int hm(int x);
int primary(int x);
int rl(int x,int y);
int lr(int x,int y);
int main(){
	int i=0,j=10,count=0,c2=0;
	for(i=10;c2<11;i++){
		int k=hm(i);
		if(primary(i)&&rl(i,k)&&lr(i,k)){
			count+=i;
			c2++;
			printf("%d.---%d\t\t%d\n",c2,i,count);
		}
	}
}
int hm(int x){
	int i=0;
	while(x!=0){
		x/=10;
		i++;
	}
	return i;	
}
int primary(int x){
	if(x==1)
		return 0;
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}
int rl(int x,int y){
	int a[y+1]={0},y2=y,f=0;
	for(y--;y>=0;y--){
		a[f++]=x/pow(10,y);
		x%=int(pow(10,y)); 
	}				
	int i,j;
	for(i=y2-1;i>=1;i--){
		int sum=0;
		for(j=i-1;j>=0;j--){
			sum+=a[j]*pow(10,i-(j+1));
		}
		if(!primary(sum))
			return 0;	
	}
	return 1;
}
int lr(int x,int y){
	int a[y+1]={0},y2=y,f=0;
	for(y--;y>=0;y--){
		a[f++]=x/pow(10,y);	  
		x%=int(pow(10,y));     
	}				
	int i,j;
	for(i=1;i<=y2-1;i++){
		int sum=0;
		for(j=y2-1;j>=i;j--){
			sum+=a[j]*pow(10,(y2-1)-(j));
		}
		if(!primary(sum))
			return 0;	
	}
	return 1;
}


