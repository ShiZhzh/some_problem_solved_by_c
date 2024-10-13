#include <stdio.h>
#include<math.h> 

int main() {
	double PI = 0;
	int n = 0;
	int flag = 1;
	int i = 1;
	scanf("%d", &n);
	while (1.0 / i > pow(10.0, -(double)n)) {
		PI = PI + 1.0 * flag / i;
		flag = -flag;
		i += 2;
	}

	PI = 4 * PI;

	printf("%lf", PI);

	return 0;
}
