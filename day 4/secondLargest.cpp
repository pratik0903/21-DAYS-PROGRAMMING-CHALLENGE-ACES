#include <iostream>
using namespace std;

int findSecondLargest(int input[], int n)
{
    int large;
    int secondLarge=-2147483648;
    for(int i=0;i<n;i++){
        if(i==0){
            large=input[i];
        }
        else if(input[i]>large){
            secondLarge=large;
            large=input[i];
        }
        else if(input[i]<large && input[i]>secondLarge){
            secondLarge=input[i];
        }
    }
    return secondLarge;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}