#include <stdio.h>
int main() {
	int n;
	int num;
	int min = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (min > num) {
			min = num;
		}
	}
	printf("%d\n", min);
	return 0;
}
