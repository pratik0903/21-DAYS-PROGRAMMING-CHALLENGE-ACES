#include <iostream>
#include <cstring>
using namespace std;

void reversed(char arr[],int i,int j){
    while(i<j){
        char temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i+=1;
        j-=1;
    }
}
void reverseEachWord(char str[]) {
    int i=0;
    int wordStart;
    int wordEnd;
    while(true){
        if(i==0 || str[i-1]==' '){
            wordStart=i;
        }
        if(str[i+1]==' ' || str[i+1]=='\0'){
            wordEnd=i;
            reversed(str,wordStart,wordEnd);
        }
        i+=1;
        if(str[i]=='\0'){
            break;
        }
    }
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    reverseEachWord(str);
    cout << str;
}