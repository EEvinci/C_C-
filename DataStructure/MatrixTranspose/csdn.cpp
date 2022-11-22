#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define MAXSIZE 100

// 定义每一个数据元素
typedef struct
{
	int i, j, data; // 行 列 数值
} triple;
// 定义一个三元组
typedef struct
{
	int m, n, num;			  //  总行数 总列数 总非零数个数
	triple data[MAXSIZE + 1]; //  非零数存入，并记录他们的行列
} tsmatrix;


tsmatrix ChangeNatr(tsmatrix M, tsmatrix T)
{ // M为原矩阵，T为转置矩阵
	//初始化转置矩阵
	T.n = M.m;	   // T的行数 = M的列数
	T.m = M.n;	   // T的列数 = M的行数
	T.num = M.num; //总数不变
	//遍历
	if (T.num)
	{
		int q = 0; //若原矩阵有非零值数次
		int c;	   // 用于储存原三元组的列，即转置三元组的行
		int p;	   // 用于记录非零数是第几个
		for (c = 0; c < M.n; c++)
		{ //从列序为0开始，依次增加
			for (p = 0; p < M.num; p++)
			{ //从第p=0个数开始，遍历原三元组所有非零数
				if (M.data[p].j == c)
				{									 //若这个数列序为c
					T.data[q].i = M.data[p].j;		 //将这个列序c，作为转置三元组第q个数的行序
					T.data[q].j = M.data[p].i;		 //取这个数的行序，作为转置三元组第q个数的列序
					T.data[q].data = M.data[p].data; //取这个数的数据域，作为转置三元组的第q个数
					q++;
				}
			}
		}
	}
	return T;
}

int main()
{
	tsmatrix M, T;						   //原三元组，转置三元组
	scanf("%d %d %d", &M.m, &M.n, &M.num); //初始化原三元组的总行数、总列数、非零总数
	int k = 0;
	while (k != M.num)
	{ //初始化原三元组的非零数（包括他们的行数、列数、数值）
		scanf("%d %d %d", &M.data[k].i, &M.data[k].j, &M.data[k].data);
		k++;
	}

	int k1;
	T = ChangeNatr(M, T); //初始化转置三元组

	// 将三元组表示的矩阵中的元素进行输出，默认是行优先
	int a = 0;
	for (a = 0; a < T.num; a++)
	{
		printf("%d %d %d\n", T.data[a].i, T.data[a].j, T.data[a].data);
	}

	system("pause");
	return 0;
}

// 输入3行5列的矩阵
// 三个元素
// 第一行第三行第五行
//