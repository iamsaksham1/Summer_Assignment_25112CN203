#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        int swap =0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap=1;
            }
        }
        if(swap==0){
            break;
        }
    }
}
int main(){
    int n;
    cout << "enter the size of array 1 :"<<endl;
    cin>>n;
    int a1[n];
    cout<<"enter the elements of array 1 :"<<endl;
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    bubble_sort(a1,n);
    for(int i=0; i<n; i++){
       cout<<a1[i]<<" ";
    }
    return 0;
}