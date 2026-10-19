#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	int a;
    if (scanf("%d", &n) != 1){
	return 0;
}
	int i = 0;
	while (i < n){
		scanf("%d", &a);
		if (a % 2 == 0){
			sum = sum + a;
		}
		i = i + 1;
	}
	printf("%d", sum);
	return 0;
}
