//bubble sort in array by desending
#include<iostream>
using namespace std;
int main()
{
    int n, i, j, swap;
    cout<<"Enter the Size of the array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the unsorted  Numbers: "<<endl;
    for(i=0; i<n; i++)
        cin>>arr[i];
        cout<<"solve the array with bubble method:"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
            for(int k=0;k<n;k++){
					cout<<arr[k]<<",";
				}
				cout<<endl;
        }
}
    cout<<"sorted element array is\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" "<<endl;
    return 0;
}
