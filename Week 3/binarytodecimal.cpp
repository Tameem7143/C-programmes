#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int binary, decimal =0, remainder, base = 1;
	
	printf("enter a binary number: ");
	scanf("%d", &binary);
	
	
    while(binary > 0){
    	
    	remainder = binary % 10;
    	decimal = decimal + remainder*base;
    	binary = binary / 10;
    	base = base*2;
    	
    	
	}
	
	printf("decimal value is: %d\n", decimal);
	return 0;
}
	
	
	
	

