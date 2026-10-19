#include <stdio.h>
int main() {
	int n;
	int a;
	int sum = 0;
	if (scanf("%d", &n) !=1){
		return 0;
	}
	for (int i = 1; i <= n; i = i + 1){
		scanf("%d", &a);
		if (a % 2 != 0){
		sum = sum + a;
	}
}
	printf("%d\n", sum);
}
