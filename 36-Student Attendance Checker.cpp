#include <iostream>
using namespace std;

int main()
{
    int totalClasses, attendedClasses;
    double percentage;

    cout << "Enter total classes: ";
    cin >> totalClasses;

    cout << "Enter attended classes: ";
    cin >> attendedClasses;

    if (totalClasses <= 0 ||
        attendedClasses < 0 ||
        attendedClasses > totalClasses)
    {
        cout << "Invalid Attendance Data!" << endl;
    }
    else
    {
        percentage = (attendedClasses * 100.0) / totalClasses;

        cout << "Attendance Percentage: "
             << percentage << "%" << endl;

        if (percentage >= 75)
        {
            cout << "Eligible for Exam" << endl;
        }
        else
        {
            cout << "Not Eligible for Exam" << endl;
        }
    }

    return 0;
}
