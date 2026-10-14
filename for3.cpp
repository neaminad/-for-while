#include <stdio.h>
int main() {
	int i;
	int a;
	for(i = 1; i < 20; i = i + 1){
	for (a = 1; a < 20; a = a + 1){
	printf("%4d", i * a);
	}
	printf("\n");
}
	getchar();
	return 0;
}
