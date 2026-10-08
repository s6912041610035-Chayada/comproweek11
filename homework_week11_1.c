#include <iostream>
using namespace std;

void inputAndShow()
{
    int Math,Physics,Chemistry;

    cout << "Enter Math score:";
    cin >> Math;

    cout << "Enter Physics score:";
    cin >> Physics;

    cout << "Enter Chemistry score:";
    cin >> Chemistry;

    cout << "\nScores\n";
    cout << "Math:" << Math << endl;
    cout << "Physics:" << Physics << endl;
    cout << "Chemistry:" << Chemistry << endl;
}

int main() 
{
    inputAndShow();

    return 0;
}