#include <stdio.h>
int main() {
	int fact = 1;
	int n;
	if (scanf("%d", &n) != 1){
		return 0;
	}
	for (int i = 1; i <= n; i = i + 1){
		fact = fact * i;
		
	}
printf("%d", fact);
	return 0;
}
