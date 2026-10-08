#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int is_prime = 1;
	int i;
	for (i =2; i < n && is_prime; i++){
		if (n % i==0){
			is_prime=0;
		}
		}
	if(is_prime){
		printf("yes");
	} else {
		printf ("no");
	}
	return 0;
}

