#include <bits/stdc++.h>
using namespace std;

void decrypt(string key, string plain)
{
	int col; // ���ľ��������
	col = key.length();

	int row; // ���ľ��������
	row = plain.size() / key.size();
	int rem = plain.size() % key.size(); // rem��¼�ճ��������ַ�
	// ������ĳ��Ȳ�����Կ���ȵ�������,��ô���ľ�����Ҫ��һ�д���������ַ�
	if (rem)
	{
		row += 1;
	}

	int new_key[col][row] = {0}; // �������ľ���, �����İ���key������Ԫ����ֵ(��Ԫ������ֵ)��С��������д��
	// ��ʼ�����ľ���, ʹ��Կ���ȶ�Ӧ��λ��ֵΪ1, ����λ��ֵΪ0, �����������ж�
	if (rem)
	{
		for (int i = 0; i < row - 1; i++)
		{
			for (int j = 0; j < col; j++)
			{
				new_key[i][j] = 1;
			}
		}
		// ������,���һ���п�λ��,���ַ����ڵ�λ����Ϊ1,����λ����ȻΪ0,��ʾ����ط�����key���ַ�
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

	// �����key����������Ҳ��������ĸ
	// �����Ƕ�ת��ΪASCII��ֵ�ԱȽϴ�С
	// ���ּ�ȥ'0'
	// Сд��ĸ��ȥ'a'
	// ��д��ĸ��ȥ'A'
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

	// ������Կ��������
	vector<int> v(key.size(), 0);
	int count = 0;
	// ����
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

	// ������ľ���
	// cout << plain[i] << " ";
	int plain_len = plain.length();
	int plain_cnt = 0;
	int minPosition;

	for (int k = 0; k < v.size(); k++)
	{
		minPosition = min_element(v.begin(), v.end()) - v.begin(); // �ҵ�v�����е���Сֵ�±�
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

	cout << "\n��ԭ��:" << endl;
	string temp = plain;
	for (int i = 0; i < key.size(); i++)
	{
		for (int k = 0; k <= row; k++)
		{
			plain[v[i] + k * key.size()] = temp[i + k * key.size()];
		}
	}
	for (int i = 0; i < plain.size(); i++) //����п�Ϊ��Կ���ȵľ���
	{
		cout << plain[i] << " ";
		if (i % key.size() == key.size() - 1)
		{
			cout << "\n";
		}
	}
	cout << endl;

	cout << "���ģ�" << plain << endl;
}

int main()
{

	string key, plain;
	cout << "����������:\n";
	cin >> plain;
	cout << "��������Կ:\n";
	cin >> key;

	decrypt(key, plain); //����

	system("pause");
	return 0;
}
