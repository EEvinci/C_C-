#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <conio.h>
#include <Windows.h>
using namespace std;

string s, x = "";
// character morse code created by array
string a[26] = {".-", "-...", "-.-.", "-..", ".", "..-.",
                "--.", "....", "..", ".---", "-.-", ".-..",
                "--", "-.", "---", ".--.", "--.-", ".-.",
                "...", "-", "..-", "...-", ".--", "-..-",
                "-.--", "--.."};
// number morse code
string b[10] = {"-----", ".----", "..---", "...--", "....-",
                ".....", "-....", "--...", "---..", "----."};

bool f = false;
char c;

/**
 * mobile option bar
 * this part can be abandoned
 */
void gotoxy(int xpos, int ypos);

int main()
{
    int l, xl, q = 0;

    cout << "Morse Programming" << endl
         << "Enter the morse code you want to decrypt" << endl;
    getline(cin, s);

    l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] != '.' && s[i] != '-' && s[i] != '/')
        {
            cout << "´íÎóµÄÄ¦Ë¹µçÂë¡£" << endl;
            return 0;
        }
        else if (s[i] == '/')
        {
            for (int j = 0; j < 26; j++)
            {
                if (x == a[j])
                {
                    printf("%c", j + 'a');
                    f = true;
                    break;
                }
            }
            if (f)
            {
                x = "";
            }
        }
        else
        {
            if (x == "")
            {
                x = s[i];
            }
            else
            {
                x += s[i];
            }
        }
    }

    cout << endl;
//    system("pause");
    return 0;
}

