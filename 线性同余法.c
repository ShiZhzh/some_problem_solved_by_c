#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, d, e;
	int x0;
	int x;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	x0 = (c * b + d) % e ;
	printf("%d ", x0);
	x = x0;
	for (int i = 0; i < a - 1; i++) {
		int x1;
		x1 = (c * x + d) % e;
		printf("%d ", x1);
		x = x1;
	}
}
