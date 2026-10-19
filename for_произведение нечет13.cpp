#include <stdio.h>
int main() {
	int n;
	int proizv = 1;
	if (scanf("%d", &n)!= 1){
		return 0;
	}
		int limit = 0;
	if (n % 2 ==0){
		limit = n - 1;
	}
		 if (n % 2 != 0){
			limit = n;
		
	}
	for (int i = 1; i < n; i = i + 2){
				proizv = proizv * i;
				}
	printf("%d", proizv);
	return 0;
}
