#include <stdio.h>

int main() {
	int n, bag;
	scanf("%d %d", &n, &bag);
	int w[n] ;
	int v[n] ;
	for (int i = 0; i < n; i++) {
		scanf("%d", &w[i]);
		scanf("%d", &v[i]);
	}
	double pw[n];
	
	for (int i= 0; i< n; i++) {
		pw[i] = (double)v[i] / (double)w[i];
	}
	//����pw
	for (int j = 0; j< n; j++) {
		for (int i = 0; i < n -j- 1; i++) {
			double midnum;
			int midnumb;
			if (pw[i] > pw[i + 1]) {
				midnum = pw[i + 1];
				pw[i + 1] = pw[i];
				pw[i] = midnum;
				midnumb = w[i + 1];
				w[i + 1] = w[i];
				w[i] = midnumb;
				midnumb = v[i + 1];
                v[i + 1] = v[i];
                v[i] = midnumb;
			}
		}
	}
	//ð�ݷ�����ͬʱ�ı�w[]��˳��
	/*for (int i = 0; i < n; i++) {
		printf("%d %d %lf\n", w[i], v[i], pw[i]);
	}*/
	
	int weight = 0;
	int value = 0;
	int i = n - 1;
	while (weight <= bag) {
		weight += w[i];
		value += v[i];
		i--;
		//printf("%d %d\n", weight, (int)value);
	}
	weight = weight - w[i + 1];
	value = value - v[i + 1];
	//װ�뱳��
	printf("%d\n%d", weight, (int)value);
}
