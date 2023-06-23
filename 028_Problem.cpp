#include<stdio.h>
#include<cstdlib>
#define P 1002
#define R 1002
 int main(){
	int **a;
	int i,j,b=1001,q;
	a = (int **)malloc(R*sizeof(int*));
	for(j=0;j<R;j++)
		a[j]=(int*)malloc(P*sizeof(int));
	int s=b*b; 
	for (i=0;i<b;i++)
		for(j=0;j<b;j++)
			a[i][j]=0;
	for(q=0;q<=b/2;q++)
	{
		for(j=q;j<b-q;j++)
		{		
			a[q][j]=s;
			s--;			
		}
		for (i=1+q;i<b-q;i++){
			a[i][b-1-q]=s;
			s--;
		}
		for (j=b-1-q;j>0+q;j--){
			a[b-1-q][j-1]=s;
			s--;
		}	
		for (i=b-2-q;i>=1+q;i--){
			a[i][q]=s;
			s--;
		}
	}  	
	int sum=0;
	for (i=0;i<b;i++){
		for(j=0;j<b;j++){
			if(j==i||i+j==b-1)
			sum+=a[i][j];
		}
	}
	printf("\n%d",sum);
}

