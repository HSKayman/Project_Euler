#include<stdio.h>
int main(){
	FILE *p;
	p=fopen("num.txt","r");
	char b[10000];
	fscanf(p,"%[^.]s",b);
	fclose(p);
	int i,a[20][20]={0},cx=0,co=0,con=0;
	for(i=0;b[i]!='.';i++){
		if(b[i]>='0'&&b[i]<='9'){
			cx++;
			if(cx==1){
				int asd=(b[i]-'0');
				a[con][co]+=10*asd;
			}else{
				a[con][co++]+=(b[i]-'0');
				cx=0;
			}
		}else if(b[i]=='\n'){
			con++;
			co=0;
		}
	}//
	int max=0,j;
	for(int i=0;i<20;i++){
		for(j=0;j<17;j++){
			int maxad=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
			if(maxad>max){
				max=maxad;
			}
		}
	}
	for(int i=0;i<17;i++){
		for(j=0;j<20;j++){
			int maxad=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
			if(maxad>max){
				max=maxad;
			}
		}
	}
	for(int i=0;i<17;i++){
		for(j=0;j<17;j++){
			int maxad=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
			if(maxad>max){
				max=maxad;
			}
		}
	}
	for(int i=0;i<17;i++){
		for(j=3;j<20;j++){
			int maxad=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
			if(maxad>max){
				max=maxad;
			}
		}
	}
	printf("%d",max);
}
