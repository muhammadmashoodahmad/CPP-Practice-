#include <iostream>
using namespace std;

int main()
{
    int answer;
    int score = 0;

    cout << "===== C++ Quiz Competition =====" << endl;

    cout << "\nQ1. Which symbol ends a C++ statement?" << endl;
    cout << "1. :   2. ;   3. ,   4. ." << endl;
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 2)
    {
        score++;
    }

    cout << "\nQ2. Which data type stores whole numbers?" << endl;
    cout << "1. int   2. char   3. string   4. bool" << endl;
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 1)
    {
        score++;
    }

    cout << "\nQ3. Which loop checks its condition before each iteration?" << endl;
    cout << "1. switch   2. if   3. while   4. break" << endl;
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 3)
    {
        score++;
    }

    cout << "\nQ4. Which operator checks equality?" << endl;
    cout << "1. =   2. ==   3. !=   4. >" << endl;
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 2)
    {
        score++;
    }

    cout << "\nQ5. Which statement exits a loop immediately?" << endl;
    cout << "1. continue   2. return   3. break   4. cout" << endl;
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 3)
    {
        score++;
    }

    cout << "\n===== Quiz Result =====" << endl;
    cout << "Correct Answers: " << score << "/5" << endl;
    cout << "Percentage: " << score * 20 << "%" << endl;

    return 0;
}
