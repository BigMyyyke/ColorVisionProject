#include <iostream>
using namespace std;

int main()
{
    int red1;
    int green1;
    int blue1;
    int red2;
    int green2;
    int blue2;
    int redDifference;
    int greenDifference;
    int blueDifference;
    int again;

    cout << "Red-Green Color Accessibility Checker\n\n";

    do
    {
        cout << "Enter the RGB values for Color 1.\n";

        cout << "Red (0-255): ";
        cin >> red1;

        while (red1 < 0 || red1 > 255)
        {
            cout << "Invalid value. Enter a number from 0 to 255: ";
            cin >> red1;
        }

        cout << "Green (0-255): ";
        cin >> green1;

        while (green1 < 0 || green1 > 255)
        {
            cout << "Invalid value. Enter a number from 0 to 255: ";
            cin >> green1;
        }

        cout << "Blue (0-255): ";
        cin >> blue1;

        while (blue1 < 0 || blue1 > 255)
        {
            cout << "Invalid value. Enter a number from 0 to 255: ";
            cin >> blue1;
        }


        cout << "\nEnter the RGB values for Color 2.\n";

        cout << "Red (0-255): ";
        cin >> red2;

        while (red2 < 0 || red2 > 255)
        {
            cout << "Invalid value. Enter a number from 0 to 255: ";
            cin >> red2;
        }

        cout << "Green (0-255): ";
        cin >> green2;

        while (green2 < 0 || green2 > 255)
        {
            cout << "Invalid value. Enter a number from 0 to 255: ";
            cin >> green2;
        }

        cout << "Blue (0-255): ";
        cin >> blue2;

        while (blue2 < 0 || blue2 > 255)
        {
            cout << "Invalid value. Enter a number from 0 to 255: ";
            cin >> blue2;
        }


        redDifference = red1 - red2;
        greenDifference = green1 - green2;
        blueDifference = blue1 - blue2;


        if (redDifference < 0)
        {
            redDifference = redDifference * -1;
        }

        if (greenDifference < 0)
        {
            greenDifference = greenDifference * -1;
        }

        if (blueDifference < 0)
        {
            blueDifference = blueDifference * -1;
        }

        if (redDifference > 100 && greenDifference > 100 && blueDifference < 50)
        {
            cout << "\nThese colors may be difficult to distinguish ";
            cout << "for someone with red-green color blindness.\n";
        }
        else if (redDifference == 0 && greenDifference == 0 && blueDifference == 0)
        {
            cout << "\nThese colors are the same\n";
        }
        else
        {
            cout << "\nThese colors may be easier to distinguish.\n";
        }


        cout << "\nWould you like to test another pair of colors?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "Enter your choice(1/2): ";
        cin >> again;

        while (again != 1 && again != 2)
        {
            cout << "Invalid choice. Enter 1 for Yes or 2 for No: ";
            cin >> again;
        }

        switch (again)
        {
            case 1:
                cout << "\nStarting another test...\n\n";
                break;

            case 2:
                cout << "\nProgram ended.\n";
                break;
        }

    } while (again == 1);

  return 0;
}
