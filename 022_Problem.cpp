#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int k[30000]={0},i,sum2=0,s=0,l=0,j=0;
	unsigned long long sum=0;
	FILE *p,*sakix;
	char a[999999],kel[30000][20],cos[21];
	p=fopen("names.txt","r");
	fscanf(p,"%s",a);
	fclose(p);
	for(i=0;a[i]!='.';i++){
		if(a[i]=='"')
			continue;
		if(a[i]!=',')
			kel[s][l++]=a[i];
		else{
			l=0;
			s++;
		}
	}
	for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(strcmp(kel[i],kel[j])>0){
				strcpy(cos,kel[i]);
				strcpy(kel[i],kel[j]);
				strcpy(kel[j],cos);			
			}
		}
	}
	sakix=fopen("name2.txt","w");
	for(i=0;i<s;i++){
		fprintf(sakix,"\"%s\",",kel[i]);
	}
	fprintf(sakix,".");
	fclose(sakix);
	sakix=fopen("name2.txt","r");
	fscanf(sakix,"%s",a);
	fclose(sakix);
	s=0,l=0;
	for(i=0;a[i]!='.';i++){
		if(a[i]=='"')
			continue;
		if(a[i]!=','){
			sum2+=a[i]-64;
			kel[s][l++]=a[i];
		}
		else{
			k[s++]=sum2*s;
			sum2=0;
			l=0;
		}
	}
	sakix=fopen("name3.txt","w");
	for(i=0;i<s;i++){
		sum+=k[i];
		fprintf(sakix,"%d) %s\t\t %d\t\t%llu\n",i+1,kel[i],k[i],sum);
	}
	fclose(sakix);
	printf("%llu",sum);
}
