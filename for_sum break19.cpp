#include <stdio.h>
int main() {
	int a;
	int sum = 0;
	for (;;){
		if (scanf("%d", &a)!=1){
		break;
	}
	if(a == 0){
	break;
	}
	sum = sum + a;
}
printf("%d", sum);
return 0;
}
