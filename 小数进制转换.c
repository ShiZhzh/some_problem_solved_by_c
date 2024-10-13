#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	int numberIn;
	int numberOut;
	int c,b,a,d,e,f,g,j;
	double h,k;
	int length,len,lengthTogether,lengthSmall,lengthFin;
	int number=0;
    double numberSmall=0.0;
    double numberFin=0.0;
	int i;
	char strOrigen[10000];
	char strSmall[10000];
	char str[10000];
	char aim[10000];
	char aimT[10000];
	char Small[10000];
	scanf("%d",&numberIn);
	scanf("%d",&numberOut); 
	scanf("%s",strOrigen);
//以下为整数部分转换 
	for(i=0;strOrigen[i]!='.'&&i<=1000;i++)
	{
		str[i]=strOrigen[i];
	}
//	puts(str);
//	sscanf(str,"%d",&c);
//	printf("%d",length);
//printf("%c",str[0]);
    length=strlen(str);
	switch(numberIn)
	{
		case 2:
		{
			for(i=0;i<length;i++)
			{
				if(str[i]=='1')
				number=number+pow(2.0,length-i-1);	
			}
//			printf("%d",number);
			break;
		}
		case 8:
		{
			for(i=0;i<length;i++)
			{
				b=(str[i]-'0');
				number=number+b*(pow(8.0,length-i-1));	
			}
//			printf("%d",number);
			break;
		}
		case 16:
		{
			for(i=0;i<length;i++)
			{
				if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
				b=(str[i]-'0');
				if(str[i]=='a')
				b=10; 
				if(str[i]=='b')
				b=11; 
				if(str[i]=='c')
				b=12; 
				if(str[i]=='d')
				b=13;
				if(str[i]=='e')
				b=14; 
				if(str[i]=='f')
				b=15; 
				number=number+b*(pow(16.0,length-i-1));
			}
//			printf("%d",number);
			break;
		}
		case 10:
		{
			sscanf(str,"%d",&number);
			break;
		}
	}
	switch(numberOut)
	{
		case 2:
		{
			if(number<2)
			aim[0]=number+'0';
			if(number>=2)
		{
			for(i=0;number>=2;i++)
			{
				aimT[i]=number%2+'0';
				number=number/2;
//				printf("%c",aimT[i]);
			}
			aimT[i]=number+'0';
			
			len=strlen(aimT);
			for(i=0;i<=len;i++)
			{
			aim[i]=aimT[len-1-i];
		    }
		}
//		    for(i=0;i<length;i++)
//		    printf("%c",aim[i]);
////            puts(aim);
			break;
		} 
		case 8:
		{
			if(number<8)
			aim[0]=number+'0';
			if(number>=8)
		{
			for(i=0;number>=8;i++)
			{
				aimT[i]=number%8+'0';
				number=number/8;
//				printf("%c",aimT[i]);
			}
			aimT[i]=number+'0';
			
			len=strlen(aimT);
			for(i=0;i<=len;i++)
			{
			aim[i]=aimT[len-1-i];
		    }
		}
//		    for(i=0;i<length;i++)
//		    printf("%c",aim[i]);
////           puts(aim);
			break;
		}
		case 16:
		{
			if(number<10)
			aim[0]=number+'0';
			if(number>=10&&number<16)
			{
					switch(number)
					{
						case 10:
							aim[0]='a';
							break;
						case 11:
							aim[0]='b';
							break;
						case 12:
							aim[0]='c';
							break;
						case 13:
							aim[0]='d';
							break;
						case 14:
							aim[0]='e';
							break;
						case 15:
							aim[0]='f';
							break;
					}					
			}
			if(number>=16)
		{
			for(i=0;number>=16;i++)
			{
				d=number%16;
				if(d<=9)
				aimT[i]=d+'0';
				if(d>=10)
				{
					switch(d)
					{
						case 10:
							aimT[i]='a';
							break;
						case 11:
							aimT[i]='b';
							break;
						case 12:
							aimT[i]='c';
							break;
						case 13:
							aimT[i]='d';
							break;
						case 14:
							aimT[i]='e';
							break;
						case 15:
							aimT[i]='f';
							break;
					}
				}
				number=number/16;
//				printf("%c",aimT[i]);
			}
			aimT[i]=number+'0';
			
			len=strlen(aimT);
			for(i=0;i<=len;i++)
			{
			aim[i]=aimT[len-1-i];
		    }
		}
//		    for(i=0;i<length;i++)
//		    printf("%c",aim[i]);			
////            puts(aim);
			break;
		}
		case 10:
		{
////			printf("%d",number);
			break;
		}
	}
//整数部分转换完毕。整数部分输出应为aim.(为10时为number。）
//
//
//
//
//
//
//
//
//以下为小数部分转换. 
    lengthTogether=strlen(strOrigen);
//    printf("%d",lengthTogether);
    lengthSmall=lengthTogether-length-1;
//    printf("%d",lengthSmall);
    f=length+1;
    for(i=0;i<lengthSmall&&f<lengthTogether;i++)
	{
      strSmall[i]=strOrigen[f];
	  f++;		
	}
//    puts(strSmall);
    switch(numberIn)
	{
		case 2:
		{
			for(i=0;i<lengthSmall;i++)
			{
				g=strSmall[i]-'0';
				numberSmall=numberSmall+g*pow(0.5,i+1);	
			}
//			printf("  %.8lf",numberSmall);
			break;
		}
		case 8:
		{
			for(i=0;i<lengthSmall;i++)
			{
				g=strSmall[i]-'0';
				numberSmall=numberSmall+g*pow(0.125,i+1);
			}
//			printf("  %.8lf",numberSmall);			
			break;
		}
		case 16:
		{
			for(i=0;i<lengthSmall;i++)
			{
				if(strSmall[i]=='1'||strSmall[i]=='2'||strSmall[i]=='3'||strSmall[i]=='4'||strSmall[i]=='5'||strSmall[i]=='6'||strSmall[i]=='7'||strSmall[i]=='8'||strSmall[i]=='9')
				g=strSmall[i]-'0';
				if(strSmall[i]=='a')
				g=10; 
				if(strSmall[i]=='b')
				g=11; 
				if(strSmall[i]=='c')
				g=12; 
				if(strSmall[i]=='d')
				g=13;
				if(strSmall[i]=='e')
				g=14; 
				if(strSmall[i]=='f')
				g=15; 	
				numberSmall=numberSmall+g*pow(0.0625,i+1);			
			}
//			printf("  %.8lf",numberSmall);			
			break;
		}
		case 10:
		{
			sscanf(strSmall,"%lf",&h);
			numberSmall=h/pow(10.0,lengthSmall);
//			printf("  %.8lf",numberSmall);
			break;
		}	
	}
//	printf("  %lf    ",numberSmall);
	switch(numberOut)
	{
		case 2:
		{
			for(i=0;i<8;i++)
			{
			j=numberSmall*2;
//			printf("%d ",j);
			Small[i]=j+'0';
			numberSmall=numberSmall*2-j;
		    }
////		    puts(Small);
			break;
		}
		case 8:
		{
			for(i=0;i<8;i++) 
			{
            j=numberSmall*8;
//			printf("%d ",j);
			Small[i]=j+'0';
			numberSmall=numberSmall*8-j;
			}
////		    puts(Small);
			break;
		}
		case 16:
		{
			for(i=0;i<8;i++) 
			{
            j=numberSmall*16;
//			printf("%d ",j);
            if(j<10)
			Small[i]=j+'0';
			if(j>10)
			{
					switch(j)
					{
						case 10:
							Small[i]='a';
							break;
						case 11:
							Small[i]='b';
							break;
						case 12:
							Small[i]='c';
							break;
						case 13:
							Small[i]='d';
							break;
						case 14:
							Small[i]='e';
							break;
						case 15:
							Small[i]='f';
							break;
					}
			}
			numberSmall=numberSmall*16-j;
			}
////		    puts(Small);
			break;			
		}
		case 10:
		{
			numberFin=number+numberSmall;
//			printf("%lf",numberFin);
			break;
		}	
	}
    	if(numberOut==10)
		{
			numberFin=number+numberSmall;
//			printf("%d",number);
			sprintf(Small,"%.8lf",numberFin);
			lengthFin=strlen(Small);
			for(i=1;Small[lengthFin-i]=='0';i++)
	          Small[lengthFin-i]='\0';
	        lengthFin=strlen(Small);
	        if(Small[lengthFin-1]=='.')
	          Small[lengthFin-1]='\0';
	        puts(Small);
	    }
		else
		{
	        for(i=1;Small[8-i]=='0';i++)
	        Small[8-i]='\0';			
			strcat(aim,".");
			strcat(aim,Small);
			puts(aim);	
		}	
	return 0;
}
