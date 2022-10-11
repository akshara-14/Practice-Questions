#include <stdio.h>

int main(void) {
	int n;
	while(1)   // writing any non-zero integer in while ...loop runs infinitely 
	{
	    scanf("%d",&n);
	    if(n != 42){
	        printf("%d\n",n);
	    }
	    else{
	        return 0;
	    }
	}
	return 0;
}
