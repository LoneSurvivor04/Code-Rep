#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],c[n],b[n];

	    for(int i=0;i<n;i++)
	    {
	        scanf("%d\n",&a[i]);
	        c[i]=0;
	        b[i]=0;
	    }
	    for(int j=0;j<n-1;j++)
	    {
	        for(int k=j+1;k<n;k++)
	        {
	            if(a[j]>a[k])
	            {
	                c[j]+=1;
	            }
	            else
	            {
	                c[k]+=1;
	            }
	        }
	        
	    }
	    
	    for(int l=0;l<n;l++)
	    {
	        b[c[l]]=a[l];
	    }
	    
	    for(int m=0;m<n;m++)
	    {
	        printf("%d\n",b[m]);
	    }

	return 0;
}

