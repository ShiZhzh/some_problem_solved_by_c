#include <stdio.h>

int main() {
	int n, p1, p2;
	int num, mid, p11;
	char a[2] = {"a"};
	char b[2] = {"b"};
	char c[2] = {"c"};
	char d[2] = {"d"};
	char e[2] = {"e"};
	char f[2] = {"f"};
	scanf("%d%d%d", &p1, &p2, &n);
	p11 = p1;
	while (n != 0) {
		mid = n % 10;
		num += mid * p1 / p11;
		//printf("%d %d\n", num, p1);
		n = n / 10;
		p1 *= p11;

	}
	printf("%d", num); 
}
