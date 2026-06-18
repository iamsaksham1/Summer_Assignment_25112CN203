#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j =i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selection_sort(a1,n);
    for(int i=0; i<n; i++){
       cout<<a1[i]<<" ";
    }
    return 0;
}