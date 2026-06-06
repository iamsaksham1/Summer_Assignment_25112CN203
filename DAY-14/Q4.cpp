#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the size of array : ";
    cin>>l;
    int arr[l];
    int duplicate = 0;
    bool found = false;
    //input
    cout<<" Enter the elements of array :"<<endl;
    for(int i=0; i<l; i++){
        cin>>arr[i];
    }
    for(int i =0; i<l; i++){
        for(int j=i+1; j<l; j++){
            if(arr[i]==arr[j]){
                duplicate=arr[i];
                found = true;
                break;
            }
        }
        if (found == true) {
            break;
        }
    }
     if (found == true) {
        cout << "The duplicate is : " << duplicate;
    } else {
        cout << "No duplicate found";
    }
    return 0;
}