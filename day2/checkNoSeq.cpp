#include<iostream>
using namespace std;

int main() {
	long int n;
    cin>>n;
    int decreaseFlag=0;
    int increaseFlag=0;
    long int curr;
    long int prev=0;
    if(n>1){
            for(long int i=0;i<n;i++){
                cin>>curr;
                if(i==0){
                    prev=curr;
                }
                else{
                    if(prev>curr && increaseFlag==0){
                        decreaseFlag=1;
                    }
                    else if(prev<curr){
                        increaseFlag=1;
                    }
                    else if(increaseFlag==1 and prev>curr){
                        decreaseFlag=2;
                        break;                
                    }
                    else{
                        decreaseFlag+=1;
                    }
                    

                }
                prev=curr;
            }
        if(decreaseFlag==1 && increaseFlag==0){
            cout<<"true";
        }
        else if(decreaseFlag==1 && increaseFlag==1){
            cout<<"true";
        }
        else if(decreaseFlag==0 && increaseFlag==1){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }
    else
    {
        cout<<"true";
    }
    
}
