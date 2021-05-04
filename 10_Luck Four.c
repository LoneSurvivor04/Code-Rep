#include <stdio.h>

int main(void) {
	int n,m,c;
	scanf("%d",&n);
	while(n--)
	{
	    c=0;
	    scanf("%d",&m);
	    while(m/10>0)
	    {
	        if(m%10==4)
	        {
	            c+=1;
	        }
	        m/=10;
	    }
	    if(m==4)
	    {
	        c+=1;
	    }
	    printf("%d\n",c);
	}
	return 0;
}