#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
   int max_5 = (x - 2 - 1) / 5;
   int max_2 = (x - 5 - 1) / 2;
   int max_1 = (x - 5 - 2) / 1;
    int count;
    int num = 0;
    for(int i = max_5; i >= 1; i--){
        for(int j = max_2; j >= 1; j--){
            for(int k = max_1; k >= 1; k--){
                if(5 * i + 2 * j + k == x){
                    count = i + j + k;
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,count);
                    num ++;
                }
            }
        }
    }
    printf("count = %d",num);
    
    return 0;
}
