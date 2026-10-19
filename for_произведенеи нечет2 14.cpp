#include <stdio.h>
int main() {
	int n;
	int proizv = 1;
	if (scanf("%d", &n)!= 1){
		return 0;
	}
	for (int i = 1; i < n; i = i + 2){
		proizv = proizv * i;
	}
	printf("%d", proizv);
	return 0;
}
