#include<stdio.h>
#include<math.h>
int main(){unsigned long long int i=1,j=1;
	for(;;i+=j){
		int say=0; j+=1;
		for(int k=1;k<=sqrt(i);k++){
			if(i%k==0){
				say+=2;
			}
		}
		if(say>=501){
			printf("%llu=%llu==>%d\n",i,j,say);
			break;
		}
		
	}
}
