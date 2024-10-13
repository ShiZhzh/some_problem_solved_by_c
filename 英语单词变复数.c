 
#include <stdio.h>
#include <string.h>
void RegularPlural(char * str){
    
    int lens = strlen(str);
    char ch = str[lens-1];
    char pch = str[lens-2];
 
    //第一种情况 
    if((ch=='s')||(ch=='x')||(ch=='z')
    ||(ch=='h'&&pch=='c')||(ch=='h'&&pch=='s')){
        str[lens]='e';
        str[lens+1]='s';
        str[lens+2]='\0';
    }else if((ch=='y')&&(pch!='a'&&pch!='e'&&pch!='i'&&pch!='o'&&pch!='u')){ //第二种情况 
        str[lens-1]='i';
        str[lens]='e';
        str[lens+1]='s';
        str[lens+2]='\0';
    } else {  //其他 
        str[lens] = 's';
        str[lens+1]='\0';
    }
        
    
}
 
int main(void){
    
    char word[30];
    
    //循环测试代码 
    while(1){
        gets(word);
        RegularPlural(word);
        printf("%s\n",word);
    }
    
}
