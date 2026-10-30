#include <iostream>
using namespace std;

int main()
{
    int choice;
    int waitingPatients = 0;

    while (true)
    {
        cout << "\n===== Hospital Queue System =====" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Call Next Patient" << endl;
        cout << "3. Check Waiting Patients" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            waitingPatients++;
            cout << "Patient Added to Queue!" << endl;
        }
        else if (choice == 2)
        {
            if (waitingPatients > 0)
            {
                waitingPatients--;
                cout << "Next Patient, Please!" << endl;
            }
            else
            {
                cout << "No Patients Waiting!" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Waiting Patients: "
                 << waitingPatients << endl;
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
