#include <stdio.h>
int main()
{
	int a[3][3], b[3][3],m[3][3],n[3][3];
	int c, d ,e,f,g;
	for (c = 0; c < 3; c++) {
		for (d = 0; d < 3; d++) {
			scanf("%d", &a[c][d]);
		}
	}
	for (c = 0; c < 3; c++) {
		for (d = 0; d < 3; d++) {
			scanf("%d", &b[c][d]);
		}
	}
	for (c = 0; c < 3; c++) {
		for (d = 0; d < 3; d++) {
			f = 0;
			for (e = 0; e < 3; e++) {
				g = a[c][e] * b[e][d];
				f = f + g;
			}
			printf("%d\t", f);
		}
		printf("\n");
	}printf("\n");
}
