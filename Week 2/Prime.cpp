        #include<stdio.h>
        #include<math.h>
        
        int main(){
        	int num;
        	bool isprime = true;
        	printf("enter the number:");
        	scanf("%d", &num);
        	if (num <= 1){
        		isprime = false;
			}
			else{
				for ( int i = 2; i <= num/2; i++){
					if ( num%i == 0){
						isprime = false;
						break;
					}
					
				}
			}
			if (isprime){
				printf("number is prime");
			}
		else{
			printf("number is not prime");
		}
        	
        	
		}


