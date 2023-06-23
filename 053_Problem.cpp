#include<stdio.h>
int main(){
	int j,i,x,a[101][101]={0};
	a[0][0]=1;
	for(i=1;i<=100;i++){
		int s=(i+2)/2;
		int s2=i;
		for(j=0;j<s;j++){
			if(j==0){
				a[i][j]=a[i-1][j];
				a[i][s2]=a[i-1][j];
				continue;
			}else{
				if(a[i-1][j]<=-1||a[i-1][j-1]<=-1){
					a[i][j]=-1;
					a[i][s2-j]=-1;
				}else{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				a[i][s2-j]=a[i-1][j]+a[i-1][j-1];
				}
			}
			if(a[i][j]>=1000000||a[i][j]<=-1){
				int k;
				for(k=j;k<=s2-j;k++)
					a[i][k]=-1;
				break;
			}
		}
	}
	int count=0;
	for(i=0;i<=100;i++){
		for(j=0;j<=i;j++){
			if(a[i][j]<=0)
				count++;	
		}
	}
	printf("%d",count);
}
