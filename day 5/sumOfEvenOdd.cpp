#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumEven=0,sumOdd=0;
    while(n>0){
        int remainder=n%10;
        if(remainder%2==0){
            sumEven+=remainder;
        }
        else{
            sumOdd+=remainder;
        }
        n/=10;
    }
    cout<<sumEven<<" "<<sumOdd;
}