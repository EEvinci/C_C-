// 函数get_nextval(char T[], int nextval[])是计算字符串T的next数组
// 函数Index_KMP(char S[], char T[], int pos, int next[])是KMP算法

// 中 T 是模式串，S是主串，next是next数组

// 输入样例：
// 第一行输入主串，第二行输入模式串：
// abdsegdsagddfddfedfgds
// egdsa

// 输出样例：
// 输出子串在主串中第p个位置后首次出现的位序：
// 5

#include <cstring>
#include <iostream>

using namespace std;

#define MAXSTRLEN 255

void get_nextval(char T[], int next[]);
int Index_KMP(char S[], char T[], int pos, int next[]);

int main()
{
    char S[MAXSTRLEN + 1], T[MAXSTRLEN + 1];
    char S1[MAXSTRLEN], S2[MAXSTRLEN];

    cin >> S1 >> S2;

    //S为主串，T为子串
    //字符串从第一个字符位置开始复制，即第一个元素的下标为1
    strcpy(&S[1], S1);
    strcpy(&T[1], S2);

    //第一个字符记录串的长度
    S[0] = strlen(S1);
    T[0] = strlen(S2);

    int *next = new int[T[0] + 1];

    get_nextval(T, next);
    cout << Index_KMP(S, T, 1, next);

    system("pause");
    return 0;
}



// next-value is called nextval for shorted
void get_nextval(char T[], int next[])
{
    /* 
    index from 1

    we don not need to consider the parent string if we just want to get next-array
    because next-array only depend on sub-string 

    so neither the variable i nor j has anything to do with the parent string
    only about sub-string

    */ 

    int j = 1;  
    int k = 0;  
    next[1] = 0;

    while (j < T[0])
    {
        if (k == 0 || T[j] == T[k])
        {
            j++;
            k++;
            if (T[j] == T[k])
                next[j] = next[k];
            else
                next[j] = k;
        }
        else
            k = next[k];
    }

    // printf("%s\n",T);
}



int Index_KMP(char S[], char T[], int pos, int next[])
{
    int i = pos, j = 1;
    while (i <= S[0] && j <= T[0])
    {
        if (j == 0 || S[i] == T[j])
        {
            i++;
            j++;
        }
        else
            j = next[j];
    }
    if (j > T[0])
        return i - T[0];
    else
        return 0;
}