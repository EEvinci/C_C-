#include <bits/stdc++.h>
using namespace std;

char op[80];

int main()
{
    int i = 0;
    while ((op[i] = getchar()) != '\n')
    {
        i++;
    }
    op[i] = '\0';

    int count = 0;
    for (int i = 0; op[i] != '\0'; i++)
    {
        // judgement of uppercase letters
        // how to judge
        // a letter can be subtracted 26 and it is stil be a letter
        // but how to judge if one letter is a lowercase letter
        // all can judged by one's value of ascii
        // the essence of character comparison is the compriasion of ascii code values
        if (op[i] <= 'Z' && op[i] >= 'A')
        {
            {
                // judgement of special letters
                if (op[i] != 'A' && op[i] != 'E' && op[i] != 'I' && op[i] != 'O' && op[i] != 'U')
                // the statement can be executed as long as one condition is met 
                // if(op[i] != 'A' || op[i] != 'E' || op[i] != 'I' || op[i] != 'O' || op[i] != 'U')
                    count ++;
            }
        }
    }
    cout << count;

    system("pause");
    return 0;
}