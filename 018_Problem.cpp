#include<stdio.h>
int main(){
	FILE *p;
	p=fopen("num.txt","r");
	char b[10000];
	fscanf(p,"%[^.]s",b);
	fclose(p);
	int i,cx=0,con=0,co=0,a[15][15]={0};
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
	}
	int j,bas=15,k;
	for(i=13;i>=0;i--){
		bas--;
		for(j=0;j<bas;j++){
			int q=a[i][j]+a[i+1][j];
			int w=a[i][j]+a[i+1][j+1];
			if(q>w){
				a[i][j]=q;	
			}else if(w>q){
				a[i][j]=w;
			}
		}
	}
	printf("%d",a[0][0]);
}
