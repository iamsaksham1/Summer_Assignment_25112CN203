#include <iostream>
using namespace std;
int main(){
    int count_even=0;
    int count_odd=0 ;
    int l;
    cout<<" enter the size of array : ";
    cin>>l;
    int arr[l];

    //input
    cout<<"enter the elements of array :"<<endl;
    for(int i =0; i<l; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0)
        {
    count_even++;
        }
        else
    {
    count_odd++;
    }
    }
    cout<<" the number of even elements are : "<<count_even<<endl;
    cout<<" the number of odd elements are : "<<count_odd<<endl;
    return 0;
}