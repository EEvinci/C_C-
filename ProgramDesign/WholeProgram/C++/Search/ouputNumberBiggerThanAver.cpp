#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 0 || n > 10)
        cout << "Invalid.";
    else
    {
        int a[n];
        double aver = 0;
        int sum = 0;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        aver = 1.0 * sum / n;
        printf("%.2f\n", aver);

        for (int i = 0; i < n; i++)
        {
            if (a[i] > aver){
                cout << a[i] << " ";
                flag = 1;
            }
        }
        if(flag  == 0)
            cout << endl;
    }

    return 0;
}