#include <iostream>
#include <cmath> // Instead of <math.h>
using namespace std;

class Calculator
{
    float a, b;

public:
    void result()
    {
        int choice;
        do
        {
            cout << "Enter 1 to Add 2 Numbers" <<
                    "\nEnter 2 to Subtract 2 Numbers" <<
                    "\nEnter 3 to Multiply 2 Numbers" <<
                    "\nEnter 4 to Divide 2 Numbers" <<
                    "\nEnter 0 To Exit\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 0)
            {
                cout << "Exiting program..." << endl;
                return;
            }

            cout << "Enter First Number: ";
            cin >> a;
            cout << "Enter Second Number: ";
            cin >> b;

            switch (choice)
            {
            case 1:
                cout << "Result: " << (a + b) << endl;
                break;
            case 2:
                cout << "Result: " << (a - b) << endl;
                break;
            case 3:
                cout << "Result: " << (a * b) << endl;
                break;
            case 4:
                if (b == 0)
                {
                    cout << "Division By Zero" << endl;
                }
                else
                {
                    cout << "Result: " << (a / b) << endl;
                }
                break;
            default:
                cout << "Invalid choice" << endl;
            }

        } while (choice != 0);
    }
};

int main()
{
    Calculator c;
    c.result();
    return 0;
}
