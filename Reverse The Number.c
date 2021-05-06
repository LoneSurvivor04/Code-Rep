#include <stdio.h>

int main(void) {
	int n,m,p;
	scanf("%d",&n);
	while(n--)
	{
	   p=0;
	   scanf("%d",&m);
	   while(m/10>0)
	   {
	       p=p*10+m%10;
	       m/=10;
	   }
	   p=p*10+m%10;
	   printf("%d\n",p);
	}
	return 0;
}