#include<stdio.h>
#include<math.h>
int main(){
	
	int n, t1 =0, t2=1, nextterm;
	printf("enter the size of the sequence:");
	scanf("%d", &n);
	
	printf("fibonacci sequence:\t");
	
	for(int i = 0; i<n; i++){
			
		printf("%d ",  t1);
 	
		nextterm = t1+t2;
			t1 = t2;
	        t2 = nextterm;
		
		
	   }
	
               	return 0;
     }
