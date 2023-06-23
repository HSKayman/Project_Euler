#include<stdio.h>
int main(){
	FILE *w;
	w=fopen("words.txt","r");
	char a[999999];
	fscanf(w,"%s",a);
	fclose(w);
	int i,max=0,count=0;
	for(i=0;a[i]!=0;i++){
		if(a[i]=='"'||a[i]==','){
			if(max<count){
				max=count;
			}
			count=0;
		}else
			count++;
	}
	
	max*=27;
	int t[50],f=-1,s2=0;
	for(i=1;;i++){
		s2+=i;
		t[++f]=s2;
		printf("%d\n",t[f]);
		if(t[f]>max)
			break;	
	}
	
	int j,sum=0,maincoun=0;
	for(i=0;a[i]!=0;i++){
		if(a[i]!='"'&&a[i]!=','){
		sum+=a[i]-('A'-1);
		}else if(a[i]==','){
			int flag=1;
			for(j=0;j<=f;j++){
				if(sum==t[j])
					flag=0;				
			}
			sum=0;
			if(flag==0)
				maincoun++;
		}
	}
	printf("%d",maincoun);
}
