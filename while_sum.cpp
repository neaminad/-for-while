#include <stdio.h>
int main() {
	int n;
	int num;
	int i;       
	int sum = 0;
	scanf ("%d", &n);
	while (i < n) {
		scanf("%d", &num);
		sum = sum + num;   
		i = i + 1;          
	}
	printf("%d", sum);
	return 0;
}

