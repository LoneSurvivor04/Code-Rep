#include <stdio.h>

int main(void) {
	int n,m,p;
	scanf("%d",&n);
	while(n--)
	{
	    p=1;
	    scanf("%d",&m);
	    while(m!=0)
	    {
	        p*=m;
	        m--;
	    }
	    printf("%d\n",p);
	}
	return 0;
}