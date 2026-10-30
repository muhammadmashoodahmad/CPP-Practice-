#include <iostream>
using namespace std;

int main()
{
    int choice;
    int totalSpaces = 20;
    int parkedCars = 0;

    while (true)
    {
        cout << "\n===== Parking Lot System =====" << endl;
        cout << "1. Park a Car" << endl;
        cout << "2. Remove a Car" << endl;
        cout << "3. Check Available Spaces" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (parkedCars < totalSpaces)
            {
                parkedCars++;
                cout << "Car Parked Successfully!" << endl;
            }
            else
            {
                cout << "Parking Lot is Full!" << endl;
            }
        }
        else if (choice == 2)
        {
            if (parkedCars > 0)
            {
                parkedCars--;
                cout << "Car Removed Successfully!" << endl;
            }
            else
            {
                cout << "Parking Lot is Empty!" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Available Spaces: "
                 << totalSpaces - parkedCars << endl;
        }
        else if (choice == 4)
        {
            cout << "System Closed!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}
