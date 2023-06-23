#include<stdio.h>
int hm(int x,int y);
int main(){
	int i,j,k,sunday=0,count=0;
	for(i=1901;i<=2000;i++){
		for(j=1;j<=12;j++){
			int a=hm(i,j);
			for(k=1;k<=a;k++){
				count++;
				if(i==2000&&j==2&&k==28)
					count--;
				if(k==1&&count%7==0){
					sunday++;
				}
			}}}
	printf("%d",sunday-1);
}


int hm(int x,int y){
	if(x%4==0&&y==2)
		return 29;
	else if(y==2)
		return 28;
	if(y==9||y==4||y==6||y==11)
		return 30;
	return 31;
}
