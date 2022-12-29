#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 1e5;

int i, j, l, k, m, num[N];
string key, plantext, plantext2, cipher;
int cnt;
bool flag;

// character morse code created by array
// a and z are stored in order, any one of them plus 'a' can be converted into a character in ascii
string morse_char[26] = {".-", "-...", "-.-.", "-..", ".", "..-.",
                         "--.", "....", "..", ".---", "-.-", ".-..",
                         "--", "-.", "---", ".--.", "--.-", ".-.",
                         "...", "-", "..-", "...-", ".--", "-..-",
                         "-.--", "--.."};

/**
 * compute the inverse number of the affine key, also can be a judgement
 *
 * args:
 *      a:the first affine key that multiplied by the character to be encrypted
 * return:
 *      the inverse number of first affine key
 *      meanwhile, i use it as a judgement, if a and 26 are not relatively prime, then return 0, regard it as false;
 *      or else, return a number which more than 1, it means true
 */
int aff_find_s(int a)
{
    int a_inv = 0;
    for (int i = 1; i < 26; i++)
    {
        if (a * i % 26 == 1)
        {
            a_inv = i;
            break;
        }
    }
    return a_inv;
}

/**
 * the decrypt part of affine cipher
 *
 * args:
 *      a_inv: the inverse number of first affine key
 *      b: the second affine key
 *      cipher: the content that need to be decrypted
 * return:
 *      cipher: the content that be decrypted
 */
string aff_decrypt(int a_inv, int aff_b, string cipher)
{
    for (int i = 0; i < cipher.size(); i++)
    {
        cipher[i] -= 'A';
        cipher[i] = (a_inv * cipher[i] + (26 - a_inv) * aff_b) % 26; // adding 26-a_inv equals -a_inv.
        cipher[i] += 'A';
    }
    return cipher;
}

/**
 *
 */
void decrypt(string key, string plain)
{
    int col; // 密文矩阵的列数
    col = key.length();

    int row; // 密文矩阵的行数
    row = plain.size() / key.size();
    int rem = plain.size() % key.size(); // rem记录空出来几个字符
    // 如果密文长度不是密钥长度的整数倍,那么密文矩阵则要多一行存余出来的字符
    if (rem)
    {
        row += 1;
    }

    int new_key[col][row] = {0}; // 定义密文矩阵, 将密文按照key矩阵中元素数值(即元素索引值)由小到大进行列存放

    // 初始化密文矩阵, 使密钥长度对应的位置值为1, 其余位置值为0, 方便下面做判断
    if (rem)
    {
        for (int i = 0; i < row - 1; i++)
        {
            for (int j = 0; j < col; j++)
            {
                new_key[i][j] = 1;
            }
        }
        // 有余数,最后一行有空位置,把字符所在的位置置为1,其他位置仍然为0,表示这个地方不放key的字符
        for (int i = 0; i < rem; i++)
        {
            new_key[row][i] = 1;
        }
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                new_key[i][j] = 1;
            }
        }
    }

    // 输入的key可能是数字也可能是字母
    // 将他们都转化为ASCII码值以比较大小
    // 数字减去'0'
    // 小写字母减去'a'
    // 大写字母减去'A'
    for (int i = 0; i < key.length(); i++)
    {
        if (key[i] >= '0' && key[i] <= '9')
        {
            key[i] -= '0';
        }
        else if (key[i] >= 'a' && key[i] <= 'z')
        {
            key[i] -= 'a';
        }
        else if (key[i] >= 'A' && key[i] <= 'Z')
        {
            key[i] -= 'A';
        }
    }

    // 创建密钥排序数组
    vector<int> v(key.size(), 0);
    int count = 0;

    // 依照密钥中的各个字符的ASCII码值构建新的一维矩阵V以记录key中字符的大小顺序
    // 等价于将key中的各个字符整体减去一个数值,v中的元素数值本身就是其索引也是key相对应位置数值的排序值
    for (int i = 0; i < key.size(); i++)
    {
        for (int j = 0; j < key.size(); j++)
        {
            if (key[i] > key[j])
            {
                count++;
            }
        }
        v[i] = count;
        count = 0;
    }

    // 输出密文矩阵
    // cout << plain[i] << " ";

    int plain_len = plain.length();
    int plain_cnt = 0;
    int minPosition;

    // 将密文按照数值大小排序从小到大的顺序进行从上至下的填放
    // 需要考虑基于key长度,密文矩阵最后一行有些位置应是空元素所以不能存放
    for (int k = 0; k < v.size(); k++)
    {
        // 找到v数组中的最小下标
        minPosition = min_element(v.begin(), v.end()) - v.begin(); // TQ: every episode will remove the last min ,and find the new min

        // 对密文矩阵的行进行遍历
        for (int i = 0; i < row; i++)
        {
            // 将密文进行遍历以依次存放到密文矩阵中
            for (int j = 0; j < plain_len; j++) 
            {
                if (new_key[row-1][minPosition]) // the value in last row's some place is equal to 1, can be stored
                {
                    new_key[i][j] = key[i]; //
                }
            }
        }
        // in this place, shoule remove the value in minPosition, based on the specificity of v, so just drop the value of minPosition
        // so how to drop a specified value in vector
        minPosition += 1;
    }

    // if (i % key.size() == key.size() - 1)
    // {
    // 	cout << "\n";
    // }

    cout << "ILOVEZUCC";
}

int main()
{
    string morse_val, x = "";
    int morse_len;
    string morse_res;

    bool f = false; // flag

    cout << "Morse Programming" << endl
         << "Please enter a morse code:";
    getline(cin, morse_val);

    morse_len = morse_val.size();

    // the first level decryption
    for (int i = 0; i < morse_len; i++)
    {
        // judge whether the morse code is legal
        if (morse_val[i] != '.' && morse_val[i] != '-' && morse_val[i] != '/')
        {
            cout << "error morse code" << endl;
            system("pause");

            return -1;
        }
        // it means x is a complete character that can be decrypted
        else if (morse_val[i] == '/')
        {
            // tranverse the morse array and find it
            for (int j = 0; j < 26; j++)
            {
                if (x == morse_char[j])
                {
                    morse_res += (j + 'a'); // get the content after decrypt the morse code
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
            // the begin of the morse code -> assignment
            if (x == "")
            {
                x = morse_val[i];
            }
            // the middle part -> surperimpose
            else
            {
                x += morse_val[i];
            }
        }
    }
    int n_len = morse_res.length();
    // based on morse code and consider about the content of affine decrypt, convert it into capital letter
    for (int i = 0; i < n_len; i++)
    {
        morse_res[i] += 'A' - 'a';
    }

    cout << morse_res << endl;
    // system("pause");

    int aff_a, aff_b;    // affine key
    string aff_res;      // the content after decrypting by affine key
    int re_pri_flag = 0; // judgement of relatively prime

    cout << "Please enter the affine key:";
    cin >> aff_a >> aff_b;

    re_pri_flag = aff_find_s(aff_a);
    if (re_pri_flag == 0)
    {
        cout << aff_a << " and 26 are not relatively pirme number" << endl;
        system("pause");

        return -1;
    }

    // the second level decryption
    aff_res = aff_decrypt(re_pri_flag, aff_b, morse_res);
    cout << aff_res << endl;
    // system("pause");

    string col_re_key;

    cout << "Please enter the key of colume permutation:";
    cin >> col_re_key;

    // the third level decryption
    decrypt(col_re_key,aff_res);

    cout << endl;

    system("pause");
    return 0;
}
