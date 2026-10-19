#include <stdio.h>
int main(){
	int n;
	int sum = 0;
	int a;
	scanf("%d", &n);
	for (int i = 1; i < n; i = i + 1){
		scanf("%d", &a);
		if (a > 0 && a % 2 == 0){
			sum = sum + a;
		}
	}
	printf("%d", sum);
	return 0;
}
