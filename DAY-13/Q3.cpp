#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the size of array : ";
    cin>>l;
    int arr[l];
    

    //input of array
    cout<<"Enter the elements of Array :"<<endl;
    for(int i=0; i<l; i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    int smallest=arr[0];

    //largest
    for(int i=0 ; i<l; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    //smallest
        if(arr[i] < smallest)
    {
        smallest = arr[i];
    }
    }
    cout<<"the largest element of array is : "<<largest<<endl;
    cout<<"the smallest element of array is : "<<smallest;
    return 0;
}