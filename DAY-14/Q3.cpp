#include <iostream>
using namespace std;
int main(){
    int l; 
    
    cout<<"Enter the size of array : ";
    cin>>l;
    int arr[l];
    int largest =arr[0];
    int slargest =arr[0];

    //input
    cout<<" Enter the elements of array :"<<endl;
    for(int i=0; i<l; i++){
        cin>>arr[i];
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest)
{
    slargest = arr[i];
}
    }
    cout<<" the second largest is :"<<slargest<<endl;
    return 0 ;
}