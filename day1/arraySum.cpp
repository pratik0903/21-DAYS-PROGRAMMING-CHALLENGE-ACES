#include<iostream>
#include<climits>
using namespace std;

int main(){
    long int n;
    long int array[1000000];
    cin>>n;
    long int sum=0;
    for (long int i=0;i<n;i++){
        cin>>array[i];
        sum+=array[i];
    }
    cout<<sum;
}