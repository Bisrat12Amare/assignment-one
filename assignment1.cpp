//Name:Bisrat Amare  UGR/0017/16    section 4

//Question number 1
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"the purpose of this program is to analyzes product sales and inventory for a store.";
    cout<<" do not forget that c++ is a compiled language.";
    //Question number 2
    string productName;
    int productCategory;
    int invQuanti;
    float productPrice;
    int numberOfSold;

    //Question number 3
    int newInventory; 
    float totalSales;
    string inventoryStatus;

    //Question number 4
    int example1 = 100;        
    int example2; example2 = 200;  
    int example3 {300};        

    //Question number 5
    auto copyTotalSales = 0.0; 
    decltype(invQuanti) anotherTotalSales = 25;

    //Question number 6
    const float taxRate = 0.15;

    //Question number 7 
    cout << "enter the product Name: ";
    cin.ignore();
    getline(cin, productName);
    cout << "enter the product category: ";
    cin >> productCategory;
    cout << "enter the initial inventory quantity: ";
    cin >> invQuanti;
    cout << "enter the product price: ";
    cin >> productPrice;
    cout << "enter the number of items sold: ";
    cin >> numberOfSold;

    //Question number 8 
    newInventory = invQuanti - numberOfSold;
    totalSales = numberOfSold * productPrice;
    invQuanti -= numberOfSold;

    cout << "the new inventory is: " << newInventory << endl;
    cout << "the total sales amount is: " << totalSales << endl;

    //Question number 9
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    //Question number 10
    if (productCategory >= 1 && productCategory <= 5) {
        cout << "the product category is within the valid range." << endl;
    } else {
        cout << "the product category is not within the valid range." << endl;
    }

    switch (productCategory) {
        case 1:
            cout << "Category 1: Electronics" << endl;
            break;
        case 2:
            cout << "Category 2: Groceries" << endl;
            break;
        case 3:
            cout << "Category 3: Clothing" << endl;
            break;
        case 4:
            cout << "Category 4: Stationery" << endl;
            break;
        case 5:
            cout << "Category 5: Miscellaneous" << endl;
            break;
        default:
            cout << "Invalid Category" << endl;
    }

    //Question number 11 
    for (int i = 1; i <= numberOfSold; i++) {
        cout << "the product price of " << i << " is " << productPrice << endl;
    }

    //Question number 12
    //Print the tax rates from both the preprocessor constant and the const variable
    cout << "Const Variable Tax Rate: " << taxRate << endl;

    // Print a detailed summary
    cout << "\nProduct Summary:\n";
    cout << "Name: " << productName << "\nCategory: " << productCategory;
    cout << "\nInitial Inventory: " << invQuanti + numberOfSold;
    cout << "\nPrice per unit: $" << productPrice;
    cout << "\nItems Sold: " << numberOfSold;
    cout << "\nNew Inventory: " << newInventory;
    cout << "\nTotal Sales Amount: " << totalSales;
    cout << "\nInventory Status: " << inventoryStatus;
    cout << "\nCopy of Total Sales (auto): " << copyTotalSales;
    cout << "\nAnother Helper Variable (decltype): " << anotherTotalSales << endl;

    return 0;
}
