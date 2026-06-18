#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array in sorted order :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int low = 0;;
    int high = n-1;
    int target;
    cout<<"Enter the target you wanted to search :";
    cin>>target;
    bool found = false;
    while(low<=high){
        int mid = low+(high - low)/2;
        if (arr[mid]==target){
            cout<<"Target found at index :"<<mid;
            found=true;
            break;
        }
        else if(arr[mid]<target){
            low= mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(!found)
{
    cout << "Target not found";
}
return 0;

}