#include <stdio.h>

int main() {
   
	 int n;
    int i,j,k=0,c=0;
    scanf("%d",&n);
    
    for(i=0;i<n-1;i++){
    	for(j=0;j<=i;j++){
    		printf("%d ",n-j);
    		c++;
		}
		for(k=0;k<2*n-1-(2*c);k++){
			printf("%d ",n-i);
		}
	
		for(k=0;k<c;k++){
			
			printf("%d ",n-c+k+1);
		}
		
		printf("\n");
		c=0;
	}
	
	for(i=0;i<n;i++){
    	for(j=0;j<=n-2-i;j++){
    		printf("%d ",n-j);
    		c++;
		}
				for(k=0;k<2*n-1-(2*c);k++){
			printf("%d ",i+1);
		}
		for(k=0;k<c;k++){
			printf("%d ",n-c+k+1);
		}
		
		printf("\n");
		c=0;
	}
	
    return 0;
}
