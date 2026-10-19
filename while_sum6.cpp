#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	int a;
	scanf("%d", &n);
	int i = 0;
	while (i < n){
		scanf("%d", &a);
		sum = sum + a;
				i = i + 1;
	}
	printf("%d\n", sum);
	
	return 0;
}
