#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d",&n);
	while(n--)
	{   
	    int s=0;
	    scanf("%d",&m);
	    while(m/10!=0)
	    {
	        s+=m%10;
	        m/=10;
	    }
	    s+=m%10;
	    printf("%d\n",s);
	}
	return 0;
}