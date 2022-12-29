#include <iostream>
using namespace std;

// 通过暴力穷举找到解密密钥
int find_s(int a)
{
    for (int i = 1; i < 26; i++)
    {
        if (a * i % 26 == 1)
        {
            return i;
        }
    }
}


string decrypt(int a, int b, string cipher)
{
    int s = find_s(a);
    for (int i = 0; i < cipher.size(); i++)
    {
        cipher[i] -= 'A';
        cipher[i] = (s * cipher[i] + (26 - s) * b) % 26; // adding 26-s equals -s.
        cipher[i] += 'a';
    }
    return cipher;
}
int main()
{
    int a = 7, b = 5; // the key
    string m;
    cout << "Please enter the message:" << endl;
    cin >> m;
    
    string result;
    result = decrypt(a, b, m);
    cout << "After decryption " << result << endl;

    system("pause");
    return 0;
}
