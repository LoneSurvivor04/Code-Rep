#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
	    scanf("%d",&m);
	    if(m<10)
	        printf("Thanks for helping Chef!\n");
	    else
	        printf("-1\n");
	}
	return 0;
}