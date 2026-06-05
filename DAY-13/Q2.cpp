#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<" enter the size of the array : ";
    cin>>l;
    int arr[l];
    int sum=0;
    double avg;
    cout << "Enter the elements:\n";
    for(int i=0; i<l; i++){
        cin>>arr[i];
        sum+=arr[i];
        avg= double(sum)/l;
    }
    cout<<"the sum of digits of array is : "<<sum<<endl;
    cout<<"the average of digits of array is : "<<avg<<endl;
    return 0;
}