#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	a = 1;
	while (a <= 10){
		b = 1;
		while (b <= 10){
		printf ("%5d", a * b);	
		b = b + 1;
	}
		printf("\n");
		a = a + 1;
}
	return 0;
}
