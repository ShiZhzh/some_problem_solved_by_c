#include <stdio.h>


int main() {
	int arr1[100], arr2[100], an[100];
	char fu[100], shi[50];
	char z, m, s1, s2, s3, s4, s5, u;
	int p, x, y, ans, i, r, s, t, shu;
	scanf("%d", &i);
	for (p = 0; p < i; p++) {
		scanf("%c", &z);
		if ((int)z == 10) {
			scanf("%c", &z);
			if (z == 'a') {
				scanf("%d", &x);
				scanf("%d", &y);
				ans = x + y;
				arr1[p] = x;
				arr2[p] = y;
				fu[p] = '+';
				an[p] = ans;
				m = 'a';
			}
			if (z == 'b') {
				scanf("%d", &x);
				scanf("%d", &y);
				ans = x - y;
				arr1[p] = x;
				arr2[p] = y;
				fu[p] = '-';
				an[p] = ans;
				m = 'b';

			}
			if (z == 'c') {
				scanf("%d", &x);
				scanf("%d", &y);
				ans = x * y;
				arr1[p] = x;
				arr2[p] = y;
				fu[p] = '*';
				an[p] = ans;
				m = 'c';

			}
			if (z != 'a' && z != 'b' && z != 'c') {
				scanf("%c", &s1);
				if (s1 == ' ')
					x = (int)z - 48;
				else {
					scanf("%c", &s2);
					if (s2 == ' ')
						x = ((int)z - 48) * 10 + ((int)s1 - 48);
					else {
						scanf("%c", &s3);
						if (s3 == ' ')
							x = ((int)z - 48) * 100 + ((int)s1 - 48) * 10 + ((int)s2 - 48);
						else {
							scanf("%c", &s4);
							if (s4 == ' ')
								x = ((int)z - 48) * 1000 + ((int)s1 - 48) * 100 + ((int)s2 - 48) * 10 + ((int)s3 - 48);
							else {
								scanf("%c", &s5);
								if (s5 == ' ')
									x = ((int)z - 48) * 10000 + ((int)s1 - 48) * 1000 + ((int)s2 - 48) * 100 + ((int)s3 - 48) * 10 + ((int)s4 - 48);
							}
						}
					}
				}
				scanf("%d", &y);
				if (m == 'a') {
					ans = x + y;
					arr1[p] = x;
					arr2[p] = y;
					fu[p] = '+';
					an[p] = ans;

				}
				if (m == 'b') {
					ans = x - y;
					arr1[p] = x;
					arr2[p] = y;
					fu[p] = '-';
					an[p] = ans;

				}
				if (m == 'c') {
					ans = x * y;
					arr1[p] = x;
					arr2[p] = y;
					fu[p] = '*';
					an[p] = ans;

				}
			}
		}



		else {

			if (z == 'a') {
				scanf("%d", &x);
				scanf("%d", &y);
				ans = x + y;
				arr1[p] = x;
				arr2[p] = y;
				fu[p] = '+';
				an[p] = ans;
				m = 'a';
			}
			if (z == 'b') {
				scanf("%d", &x);
				scanf("%d", &y);
				ans = x - y;
				arr1[p] = x;
				arr2[p] = y;
				fu[p] = '-';
				an[p] = ans;
				m = 'b';

			}
			if (z == 'c') {
				scanf("%d", &x);
				scanf("%d", &y);
				ans = x * y;
				arr1[p] = x;
				arr2[p] = y;
				fu[p] = '*';
				an[p] = ans;
				m = 'c';

			}
			if (z != 'a' && z != 'b' && z != 'c') {
				scanf("%c", &s1);
				if (s1 == ' ')
					x = (int)z - 48;
				else {
					scanf("%c", &s2);
					if (s2 == ' ')
						x = ((int)z - 48) * 10 + ((int)s1 - 48);
					else {
						scanf("%c", &s3);
						if (s3 == ' ')
							x = ((int)z - 48) * 100 + ((int)s1 - 48) * 10 + ((int)s2 - 48);
						else {
							scanf("%c", &s4);
							if (s4 == ' ')
								x = ((int)z - 48) * 1000 + ((int)s1 - 48) * 100 + ((int)s2 - 48) * 10 + ((int)s3 - 48);
							else {
								scanf("%c", &s5);
								if (s5 == ' ')
									x = ((int)z - 48) * 10000 + ((int)s1 - 48) * 1000 + ((int)s2 - 48) * 100 + ((int)s3 - 48) * 10 + ((int)s4 - 48);
							}
						}
					}
				}
				scanf("%d", &y);
				if (m == 'a') {
					ans = x + y;
					arr1[p] = x;
					arr2[p] = y;
					fu[p] = '+';
					an[p] = ans;

				}
				if (m == 'b') {
					ans = x - y;
					arr1[p] = x;
					arr2[p] = y;
					fu[p] = '-';
					an[p] = ans;

				}
				if (m == 'c') {
					ans = x * y;
					arr1[p] = x;
					arr2[p] = y;
					fu[p] = '*';
					an[p] = ans;

				}
			}
		}
	}
	for (p = 0; p < i; p++) {
		printf("%d%c%d=%d\n", arr1[p], fu[p], arr2[p], an[p]);

		{
			if (0 <= arr1[p]&&arr1[p] <= 9)
				r = 1;
			else if (9 < arr1[p]&&arr1[p] <= 99)
				r = 2;
			else if (99 < arr1[p]&&arr1[p] <= 999)
				r = 3;
			else if (999 < arr1[p]&&arr1[p] <= 9999)
				r = 4;
			else
				r = 5;
		}
		{
			if (0 <= arr2[p]&&arr2[p] <= 9)
				t = 1;
			else if (9 < arr2[p]&&arr2[p] <= 99)
				t = 2;
			else if (99 < arr2[p]&&arr2[p] <= 999)
				t = 3;
			else if (999 < arr2[p]&&arr2[p] <= 9999)
				t = 4;
			else
				t = 5;
		}
		{   if (-9<= an[p]&&an[p]<0)
		         s=2;
		     else if ( -99<= an[p]&&an[p] <-9)
			     s=3;
			else if (-999 <= an[p]&&an[p] <-99)
			     s=4;
			else if (-9999<= an[p]&&an[p] <-999)
			     s=5;
			else if (-99999 <= an[p]&&an[p] <-9999)
			     s=6;	 	 	     
			else if (0 <= an[p]&&an[p] <= 9)
				s = 1;
			else if (9 < an[p]&&an[p] <= 99)
				s = 2;
			else if (99 < an[p]&&an[p] <= 999)
				s = 3;
			else if (999 < an[p]&&an[p] <= 9999)
				s = 4;
			else if (9999 < an[p]&&an[p] <= 99999)
				s = 5;
			else if (99999 < an[p]&&an[p] <= 999999)
				s = 6;
			else if (999999 < an[p]&&an[p] <= 9999999)
				s = 7;
			else if (9999999<an[p]&&an[p]<=99999999)
				s = 8;
		    else 
		        s=9;

		}
		shu = r + s + t + 2;
		printf("%d\n", shu);
	}



	return 0;


}
