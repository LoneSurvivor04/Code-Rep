#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d",&n);
	printf("\n");
	while(n--)
	{
	    int p=1;
	    scanf("%d",&m);
	    while(m)
	    {
	        p*=m;
	        m--;
	    }
	    printf("%d\n",p);
	}
	return 0;
}