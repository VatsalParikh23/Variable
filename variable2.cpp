#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int var1=23;
    cout<<var1;
    cout<<showbase<<hex<<var1;
    cout<<showbase<<dec<<var1;
    cout<<showbase<<oct<<var1;
    cout<<bitset<16>(var1);

    return 0;
}
 