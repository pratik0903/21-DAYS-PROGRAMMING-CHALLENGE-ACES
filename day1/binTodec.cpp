#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long int n;
    cin>>n;
    long output=0;
    long posn=0;
    while(n>0){
       bool rem=n%2;
        if(rem==1){
            output=output+pow(2,posn);
        }
        posn+=1;
        n/=10;
    }
    cout<<output<<endl;
}