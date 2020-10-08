#include<iostream>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    int i=0;
    int j=size-1;
    while(i<j){
        if(input[i]==0 && input[j]==1){
            i+=1;
        }
        else if(input[i]==1 && input[j]==1){
            j-=1;
        }
        else if(input[i]==0 && input[j]==0){
            i+=1;
        }
        else{
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
        }
    }
}

int main(){
    int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}