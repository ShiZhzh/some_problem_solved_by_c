#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    int a,b;
    int op;//0加法，1减法，2乘法
    for(int i=0;i<n;++i){
        cin>>str;
        if(str[0]=='a'){
            op = 0;
            cin>>a>>b;
        }else if(str[0]=='b'){
            op = 1;
            cin>>a>>b;
        }else if(str[0]=='c'){
            op = 2;
            cin>>a>>b;
        }else{
            //意味着这行只有两个数字
            a = stoi(str);
            cin>>str;
            b = stoi(str);
        }
        if(op==0){
            str=to_string(a)+"+"+to_string(b)+"="+to_string(a+b);
            cout<<str<<endl<<str.length()<<endl;
        }else if(op==1){
            str=to_string(a)+"-"+to_string(b)+"="+to_string(a-b);
            cout<<str<<endl<<str.length()<<endl;
        }else{
            str=to_string(a)+"*"+to_string(b)+"="+to_string(a*b);
            cout<<str<<endl<<str.length()<<endl;
        }
    }
}