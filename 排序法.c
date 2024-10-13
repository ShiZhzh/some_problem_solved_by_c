#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d", &a);
	fflush(stdin);
	int m[a];
	for (int i = 0; i < a; i++) {
		scanf("%d", &m[i]);
	}

	/*for (int i = 0; i < a; i++) {
		printf("%d ", m[i]);
	}*/
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < a - i; j++) {
			int mid;
			if (m[j] > m[j + 1]) {
				mid = m[j];
				m[j] = m[j + 1];
				m[j + 1] = mid;
			}
			/*for (int i = 0; i < a; i++) {
				printf("%d ", m[i]);
			}*/
		}
	}
	  //printf("\n");
	for (int i = 0; i < a; i++) {
		printf("%d ", m[i]);
	}
}
