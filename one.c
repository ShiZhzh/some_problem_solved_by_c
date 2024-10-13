#include<stdio.h>
#include<math.h>
#include<iostream> 
//using namespace std 全局管理 
//int main(int argc,char**argv){}//命令行参数 
int main()
{
	float a=0;//可以先在开头定义所有的变量 
	a=sin(20.0/180*3.14159);
	printf("%f",a);
	
}
/*头文件设置IO环境， 定义了输入输出函数  其中std标准 io输入输出
   main必须有而且唯一 */ 

