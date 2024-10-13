#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	char input[1000];
	scanf("%s", input);
	//输入信息 
	int i = 0; 
	int wherepoint = 0;
	//
	int lenth = strlen(input);//得到字符串长度 
	//
	while (input[i] != '.' && i < lenth) {
		wherepoint++;                       //寻找小数点位置
		i++;
	} 
	//
	int ten = 0;//整数部分转化为十进制 
	double small = 0;//小数部分转化为十进制 
	//
	if (wherepoint != lenth) {
		for (int j = 0; j < wherepoint; j++) {
			if (input[j] >= '0' && input[j] <= '9') {
				ten += (input[j] - '0') * pow(a, wherepoint - 1 - j);     //整数部分转化十进制 
			} else {
				ten += (input[j] - 'a' + 10) * pow(a, wherepoint - 1 - j);
			}
		}                                                                //有小数的情况 
		for (int j = wherepoint + 1; j < lenth; j++) {
			if (input[j] >='0' && input[j] <= '9') {
				small += (input[j] - '0') * pow(a, wherepoint - j);
			} else {                                                      //小数部分转化十进制 
				small += (input[j] - 'a' + 10) * pow(a, wherepoint - j);
			}
		}
	}
	// 
	 else {
		for (int j = 0; j < lenth; j++) {
			if (input[j] >= '0' && input[j] <= '9') {
				ten += (input[j] - '0') * pow(a, lenth - 1 - j);
			} else {                                                      //无小数转化十进制     
				ten += (input[j] - 'a' + 10) * pow(a, lenth - 1 - j);
			}
		}
	}
	//
	double tenum=ten+small;
	//printf("%d %d\n%lf\n",lenth,wherepoint,tenum);
	char output[1000];
	char turn[1000];
	i = 0;
	int zh=(int)tenum;//整数部分 
	double xi=tenum-(int)tenum;//小数部分
	// 
	if(zh==0){
		output[i]='0';                   //如果整数部分为0 
		i++;
	}
	//
	else{
		while(zh!=0){
			if(zh%b<10){
				turn[i]=zh%b+'0';
				i++;
			}
			else{
				turn[i]=zh%b+'a'-10;     //整数部分转化为任意进制                 
				i++;
			}
			zh=zh/b;
		}
		for(int j=0;j<i;j++){
			output[j]=turn[i-1-j];     //倒序转为正序 
		}
	}
	//
	if(xi!=0.0){
		output[i]='.';
		i++;
		int mid;
		int len=i;
		while(xi!=0.0){
			mid=(int)(xi*b);
			if(mid<10){
				output[i]=mid+'0';       //小数部分转化为任意进制 
				i++;
			}	
			else{
				output[i]=mid+'a'-10;
				i++;
			}
			xi=xi*b-(int)(xi*b);
		}
	}
	//
	for (int j = 0; j <i; j++) {             //输出 
		putchar(output[j]);
	}
	//
	return 0;
}
