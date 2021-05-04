#include <stdio.h>

int main(void) {
    int n,m,r;
    scanf("%d",&n);
    while(n--)
    {
        int s=0;
        scanf("%d",&m);
        s+=m%10;
        while(m>0)
	    {
	        r=m%10;
	        m/=10;
	    }
	    s+=r;
	    printf("%d\n",s);
    }
	return 0;
}