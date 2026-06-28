#include <iostream>
using namespace std;

const int MAX = 100;

int arr[MAX];
int size;

// Insert Elements
void insertElements()
{
    cout << "Enter Size: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elements Inserted Successfully.\n";
}

// Display Array
void displayArray()
{
    // a loop to print all elements
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

// Search Element
void searchElement()
{
    int key;
    bool found = false;

    cout << "Enter Element to Search: ";
    cin >> key;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element Found at Index : " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Element Not Found!" << endl;
    }
}

// Update Element
void updateElement()
{
    int index, value;

    cout << "Enter Index: ";
    cin >> index;

    if(index < 0 || index >= size)
    {
        cout << "Invalid Index!" << endl;
        return;
    }

    cout << "Enter New Value: ";
    cin >> value;

    arr[index] = value;

    cout << "Element Updated Successfully!" << endl;
}

// Delete Element
void deleteElement()
{
    int value;
    bool found = false;

    cout << "Enter Element to Delete: ";
    cin >> value;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            found = true;

            for(int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            size--;

            cout << "Element Deleted Successfully!" << endl;

            break;
        }
    }

    if(!found)
    {
        cout << "Element Not Found!" << endl;
    }
}

// Find Maximum
void maximumElement()
{
    // Assume first element is maximum
    // Traverse array
    // Print maximum
    int MAX = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>MAX){
            MAX = arr[i];
        }
    }
    cout<<MAX;
}

// Find Minimum
void minimumElement()
{
    // Assume first element is minimum
    // Traverse array
    // Print minimum
    int MIN= arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<MIN){
            MIN = arr[i];
        }
    }
    cout<<MIN;

}

// Sum
void sumArray()
{
    // Initialize sum = 0
    // Traverse array
    // Print sum

    int sum =0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout<<"Sum is :"<<sum;
}

// Average
void averageArray()
{
    // Call sum or calculate again
    // average = sum / size
  
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    double average = (double)sum / size;

    cout << "Average = " << average << endl;
}



// Reverse
void reverseArray()
{
    // Two Pointer Method
    // left = 0
    // right = size-1
    // Swap until left < right

    int i=0;
    int j= size-1;
    while(i<j){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
}

// Sort Ascending
void sortAscending()
{
    // Bubble Sort
    for(int i=size-1; i>=1; i--){
        for(int j=0; j<= i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// Sort Descending
void sortDescending()
{
    // Bubble Sort (Descending)
    for(int i=size-1; i>=1; i--){
        for(int j=0; j<= i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== ARRAY OPERATION SYSTEM ==========\n";

        cout << "1. Insert Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Update Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Find Maximum\n";
        cout << "7. Find Minimum\n";
        cout << "8. Find Sum\n";
        cout << "9. Find Average\n";
        cout << "10. Reverse Array\n";
        cout << "11. Sort Ascending\n";
        cout << "12. Sort Descending\n";
        cout << "13. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                insertElements();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                searchElement();
                break;

            case 4:
                updateElement();
                break;

            case 5:
                deleteElement();
                break;

            case 6:
                maximumElement();
                break;

            case 7:
                minimumElement();
                break;

            case 8:
                sumArray();
                break;

            case 9:
                averageArray();
                break;

            case 10:
                reverseArray();
                break;

            case 11:
                sortAscending();
                break;

            case 12:
                sortDescending();
                break;

            case 13:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 13);

    return 0;
}