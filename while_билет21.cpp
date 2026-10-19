#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int left = n / 1000;
	int right = n % 1000;
	int sum_l = 0;
	int sum_r = 0;
	while(left > 0){
		sum_l = sum_l + left % 10;
		left /= 10;
    }
	while(right > 0){
		sum_r = sum_r + right % 10;
		right /= 10;
	}
	if (sum_l == sum_r)
		printf("happy bilet\n");
	else 
		printf("not happy bilet\n");
	return 0;
}
