#include<stdio.h>
int main()
{
	int a, b, c,m;
	int sum = 0;
	scanf("%d%d%d", &a, &b, &c);
	for(m=1,m<=b,m++) {
	
	switch (m){
	   case 1:
			sum += 30; 
	   case 2:
		   sum += 28;
	   case 3:
		   sum += 31;
	   case 4:
		   sum += 30;
	   case 5:
		   sum += 31;
	   case 6:
		   sum += 30;
	   case 7:
		   sum += 31;
	   case 8:
		   sum += 31;
	   case 9:
		   sum += 30;
	   case 10:
		   sum += 31;
	   case 11:
		   sum += 30;
	   case 12:
		   sum += 31;
		   break;
	}
}
	if (a % 4 == 0) {
		sum = sum - 1;
	}
	sum += c;
	printf("%d", sum);
}
