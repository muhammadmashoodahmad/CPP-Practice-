#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 25000;
    double amount;

    do
    {
        cout << "\n===== Bank Account System =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0)
                {
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                }
                else
                {
                    cout << "Invalid Amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                }
                else
                {
                    cout << "Invalid Amount or Insufficient Balance!" << endl;
                }
                break;

            case 4:
                cout << "Thank You for Using Our Bank!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
