#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a,b;
	int sign , j = 0 , k = 0;
	char c[10];
	char value[100],out[100]; // �м�ֵ��ʮ���ƣ�
	double num = 0;
	long m;
	scanf("%d%d",&a,&b);//���������ֵĽ���
	scanf("%s",c);//��������
	/*if (a == b){
		printf("%s",c);
		exit(1);
	}*/
	//�ҵ�С����
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
	//����8��2����
	if (a != 16){
		while(c[j]){
			if (j == sign)//����С����
				j++;
			else{
				if (c[j] - '0' == 0)//ȥ�����е��㣬������
				j++;
				else{
					if (j < sign){
						num += pow(a,sign-j-1)*(int)(c[j]-'0');//С����ǰ
						j++;
					}
					else{
						num += pow(a,sign-j)*(int)(c[j]-'0');//С�����
						j++;
					}
				}
			}	
		}
	}
	//����16����
	else{
		while(c[j]){
			if (j == sign)//����С����
			j++;
			else{
				if(j < sign){
					if (c[j] == 48)
					j++;
					else if (48 < c[j] && c[j] < 58){//ȥ�����е����abcdef
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
	printf("%lf\n",num);//��ӡת����ɵ�ʮ������
//��ʮ����ת������������
//����ת������
	j=0;
	m = (int)num;
	if (m == 0){
		out[0] = '0';
		k++;
	}//���ﴦ��С�����
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
//С��ת������
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
	out[k] = '\0';//�ֶ���β������ȡ����ֵ�ֵ
	printf("%s",out);

	return 0;
}
