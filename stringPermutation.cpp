#include <iostream>
using namespace std;
#include<cstring>
// input1 - first input string
// input2 - second input string
bool isPermutation(char input1[], char input2[]) {
    /*
    if(strlen(input1)==strlen(input2)){
        int ans=0;
        int element;
        for(int i=0;i<strlen(input1);i++){
            element=input1[i];
            ans=ans^element;
        }
        for(int i=0;i<strlen(input2);i++){
            element=input2[i];
            ans=ans^element;
        }
        if(ans==0){
            return true;
        }
        else{
            return false;
        }
        
    }
    else{
        return false;
    }*/


    if(strlen(input1)==strlen(input2)){
        for(int i=0;i<strlen(input1);i++){
            bool notFound=true;
            for(int j=0;j<strlen(input2);j++){
                if(input1[i]==input2[j]){
                    input2[j]=' ';
                    notFound=false;
                    break;
                }
            }
            if(notFound==true){
                return false;
            }

        }
        return true;
    }
    else
    {
        return false;
    }
    
    
}

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
