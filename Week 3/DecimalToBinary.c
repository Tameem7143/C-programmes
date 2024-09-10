// 2. Decimal to Binary Conversion: Write a program to convert a decimal number to its binary equivalent.
#include<stdio.h>
#include<math.h>

int main(){
	int d;
	printf("Enter a decimal number:");
    scanf("%d",&d);
    int rem =0;
    int i =0,n=0;
    int arr[100];
    while(d>0){
    	rem = d%2;
    	arr[i] = rem;
    	d = d/2;
    	i++;
    	n++;
    	
    }
    for( i=n-1;i>=0;i--){
    	printf("%d",arr[i]);
    }
	
}
