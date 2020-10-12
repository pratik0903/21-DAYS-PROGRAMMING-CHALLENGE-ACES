#include<iostream>
using namespace std;
int sum(int);
int sum(int a){
    if(a>0){
        return a+sum(a-1);
    }
    else
        return 0;
}
int main()
{
    cout<<int(4.7)<<endl;
    cout<<char(-127)<<endl;
    int res=sum(10);
    cout<<res<<endl;
}