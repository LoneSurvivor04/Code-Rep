#include <stdio.h>
#include <math.h>

int main(void) {
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
	    scanf("%d",&m);
	    m=(int)sqrt(m);
	    printf("%d\n",m);
	}
	return 0;
}