#include <iostream>
#include<cstring>
using namespace std;
// input - given string
// You need to update in the input string itself. No need to return or print anything

void removeConsecutiveDuplicates(char input[]) {
    int curr=0;
    for(int i=0;i<strlen(input);i++){
        if(i==0){
            input[curr]=input[i];
            curr+=1;
        }
        else if(input[i]==input[curr-1]){
            continue;
        }
        else{
            input[curr]=input[i];
            curr+=1;
        }
    }
    input[curr]='\0';
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
