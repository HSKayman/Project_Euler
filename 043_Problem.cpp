#include<stdio.h>
#include<math.h>
int isPan(int x,int y,int z);
int isP4n(int x);
int notDigit(int x);
int main(){
	int i,j,k,l,m,n,o,rsl[10000][3]={0},count=0;
	for(i=100;i<1000;i++){//1
		if(i%2!=0||!isP4n(i))
			continue;
		int js=i%100*10;
		for(j=js;j<js+10;j++){//2
			if(j%3!=0||!isP4n(j))
				continue;
			int ks=j%100*10;
			for(k=ks;k<ks+10;k++){//3
				if(k%5!=0||!isP4n(k))
					continue;
				int ls=k%100*10;
				for(l=ls;l<ls+10;l++){//4
					if(l%7!=0||!isP4n(l))
						continue;
					int ms=l%100*10;
					for(m=ms;m<ms+10;m++){//5
						if(m%11!=0||!isP4n(m))
							continue;
						int ns=m%100*10;
						for(n=ns;n<ns+10;n++){//6
							if(n%13!=0||!isP4n(n))
								continue;
							int os=n%100*10;
							for(o=os;o<os+10;o++){//7
								if(o%17!=0)
									continue;
								if(isPan(i,l,o)){
									rsl[count][0]=i;
									rsl[count][1]=l;
									rsl[count++][2]=o;	
								}
							}
						}
					}
				}
			}
		}																																			
	}																																
	unsigned long long sum={0},topsum=0;																											
	for(i=0;i<count;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum+=pow(10,(2-j)*3)*rsl[i][j];
		}
		sum+=pow(10,9)*notDigit(sum);
		topsum+=sum;
	}
	printf("%llu",topsum);
}
int isP4n(int x){
	int x1[3]={0},i;
	for(i=2;i>=0;i--){
		x1[i]=x/pow(10,i);
		x%=int(pow(10,i));
	}	
	if(x1[0]==x1[1])
		return 0;
	if(x1[1]==x1[2])
		return 0;
	if(x1[0]==x1[2])
		return 0;
	return 1;
}
int isPan(int x,int y,int z){
	int x1[3]={0},y1[3]={0},z1[1]={0},i;
	for(i=2;i>=0;i--){
		x1[i]=x/pow(10,i);
		x%=int(pow(10,i));
		y1[i]=y/pow(10,i);
		y%=int(pow(10,i));
		z1[i]=z/pow(10,i);
		z%=int(pow(10,i));
	}
	int j,count=0,bg=0;
	for(i=0;i<10;i++){
		count=0;
		for(j=0;j<3;j++)
			if(x1[j]==i)
				count++;
		for(j=0;j<3;j++)
			if(y1[j]==i)
				count++;
		for(j=0;j<3;j++)
			if(z1[j]==i)
				count++;
		if(count!=1){
			bg++;
			if(bg>1)
				return 0;
		}	
	}
	return 1;
}
int notDigit(int x){
	int i,a[9]={0};
	for(i=8;i>=0;i--){
		a[i]=x/pow(10,i);
		x%=long(pow(10,i));
	}
	int j,count=0;
	for(i=0;i<10;i++){
		count=0;
		for(j=0;j<9;j++)
			if(a[j]==i)
				count++;
		if(count==0)
			return i;		
}
}

