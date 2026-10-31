#include <iostream>
using namespace std;

int main()
{
    int choice, quantity;
    double total = 0;
    double price;

    while (true)
    {
        cout << "\n===== Shopping Cart =====" << endl;
        cout << "1. Laptop - Rs. 50000" << endl;
        cout << "2. Keyboard - Rs. 2000" << endl;
        cout << "3. Mouse - Rs. 1000" << endl;
        cout << "4. View Cart Total" << endl;
        cout << "5. Checkout" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                price = 50000;
                break;

            case 2:
                price = 2000;
                break;

            case 3:
                price = 1000;
                break;

            case 4:
                cout << "Cart Total: Rs. " << total << endl;
                continue;

            case 5:
                cout << "Final Bill: Rs. " << total << endl;
                cout << "Thank You for Shopping!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
                continue;
        }

        if (choice == 5)
        {
            break;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        if (quantity > 0)
        {
            total += price * quantity;
            cout << "Product Added to Cart!" << endl;
        }
        else
        {
            cout << "Invalid Quantity!" << endl;
        }
    }

    return 0;
}
