         #include<stdio.h>
         #include<math.h>
         int main(){
	
	     int num, remainder, sum = 0;
	     printf("enter the number: ");
	     scanf("%d", &num);
	     
	     while(num != 0) {
	     	
	     	remainder = num % 10;
	     	sum = sum + remainder;
	     	num = num/10;
		 }
		  printf("the digital sum is: %d", sum);
		 return 0;
	
	
         }
