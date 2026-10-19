#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	int a;
	scanf("%d", &n);
	int i = 1;
	while (i < n){
		scanf("%d", &a);
		if (a < n && a % 2 == 0){
			sum = sum + a;
		}
	i = i + 1;
	}
	printf("%d", sum);
	return 0;
}
