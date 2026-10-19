#include <stdio.h>
int main() {
	int sum = 0;
	int a;
	while (1){
		if (scanf("%d", &a)!=1){
			break;
		}
	if (a == 0){
	break;	
	}
		sum = sum + a;
}
	printf("%d", sum);
	return 0;
}
