#include <stdio.h>

int main() {
	int a, i;
	char n[100][100];
	scanf("%d", &a);
	fflush(stdin);
	for (i = 0; i < a; i++) {
		scanf("%[^\n]", n[i]);
		fflush(stdin);
	}
	for (i = 0; i < a; i++) {
		printf("%s\n", n[i]);

	}
}
