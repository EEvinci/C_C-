#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "[1] crisps\n[2] popcorn\n[3] chocolate\n[4] cola\n[0] exit\n";

    for (int i = 1; i <= 5; i++)
    {
        cin >> n;
        switch (n)
        {
        case 0:
            cout << "Thanks";

            system("pause");
            return 0;
        case 1:
            cout << "price = 3.0" << endl;
            break;
        case 2:
            cout << "price = 2.5" << endl;
            break;
        case 3:
            cout << "price = 4.0" << endl;
            break;
        case 4:
            cout << "price = 3.5" << endl;
            break;
        default:
            cout << "price = 0.0" << endl;
            break;
        }
    }

    cout << "Thanks";
    system("pause");
    return 0;
}