#include<stdio.h>
#include<math.h>
int primer(int x);
int dongu(int x);
int main(){
	int i,max=0,result;
	for(i=1;i<1000;i++){
		if(!primer(i))
			continue;
		if(max<dongu(i)){
			max=dongu(i);
			result=i;
		}
	}
	printf("%d    %d",result,dongu(result));
}
int dongu(int x){
	int q[1000]={0};
	int a=1;
	int t=0;
	while(1){
		q[t]=a;
		int i,flag=0;
		for(i=0;i<t;i++){
			if(q[i]==a){
				flag=1;
				break;
			}	
		}
		if(flag)
			return t-1;
		a=a%x*10;
		t++;
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
