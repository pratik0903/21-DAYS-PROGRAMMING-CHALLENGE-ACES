#include <iostream>
using namespace std;

void insertionSort(int input[], int size)
{
    for (int i=1;i<size;i++){
        int j=i;
        int temp=input[i];
        while(j>=0 && input[j-1]>temp){
            input[j]=input[j-1];
            j--;
        }
        input[j]=temp;
    }
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

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}