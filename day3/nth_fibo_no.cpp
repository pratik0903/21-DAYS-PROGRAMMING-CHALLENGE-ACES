#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<3){
        cout<<1;
    }
    else{
        int a=1;
        int b=1;
        int c=0;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
}