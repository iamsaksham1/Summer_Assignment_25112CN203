#include<iostream>
using namespace std;
int maxx(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
 }
 return max;
}
int main(){
    int n;
    cout<<" how many numbers :";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" numbers ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"the maximum is :"<<maxx(arr,n)<<endl;
    return 0;
}