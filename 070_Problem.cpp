#include<stdio.h>
#include<math.h>
int hm(int x,int y);
int primer(int x);
int isPer(int x,int y);
int gcd(int x,int y);
int etf(int x);
int main(){
	int i;
	double min=10.00;
	for(i=10;i<pow(10,7);i++){
		if(primer(i))
			continue;
		int f=etf(i);
		if((float)i/(float)f<min&&isPer(i,f)){
				min=(float)i/(float)f;
				printf("%d %d\n",i,f);
		}
	}
	printf("%lf",min);
}
int gcd(int x,int y){
	if(y!=0)
		return gcd(y,x%y);
	else
		return x;
}
int etf(int x){
	int i,count=0;
	for(i=2;x>i;i++)
		if(gcd(x,i)==1)
			count++;
	return count+1;
}
int hm(int x,int y){
	int i=0,j=0;
	while(x!=0){
		x/=10;
		i++;
	}
	while(y!=0){
		y/=10;
		j++;
	}
	if(i!=j)
		return 0;
	else
		return j-1;
}
int isPer(int x,int y){
	int a=hm(x,y);
	if(a==0)
		return 0;
	int i,a1[a+1]={0},a2[a+1]={0};
	for(i=a;i>-1;i--){
		int q=pow(10,i);
		a1[i]=x/q;
		x%=q;
		a2[i]=y/q;
		y%=q;
	}
	int j;
	for(i=0;i<=a;i++){
		int flag=1;
		for(j=0;j<=a;j++)
			if(a1[i]==a2[j]){
				flag=0;
				a2[j]=-1;
				break;
			}
		if(flag)
			return 0;	
	}
	return 1;
}
int primer(int x){
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	if(x<=1)
		return 0;
	else
		return 1;
}
