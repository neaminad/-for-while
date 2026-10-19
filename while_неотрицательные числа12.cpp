#include <stdio.h>
int main() {
	int fact = 1;
	int n;
	if(scanf("%d", &n) != 1){
		return 0;
	}
	int i = 1;
	while (i <= n){
		fact = fact * i;
			i = i + 1;
	}
	printf ("%d", fact);
	return 0;
}
