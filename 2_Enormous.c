#include <stdio.h> 

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int ans = 0,t;

	for (int i = 0; i < n; i++) {
		scanf("%d",&t);
		
		if (t % k == 0) {
			ans++;
		}		
	}
	printf("%d", ans);
	return 0;
}

