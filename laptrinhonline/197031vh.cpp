#include<stdio.h>
int main() {
	long int arr[7];
	for (int i = 0; i < 7; ++i) {
		scanf("%ld",&arr[i]);
	}
	if (arr[3] == arr[0] + arr[1]) {
		if (arr[4] == arr[0] + arr[2]) {
			if (arr[5] == arr[1] + arr[2]) {
				if (arr[6] == arr[0] + arr[1] + arr[2]) {
					for (int i = 0; i < 3; ++i) {
						printf("%ld ",arr[i]);
					}
				} else printf("-1");
			} else printf("-1");
		} else printf("-1");
	} else printf("-1");
} 