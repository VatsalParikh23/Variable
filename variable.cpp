#include<iostream>
using namespace std;
int main()
{
    int var1=34;
    float var2=15.93;
    string var3="Hello";
    char var4='#';

    cout<< var1<<endl;
    cout<< var2<<endl;
    cout<< var3<<endl;
    cout<< var4<<endl;

    cout<<"Value of int variable is="<<var1<<endl;
    cout<<"Value of float variable is="<<var2<<endl;
    
    cout<<"size of the variable are:"<<endl;
    cout<<"int="<<sizeof(var1)<<endl;
    cout<<"Float="<<sizeof(var2)<<endl;
    cout<<"string="<<sizeof(var3)<<endl;
    cout<<"char="<<sizeof(var4)<<endl;
}