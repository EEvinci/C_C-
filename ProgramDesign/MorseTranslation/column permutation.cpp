#include <bits/stdc++.h>
using namespace std;

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
	// 依照
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

	for (int k = 0; k < v.size(); k++)
	{
		minPosition = min_element(v.begin(), v.end()) - v.begin(); // 找到v数组中的最小值下标
		for (int i = 0; i < row; i++)
		{
			if (new_key[i][minPosition])
			{
			}
		}
		minPosition += 1;
	}

	// if (i % key.size() == key.size() - 1)
	// {
	// 	cout << "\n";
	// }

	cout << "\n还原后:" << endl;
	string temp = plain;
	for (int i = 0; i < key.size(); i++)
	{
		for (int k = 0; k <= row; k++)
		{
			plain[v[i] + k * key.size()] = temp[i + k * key.size()];
		}
	}
	for (int i = 0; i < plain.size(); i++) //输出列宽为密钥长度的矩阵
	{
		cout << plain[i] << " ";
		if (i % key.size() == key.size() - 1)
		{
			cout << "\n";
		}
	}
	cout << endl;

	cout << "明文：" << plain << endl;
}

int main()
{

	string key, plain;
	cout << "请输入密文:\n";
	cin >> plain;
	cout << "请输入密钥:\n";
	cin >> key;

	decrypt(key, plain); //解密

	system("pause");
	return 0;
}
