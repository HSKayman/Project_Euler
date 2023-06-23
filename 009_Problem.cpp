#include <stdio.h>
#include<math.h>
int main(){
  for(int i=0;i<999;i++){
  	for(int j=0;j<999;j++){
  		double c=(i*i)+(j*j);
  		if(sqrt(c)+i+j==1000){
		  
  			printf("%lf=%d=%d\n",sqrt(c),i,j);
  			printf("\t%d\n",(int)sqrt(c)*i*j);}
	  }
  }
}
