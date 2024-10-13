#include<stdio.h>
int main()
{
	int a=0x536156;
	printf("%d",a); 
}
//整形数据会省略小数部分 
//float y=3/2输出整数，因为先进行3/2运算 要进行强制类型转换 3.0/2或3/2.0
/*    %a(%A)     浮点数、十六进制数字和p-(P-)记数法(C99)
      %c             字符
      %d             有符号十进制整数
      %f              浮点数(包括float和doulbe)
      %e(%E)     浮点数指数输出[e-(E-)记数法]
      %g(%G)     浮点数不显无意义的零"0"
      %i              有符号十进制整数(与%d相同)
      %u             无符号十进制整数
      %o             八进制整数    e.g.     0123
      %x(%X)      十六进制整数<?xml:namespace prefix = st1 />()   e.g.   0x1234
      %p             指针
      %s             字符串
      %%            "%"
       "％-md" ：左对齐，若m比实际少时，按实际输出。
     "%m.ns"：输出m位，取字符串(左起)n位，左补空格，当n>m or m省略时m=n
                      e.g.    "%7.2s"   输入CHINA
                                 　           输出"     CH"
     "%m.nf"：输出浮点数，m为宽度，n为小数点右边数位
                      e.g.    "%"    输入3852.99
                                               输出3853.0 
      长度：为ｈ短整形量,ｌ为长整形量
      https://blog.csdn.net/whalefall/article/details/80297752
                                                                                */
