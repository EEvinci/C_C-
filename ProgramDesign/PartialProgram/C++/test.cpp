#include <iostream>
using namespace std;
int main()
{
    // char op;
    // int value1;
    // int value2;
    // cin >> value1 >> value2;
    // printf("%d",op); // * is 42 and the 43 is +
    // printf("%c",op+1);

    // switch(value1+value2){
    //    default: printf("Error\n"); break;
    //    case 2+1: printf("i am the one\n"); break;
    //    case 3+1: printf("i am the two"); break;
    // }

    // char gameover;
    // int player;
    // gameover = getchar();
    // scanf("%d", &player);
    // if (gameover == 'N') // if-else语句可以当成一条复合语句
    //     if (player == 1)
    //         printf("My turn");
    //     else
    //         printf("Your turn");
    // else
    //     printf("GAME OVER");

    // the confusion of if
    // int n;
    // cin >> n;
    // int m;
    // cin >> m;
    // //judge completed if by else number
    // if (n < 6)
    //     if (m < 4)
    //         cout << "i am in the second if" << endl;
    //     else if (m < 2)
    //         cout << "i am in the third if" << endl;
    //     else
    //         cout << "i don't kown where i am";
    // else
    //     printf("where i am");

    int n;
    cin >> n;
    double result = 0;
    double index = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            index *= j;
        }
        result += index;
        index = 1;
    }
    printf("%.0f", result);

    system("pause");
    return 0;
}