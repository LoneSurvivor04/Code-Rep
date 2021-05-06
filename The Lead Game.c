#include <stdio.h>

int main(void) {
	int n,m,o=0,s1=0,s2=0;
	scanf("%d",&n);
	int a,b,c[n],d[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d %d",&a,&b);
	        s1+=a;
	        s2+=b;
	        if(s1>s2)
	        {
	            c[i]=s1-s2;
	            d[i]=1;
	        }
	        else
	        {
	            c[i]=s2-s1;
	            d[i]=2;
	        }
	        
	}
	m=c[0];
	for(int j=1;j<n;j++)
	{
	    if(m<c[j])
	    {
	        m=c[j];
	        o=j;
	    }
	}
	
	printf("%d %d",d[o],m);
	return 0;
}