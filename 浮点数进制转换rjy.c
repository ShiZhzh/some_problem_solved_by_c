#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a,b;
	int sign , j = 0 , k = 0;
	char c[10];
	char value[100],out[100]; // 中间值（十进制）
	double num = 0;
	long m;
	scanf("%d%d",&a,&b);//被输入数字的进制
	scanf("%s",c);//输入数字
	/*if (a == b){
		printf("%s",c);
		exit(1);
	}*/
	//找到小数点
	while(c[j]){
			if (c[j] == 46){
				sign = j;
				break;
			}
			j++;
		}
	if(!c[j])
	sign = j;
	j=0;
	//计算8和2进制
	if (a != 16){
		while(c[j]){
			if (j == sign)//跳过小数点
				j++;
			else{
				if (c[j] - '0' == 0)//去掉所有的零，不计算
				j++;
				else{
					if (j < sign){
						num += pow(a,sign-j-1)*(int)(c[j]-'0');//小数点前
						j++;
					}
					else{
						num += pow(a,sign-j)*(int)(c[j]-'0');//小数点后
						j++;
					}
				}
			}	
		}
	}
	//计算16进制
	else{
		while(c[j]){
			if (j == sign)//跳过小数点
			j++;
			else{
				if(j < sign){
					if (c[j] == 48)
					j++;
					else if (48 < c[j] && c[j] < 58){//去掉所有的零和abcdef
						num += pow(a,sign-j-1)*(float)(c[j]-'0');
						j++;
					}
					else{
						num += pow(a,sign-j-1)*(float)(c[j]-87);
						j++;
					}
				}
				else{
					if (c[j] == 48)
					j++;
					else if (48 < c[j] && c[j] < 58){
						num += pow(a,sign-j)*(float)(c[j]-'0');
						j++;
					}
					else{
						num += pow(a,sign-j)*(float)(c[j]-87);
						j++;
					}
				}	
			}
		}
	}
	printf("%lf\n",num);//打印转换完成的十进制数
//将十进制转换成其他进制
//整数转换部分
	j=0;
	m = (int)num;
	if (m == 0){
		out[0] = '0';
		k++;
	}//这里处理纯小数情况
	while(m > 0){
		if( (m % b) > 9)
			value[j] = (char)(m %b + 87);
		else
			value[j] = (char)(m%b + '0');
			m /= b;
			j++;
	}
	j--;
	while(j >= 0){
		out[k] = value[j];
		k++ , j--;
	}
//小数转换部分
	num -= (int)num;
	if (num != 0){
		out[k] = '.';
		k++;
		for (int i = 0 ; i < 8 ; i++){
			if (num == 0)
			break;
			if((int)(num*b)>9)
			out[k] = (char)((int)(num*b) + 87);
			else
			out[k] = (char)((int)(num*b)+'0');
			num = num*b - (int)(num*b);
			k++;
		}	
	}
	out[k] = '\0';//手动结尾，避免取到奇怪的值
	printf("%s",out);

	return 0;
}
