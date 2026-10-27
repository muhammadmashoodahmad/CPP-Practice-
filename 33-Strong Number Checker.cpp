#include <iostream>
using namespace std;

int main()
{
    int number, original, digit;
    int factorial, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Invalid Number!" << endl;
        return 0;
    }

    original = number;

    while (number > 0)
    {
        digit = number % 10;

        factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        number = number / 10;
    }

    if (sum == original)
    {
        cout << original << " is a Strong Number." << endl;
    }
    else
    {
        cout << original << " is not a Strong Number." << endl;
    }

    return 0;
}
