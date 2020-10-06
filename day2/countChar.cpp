#include<iostream>
using namespace std;

int main(){
	
    int countLower=0;
    int countDigit=0;
    int countSpace=0;
    char c;
    c=cin.get();
    while(c!='$'){
        
        if(c>='A' && c<='Z'){
            continue;
        }
        else if(c>='a' && c<='z'){
            countLower+=1;
        }
        else if(isdigit(c)){
            countDigit+=1;
        }
        else if(c=='\n' || c=='\t' || c==' ' ){
            countSpace+=1;
        }
        c=cin.get();
    }
    cout<<countLower<<" "<<countDigit<<" "<<countSpace;
}


