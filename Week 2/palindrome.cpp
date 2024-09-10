#include<stdio.h>
#include<math.h>
 
 int main (){
 	int num, reversednum =0 , remainder, originalnum;
 	
 	printf("enter the integer: ");
 	scanf("%d", &num);
 	
 	originalnum = num;
 	
 	// revesrse the number
 	
 	while(num!=0){
 		 remainder = num % 10;
 		 reversednum = reversednum*10 + remainder;
 		 num /= 10;
 		 
 		 
	 }
	 if (reversednum == originalnum){
	 	
	 	printf("%d is a palindrome. \n", originalnum);
	 }
	 	else { 
		 ( "%d is not a palindrom \n", originalnum);
		 	 }
		 	 return 0;
 }

