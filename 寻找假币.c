#include <stdio.h>
#include <math.h>
int findplace(int num, int m[], int n);
int weigh(int c, int d, int m[]);

int main() {
	int n;
	int m[100];
	scanf("%d", &n);
	int num = pow(2, n);
	for (int i = 0; i < num; i++) {
		scanf("%d", &m[i]);
	}
	int place;
	place = findplace(num, m, n);
	printf("%d", place);
}

int findplace(int num, int m[], int n) {
	int len = num - 1;
	int mid ; 
	
	int le, ri;
	int where;
	int floor = 0;

	for (int i = 1; i <=n; i++) {//循环结束的条件可以是while(floor==mid) 
		mid = (floor + len) / 2;
		le = weigh(floor, mid, m);
		ri = weigh(mid + 1, len, m);
		if (le > ri) {
            //printf("在右\n");
			//printf("%d %d %d\n",floor,mid,len);
			floor = mid + 1;
			where = floor;
			
		} else {
			//printf("在左\n"); 
			//printf("%d %d %d\n",floor,mid,len);
			len = mid;
			where = floor;
		   
		}
	}
	return where;
}

int weigh(int c, int d, int m[]) {
	int sum = 0;

	for (int i = c; i <= d; i++) {
		sum += m[i];
	
	}
	return sum;
}
