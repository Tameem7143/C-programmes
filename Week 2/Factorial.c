// 2. Factorial of a Number: Write a program to calculate the factorial of a given number.
#include<stdio.h>
int main(){
    int f=1,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ 
	f*=i; 
	}
    printf("Factorial of %d is %d",n,f);
}
