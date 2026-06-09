#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int freq=0;
    int element =0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            int count = 0;
              for(int j =0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
             if(count > freq){
    
        freq = count;
        element = arr[i];}
    }
        }
         cout << "Maximum frequency element = " << element << endl;
    cout << "Frequency = " << freq;

    return 0;
}