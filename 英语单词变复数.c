 
#include <stdio.h>
#include <string.h>
void RegularPlural(char * str){
    
    int lens = strlen(str);
    char ch = str[lens-1];
    char pch = str[lens-2];
 
    //��һ����� 
    if((ch=='s')||(ch=='x')||(ch=='z')
    ||(ch=='h'&&pch=='c')||(ch=='h'&&pch=='s')){
        str[lens]='e';
        str[lens+1]='s';
        str[lens+2]='\0';
    }else if((ch=='y')&&(pch!='a'&&pch!='e'&&pch!='i'&&pch!='o'&&pch!='u')){ //�ڶ������ 
        str[lens-1]='i';
        str[lens]='e';
        str[lens+1]='s';
        str[lens+2]='\0';
    } else {  //���� 
        str[lens] = 's';
        str[lens+1]='\0';
    }
        
    
}
 
int main(void){
    
    char word[30];
    
    //ѭ�����Դ��� 
    while(1){
        gets(word);
        RegularPlural(word);
        printf("%s\n",word);
    }
    
}
