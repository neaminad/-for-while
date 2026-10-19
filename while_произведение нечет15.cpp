#include <stdio.h>
int main() {
	int n;
	int pr = 1;
	if(scanf("%d", &n) != 1){
		return 0;
	}
	int i = 1;
	while (i < n){
		pr = pr * i;
			i = i + 2;
}
	printf("%d", pr);
	return 0;
}
