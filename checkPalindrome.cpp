#include<iostream>
using namespace std;

bool checkPalindrome(char str[]){

    int i=0;
    int last=0;
    while(str[i]!='\0'){
        last+=1;
        i+=1;
    }
    i=0;
    int j=last-1;
    while(i<j){
        if(str[i]==str[j]){
            i+=1;
            j-=1;
        }
        else{
            return false;
        }
        
    }
    return true;

}

int main(){

  char str[10000];
  cin.getline(str,10000);

  if(checkPalindrome(str)){
  	cout << "true" << endl; 	
  }else{
  cout << "false" << endl;
  }
}

