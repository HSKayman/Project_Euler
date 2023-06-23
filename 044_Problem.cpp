#include<stdio.h>
#define V 7500
int main(){
	unsigned long long a[V],i,pq,qp;
	for(i=1;i<V+1;i++){
		a[i-1]=(i*(3*i-1))/2;
	}
	
	int j;
	unsigned long long min=a[V-1];
	for(i=0;i<V;i++){
		for(j=i+1;j<V;j++){
			unsigned long long s=a[i]+a[j];
			unsigned long long d=a[j]-a[i];
			int flag=0,flag2=0,k;
			for(k=0;k<V;k++){
				if(s>a[V-1])
					break;
				if(a[k]<d)
					continue;
				if(a[k]>d&&flag==0)
					break;
				if(s<a[k])
					break;	
				if(d==a[k])
					flag=1;
				if(s==a[k])
					flag2=1;
			}
			if(flag==1&&flag2==1&&d<min){
				min=d;
				pq=i;
				qp=j;
				printf("\n%llu---%d---%d\n",min,qp,pq);			
			}
		}
	}
}
