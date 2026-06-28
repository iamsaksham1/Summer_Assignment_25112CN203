#include <iostream>
using namespace std;

const int MAX = 100;

int productID[MAX];
string productName[MAX];
int quantity[MAX];
float price[MAX];

int totalProducts = 0;

// Add Product
void addProduct()
{
    if(totalProducts == MAX)
    {
        cout << "Inventory Full!\n";
        return;
    }

    cout << "Enter Product ID: ";
    cin >> productID[totalProducts];

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, productName[totalProducts]);

    cout << "Enter Quantity: ";
    cin >> quantity[totalProducts];

    cout << "Enter Price: ";
    cin >> price[totalProducts];

    totalProducts++;

    cout << "\nProduct Added Successfully!\n";
}

// Display Products
void displayProducts()
{
    if(totalProducts == 0)
    {
        cout << "No Products Available!\n";
        return;
    }

    cout << "PRODUCT LIST\n";

    for(int i = 0; i < totalProducts; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        cout << "ID       : " << productID[i] << endl;
        cout << "Name     : " << productName[i] << endl;
        cout << "Quantity : " << quantity[i] << endl;
        cout << "Price    : Rs. " << price[i] << endl;
    }
}

// Search Product
void searchProduct()
{
    int id;
    bool found = false;

    cout << "Enter Product ID: ";
    cin >> id;

    for(int i = 0; i < totalProducts; i++)
    {
        if(productID[i] == id)
        {
            cout << "\nProduct Found!\n";
            cout << "ID       : " << productID[i] << endl;
            cout << "Name     : " << productName[i] << endl;
            cout << "Quantity : " << quantity[i] << endl;
            cout << "Price    : Rs. " << price[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Product Not Found!\n";
    }
}

// Update Quantity
void updateQuantity()
{
    int id;
    bool found = false;

    cout << "Enter Product ID: ";
    cin >> id;

    for(int i = 0; i < totalProducts; i++)
    {
        if(productID[i] == id)
        {
            cout << "Current Quantity: " << quantity[i] << endl;

            cout << "Enter New Quantity: ";
            cin >> quantity[i];

            cout << "Quantity Updated Successfully!\n";

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Product Not Found!\n";
    }
}

// Delete Product
void deleteProduct()
{
    int id;
    bool found = false;

    cout << "Enter Product ID: ";
    cin >> id;

    for(int i = 0; i < totalProducts; i++)
    {
        if(productID[i] == id)
        {
            found = true;

            for(int j = i; j < totalProducts - 1; j++)
            {
                productID[j] = productID[j + 1];
                productName[j] = productName[j + 1];
                quantity[j] = quantity[j + 1];
                price[j] = price[j + 1];
            }

            totalProducts--;

            cout << "Product Deleted Successfully!\n";

            break;
        }
    }

    if(!found)
    {
        cout << "Product Not Found!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "   INVENTORY MANAGEMENT SYSTEM\n";

        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateQuantity();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}