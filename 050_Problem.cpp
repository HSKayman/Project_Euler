#include<stdio.h>
#include<math.h>
int primer(int x);
int main(){
	int i,lastram[100000],result;
	unsigned long long sum=0,count=0;
	for(i=1;i<=1000000;i++){
		if(primer(i))
			lastram[count++]=i;		
	}
	int j,max=0,max2;
	for(i=0;i<count;i++){
		sum=0;
		for(j=i;j<count;j++){
			sum+=lastram[j];
			if(sum>1000000)
				break;
			if(max<j-i&&primer(sum)){
				result=sum;
				max=j-i;
			}
		}
	}
	printf("%d",result);
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
