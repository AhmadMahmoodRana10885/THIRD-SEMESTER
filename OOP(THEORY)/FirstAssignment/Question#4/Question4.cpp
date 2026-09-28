#include <iostream>
using namespace std;

class Angle
{
private:
    int degrees;
    float minutes;
    char direction;

    bool isValidDirection(char d) const
    {
        return d == 'N' || d == 'S' ||
               d == 'E' || d == 'W';
    }

public:
    Angle()
    {
        degrees = 0;
        minutes = 0.0;
        direction = 'N';
    }

    Angle(int d, float m, char dir)
    {
        if (d >= 0 && d <= 180 &&
            m >= 0 && m < 60 &&
            isValidDirection(dir))
        {
            degrees = d;
            minutes = m;
            direction = dir;
        }
        else
        {
            degrees = 0;
            minutes = 0.0;
            direction = 'N';
        }
    }
    void input()
    {
        do
        {
            cout << "Enter degrees (0-180): ";
            cin >> degrees;

            if (degrees < 0 || degrees > 180)
            {
                cout << "Invalid degrees! Try again.\n";
            }

        } while (degrees < 0 || degrees > 180);

        do
        {
            cout << "Enter minutes (0-59.99): ";
            cin >> minutes;

            if (minutes < 0 || minutes >= 60)
            {
                cout << "Invalid minutes! Try again.\n";
            }

        } while (minutes < 0 || minutes >= 60);

        do
        {
            cout << "Enter direction (N/S/E/W): ";
            cin >> direction;

            if (!isValidDirection(direction))
            {
                cout << "Invalid direction! Try again.\n";
            }

        } while (!isValidDirection(direction));
    }

    void display() const
    {
        cout << degrees << " degrees "
             << minutes << "' "
             << direction << endl;
    }
};

int main()
{
    Angle latitude;
    Angle longitude;

    cout << "Enter Latitude:" << endl;
    latitude.input();

    cout << "Enter Longitude:"<< endl;
    longitude.input();

    cout << "Stored Coordinates:"<< endl;

    cout << "Latitude: ";
    latitude.display();

    cout << "Longitude: ";
    longitude.display();

    return 0;
}
