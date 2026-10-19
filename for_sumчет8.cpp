#include <stdio.h>
int main () {
	int a;
	int sum = 0;
	int n;
	if (scanf("%d", &n)!= 1){
		return 0;
	}
		for (int i = 0; i < n; i = i + 1){
			scanf("%d", &a);
			if (a % 2 == 0){
				sum = sum + a;
			}
		}
	printf("%d", sum);
	return 0;
	}

