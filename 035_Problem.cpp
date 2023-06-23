#include<stdio.h>
#include<math.h>
// 1 2 3 4 1 2 3 4
int prmrycrtl(int x);
int main(){
	int i,realcount=0;
	for(i=0;i<1000001;i++){
		if(prmrycrtl(i)==0)
			continue;
		int a=i;
		int count=0;
		while(a!=0){
			a/=10;
			count++;
		}
		int value[count+count+1]={0};
		a=i;
		int csc=count;
		int count2=0;
		while(count!=0){//0 1 2
			value[count2++]=a/pow(10,--count);
			value[count2-1+csc]=value[count2-1];
			a=a%int(pow(10,count));
		}
		int j,count3=1,sum=0,rev=1,flag=1;
		for(j=0;j<count2;j++){
			count3=rev;
			int k;
			sum=0;
			for(k=count2-1;-1<k;k--){
				sum+=value[count3++]*pow(10,k);
			}
			if(prmrycrtl(sum)==0){
				flag=0;
				break;
			}
			rev++;	
		}
		
		if(flag==1){
			printf("%d\n",i);
			realcount++;
		}		
	}
	printf("*****%d*******",realcount);
}

int prmrycrtl(int x){
	if(x<=1)
		return 0;
	int i=2;
	for(;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
