    #include<stdio.h>
    #include<math.h>
    
    int main(){
    	int a,b, lcm, hcf = 0;
    	
    	printf("enter the two psitive numbers: \n");
    	scanf("%d %d", &a, &b);
    	
    	for(int i = 1; i<=a; i++){
    		if(a%i == 0 && b%i == 0){
			
    			hcf = i;
    		}
			
		}
		lcm = (a*b)/hcf;
		printf("hcf and lcm are: %d and %d", hcf, lcm);
		return 0;
    	
	}
