#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    scanf("%d", &choice);
    double price;

    switch (1)
    {
    case 1:
        price = 3.0;
        break;
    case 2:
        price = 2.5;
        break;
    case 3:
        price = 4.0;
        break;
    case 4:
        price = 3.5;
        break;
    default:
        price = 0.0;
        break;
    }
    printf("%f",price);
    
    system("pause");
    return 0;
}