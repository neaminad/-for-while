#include <stdio.H>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (a = 1; a <= 10; a = a + 1){
		for (b = 1; b<= 10; b = b + 1){
			printf ("%5d", a * b);
	}
	printf("\n");
	}
	return 0;
}

	
	
