#include<iostream>
using namespace std;
void reverseWord(char input[],int i,int j){

    //word is selected with help of i and j
    while(i<j){
        char temp;
        temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i+=1;
        j-=1;
    }
}
void reverseSentence(char input[]){
    int i=0;
    int countChar=0;
    int wStart;
    int wEnd;

    while(input[i]!='\0'){
        countChar+=1;
        i+=1;
    }
    
    i=0;
    while(true){
        if(i==0 || input[i-1]==' '){
            wStart=i;
        }

        if(input[i]=='\0'){
            break;
        }

        if(input[i+1]==' ' ){
            wEnd=i;
            reverseWord(input,wStart,wEnd);
        }
        else if(input[i+1]=='\0'){
            wEnd=i;
            reverseWord(input,wStart,wEnd);
        }
        
        
        i+=1;
    }
    //reversed whole string
    i=0;
    countChar-=1;
    while (i<countChar){
        char temp;
        temp=input[i];
        input[i]=input[countChar];
        input[countChar]=temp;
        i+=1;
        countChar-=1;
    }
}

int main(){
    
    char input[1000];
    cin.getline(input, 1000);
    reverseSentence(input);
    cout << input << endl;
}