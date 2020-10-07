#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int output=0;
    int n;
    cin>>n;
    while(n>0){
        output=(output*10)+(n%10);
        n/=10;
    }
    cout<<output;
}
