#include<stdio.h>
#include<math.h>
int prime(int x); 
int main(){
	int b=7,count=0,i,s=0,aq=0,c=7;
	for(i=1;1;){
		if(aq%4==0){
			s+=2;
		}
		if(prime(i))
			count++;
		i+=s;
		aq++;
		if(i>=c*c){	
			int erhan=10*count;
			if(erhan<=c*2-1){
				printf("%d",c);
				break;
			}
			c+=2;
		}
	}
}
int prime(int x){
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	if(x<=1)
		return 0;
	else
		return 1;
}
