// 4. Reverse a Number: Write a program to reverse the digits of a given number.
#include<stdio.h>
int main(){
    int n,r=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    
    while(n>0){
    	r=(r*10)+(n%10);
        n/=10;
    }
    printf("Reversed Number is %d",r);
}
