#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int i = 0;
	for (int j = 0; j < n; ++j) {
		int k;
		scanf("%d",&k);
		if (k != 0) {
			printf("%d ",k); 
		}
	}
}