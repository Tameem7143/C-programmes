// 3. Count Vowels and Consonants: Write a program to count the number of vowels and consonants in a given string.
#include<stdio.h>
int main(){
	char s[100];
	int v=0,c=0,i;
	
	printf("Enter a string:");
      gets(s); 
      
    for(i=0;s[i]!='\0';i++){
    	
    	char a=s[i];
    	
    	if( (a>='a' && a<='z') || (a>='A' && a<='Z') ){
    		
    		if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
		    
		     v++; 
		     
		     }
    		else{
    			
		     c++;
		     
		      }
		}
	}
	
	
	printf("Vowels and Consonants are %d and %d",v,c);
}
