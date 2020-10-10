#include <iostream>
// #include <algorithm>
using namespace std;
/*
 3ptr technique
 index0 ptr...where next 0 should be there
index2=where next 2 should be there
i=for traversing array
*/
void sort012(int *arr, int n)
{
    int index0=0;
	int index2=n-1;
	int i=0;
	while(i<=index2){
		if(arr[index2]==2){
			index2-=1;
		}
		else if(arr[index0]==0){
			index0+=1;
		}
		else if(arr[i]==0 && i>index0){
			//cout<<"swapping "<<i<<"th index with "<<index0<<"th index"<<endl;
			//cout<<"index0,index2 "<<index0<<" "<<index2<<endl;
			int temp=arr[i];
			arr[i]=arr[index0];
			arr[index0]=temp;
			index0+=1;
		}
		else if(arr[i]==1){
			i+=1;
		}
		else if(arr[i]==2 && i<index2 && arr[index2]!=0){
			//cout<<"swapping "<<i<<"th index with "<<index2<<"th index"<<endl;
			//cout<<"index0,index2 "<<index0<<" "<<index2<<endl;
			int temp=arr[i];
			arr[i]=arr[index2];
			arr[index2]=temp;
			index2-=1;
		}
		else if(arr[i]==2 && i<index2 && arr[index2]==0){
			//cout<<"swapping "<<i<<"th index with "<<index2<<"th index"<<endl;
			//cout<<"index0,index2 "<<index0<<" "<<index2<<endl;
			int temp=arr[i];
			arr[i]=arr[index2];
			arr[index2]=temp;
			index2-=1;
			//cout<<"swapping "<<i<<"th index with "<<index0<<"th index"<<endl;
			//cout<<"index0,index2 "<<index0<<" "<<index2<<endl;
			temp=arr[i];
			arr[i]=arr[index0];
			arr[index0]=temp;
		}
		else{
			i+=1;
		}
		
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
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}