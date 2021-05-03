#include <stdio.h>

int main(void) {
	
	int n;
	float bal,req;
	scanf("%d %f",&n,&bal);
	req=(float)n;
	
	if(bal-0.5>=req)
	{
	    if(n%5==0)
	    {
	        printf("%.2f",bal-req-0.5);
	    }
	    else
	    {
	        printf("%.2f",bal);
	    }
	}
	else
	{
	    printf("%.2f",bal);
	}
	return 0;
}

