#include<stdio.h>
#define Q 80000 
int main(){
	unsigned long long sum1=1,sum2=1,sum3=1,a[Q],b[Q],c[Q];
	int count1=1,count2=1,count3=1,i;
	for(i=0;i<Q;i++){
		a[i]=sum1;
		b[i]=sum2;
		c[i]=sum3;
		count1+=1;	
		sum1+=count1;
		count2+=3;
		sum2+=count2;
		count3+=4;
		sum3+=count3;
	}
	int j;
	for(i=0;i<Q;i++){
		int flag1=0,flag2=0;
		for(j=0;a[i]>=b[j];j++){
			if(a[i]==b[j]){
				flag1=1;
				break;
			}
		}
		if(!flag1)
			continue;
		for(j=0;a[i]>=c[j];j++){
			if(a[i]==c[j]){
				flag2=1;
				break;
			}
		}
		if(flag2==1&&40755<a[i]){
			printf("%llu\n",a[i]);
			break;
	}
	}
}
