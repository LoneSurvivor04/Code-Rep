#include <stdio.h>

int main(void) {
	int n,a[3];
	
	scanf("%d",&n);
	while(n--)
	{
	    int b[3]={0};
	    scanf("%d %d %d",&a[0],&a[1],&a[2]);
	    for(int i=0;i<3;i++)
	    {
	       for(int j=i+1;j<3;j++)
	       {
	           if(a[i]>a[j])
	           {
	               b[i]+=1;
	           }
	           else
	           {
	               b[j]+=1;
	           }
	       }
	    }
	    for(int k=0;k<3;k++)
	    {
	        if(b[k]==1)
	        {
	            printf("%d\n",a[k]);
	        }
	    }
	    
	}
	return 0;
}