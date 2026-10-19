#include <stdio.h>
int main() {
	int n;
	int sum;
	int a;
	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i = i + 1){
		scanf("%d", &a);
		sum = sum + a;
	}
	printf("%d", sum);
	return 0;
}
