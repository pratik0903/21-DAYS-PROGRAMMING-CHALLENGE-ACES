#include <iostream>
using namespace std;

void trimSpaces(char input[]) {
	int next=0;
    int i=0;
    while(input[i]!='\0'){
        if(input[i]!=' '){
            input[next]=input[i];
                next+=1;
        }
        i+=1;
    }
    input[next]='\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


