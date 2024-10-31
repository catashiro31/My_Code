#include <stdio.h>
int main() {
	long long n;
	scanf("%lld",&n);
	int i = 0;
	long long tmp = 1; 
	while (tmp < n) {
		tmp = (long long)tmp*2;
		i++;
	}
	printf("%d",i);
}