#include <iostream>
using namespace std;

int main()
{
    int choice;
    double totalData = 10.0;
    double usedData = 0;
    double amount;

    while (true)
    {
        cout << "\n===== Internet Data Manager =====" << endl;
        cout << "1. Check Remaining Data" << endl;
        cout << "2. Use Internet Data" << endl;
        cout << "3. Check Usage Percentage" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Remaining Data: "
                     << totalData - usedData << " GB" << endl;
                break;

            case 2:
                cout << "Enter data to use (GB): ";
                cin >> amount;

                if (amount > 0 && amount <= totalData - usedData)
                {
                    usedData += amount;
                    cout << "Data Used Successfully!" << endl;
                }
                else
                {
                    cout << "Invalid Amount or Insufficient Data!" << endl;
                }
                break;

            case 3:
                cout << "Usage Percentage: "
                     << (usedData / totalData) * 100 << "%" << endl;
                break;

            case 4:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

        if (choice == 4)
        {
            break;
        }
    }

    return 0;
}
