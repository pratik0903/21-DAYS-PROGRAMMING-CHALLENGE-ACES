#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
    //input-- aaaabbbddde
    //output--- a4b3d3e1
    int i=0;
    int curr=0;
    char countChar;
    while(i<strlen(input)){
        int count=0;
        int j=i;
        while(input[j]==input[i]){
            j+=1;
            count+=1;
        }
        i=j;
        if(count>1){
            input[curr]=input[i-1];
            curr+=1;
            countChar=count+48;
            input[curr]=countChar;
            curr+=1;
            //cout<<input[i-1]<<count;
        }
        else{
            //cout<<input[i-1];
            input[curr]=input[i-1];
            curr+=1;
        }
    }
    input[curr]='\0';
    cout<<endl;
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    stringCompression(str);
    cout << str;
}