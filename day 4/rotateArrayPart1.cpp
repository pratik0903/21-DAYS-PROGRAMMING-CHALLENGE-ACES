#include <iostream>
using namespace std;

void rotateLeft(int arr[],int n){
    int temp=arr[0];
    int i=0;
    while(i<n-1){
        arr[i]=arr[i+1];
        i+=1;
    }
    arr[i]=temp;
}
void rotateRight(int arr[],int n){
    int j=n-1;
    int temp=arr[j];
    while(j>0){
        arr[j]=arr[j-1];
        j-=1;
    }
    arr[j]=temp;
}
void rotate(int input[], int d, int n)
{
    //Write your code here
    if(d<n-d){
        //cout<<"left\n";
        for(int i=0;i<d;i++){
            rotateLeft(input,n);
        }
    }
    else{
        d=n-d;
        //cout<<"right\n";
        for(int i=0;i<d;i++){
            rotateRight(input,n);
        }
    }
}
/*
123,d=2
leftrotate-->231,312
rightrotate-->312
*/

int main()
{
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}