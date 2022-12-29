#include "ColPermutation.h"
 
string fileStr = "";
string finalStr = "";
 
void init()//��ʼ��
{
	fileStr = "";
	finalStr = "";
}
 
void show()
{
	cout << "***************���û�����***************" << endl;
	cout << "\t\t1.�����ļ�" << endl;
	cout << "\t\t2.�����ļ�" << endl;
	cout << "\t\t3.�˳�" << endl;
	cout << "******************************************" << endl;
 
}
 
void keyDown()//��������
{
	int userkey = 0;
	cin >> userkey;
	switch (userkey) {
	case 1:
		cout << "-----------------�����ļ�-----------------" << endl;
		readFile();
		encrypt();
		saveFile();
		init();
		break;
	case 2:
		cout << "-----------------�����ļ�-----------------" << endl;
		readFile();
		decrypt();
		saveFile();
		init();
		break;
	case 3:
		exit(0);
		break;
	}
}
 
void readFile()//��ȡ�ļ�
{
	cout << "�������ļ�����" << endl;
	string fileName;
	cin >> fileName;
	FILE* fp = fopen(fileName.c_str(), "r+");
	if (fp == nullptr) {
		cout << "δ�ҵ�����ļ�" << endl;
		return;
	}
	else {
		cout << "�ɹ����ļ�" << endl;
	}
	char ch;
	int pos = 0;
	while ((ch = fgetc(fp)) != EOF) {
		fileStr += ch;
	}
	cout << endl << "��������ļ�Ϊ��" << endl;
	cout << fileStr << endl;
	fclose(fp);
}
 
void saveFile()//�����ļ�
{
	string fileName;
	cout << endl << "������Ҫ������Ϣ���ļ�����" << endl;
	cin >> fileName;
	FILE* fp = fopen(fileName.c_str(), "w+");
	if (fp == nullptr) {
		cout << endl << "�����ļ�ʧ��" << endl;
		return;
	}
	else {
		cout << endl << "����ɹ�" << endl;
	}
	fprintf(fp, "%s", finalStr.c_str());
	fclose(fp);
 
}
 
void encrypt()//�����ļ�
{
	cout << endl << "��������Կ�����̶����Ⱥ����û���" << endl;
	cout << "������̶����ȣ�" << endl;
	int length = 0;
	cin >> length;
 
	int col = fileStr.size() / length + (fileStr.size() % length != 0);//ÿ�еĳ���
 
	cout << "���ľ���Ϊ��" << endl;
	for (int i = 0; i < fileStr.size(); i++) {
		if (i != 0 && i % length == 0)cout << endl;
		cout << fileStr[i] << " ";//���ľ���
	}
	cout << endl;
 
	vector<string> c;//������ĵ�����
	int pos = 0;
	for (int i = 0; i < length; i++) {
		int pos = i;
		string temp = "";
		while (pos < fileStr.size()) {
			temp += fileStr[pos];
			pos += 6;
		}
		if (temp.size() != col)temp += ' ';
		c.push_back(temp);//���д���������
	}
 
 
	int* key = new int[length + 1]();//������û� key[Ŀ����]=Դ��
 
	while (1) {
		cout << "������һ�����û���" << endl;
		string temp = "";
		cin >> temp;//���û��ַ���// 143����56
		//��key
		//(1 4 3)(5 6)
		//key[1]=4  key[2]=2  key[3]=1  key[4]=3  key[5]=6 key[6]=5
		for (int i = 0; i < temp.size(); i++) {
			if (i == temp.size() - 1) {
				key[temp[i] - '0'] = temp[0] - '0';
			}
			else key[temp[i] - '0'] = temp[i + 1] - '0';
		}
		//������������˳�
		char ch = '\0';
		cout << "�Ƿ�����������û���y/n��?" << endl;
		cin >> ch; if (ch == 'n')break;
	}
 
	for (int i = 1; i <= length; i++) {
		if (key[i] == 0) {
			key[i] = i;//���ƶ��������
		}
		//cout << i << " " << key[i] << endl;
	}
 
	cout << endl << "������������м���" << endl;
	char ch = getchar(); ch = getchar();
 
	for (int i = 1; i <= length; i++) {
		finalStr += c[key[i] - 1];
	}	
 
	cout << "���ľ���Ϊ��" << endl;
	for (int i = 0; i < col; i++) {
		for (int j = 1; j <= length; j++) {
			cout << c[key[j] - 1][i] << " ";
		}
		cout << endl;
	}
 
	cout << endl << "�õ�������Ϊ:" << endl;
	cout << finalStr << endl;
}
 
void decrypt()//�����ļ�
{
	cout << endl << "��������Կ�����̶����Ⱥ����û���" << endl;
	cout << "������̶����ȣ�" << endl;
	int length = 0;
	cin >> length;
 
	int col = fileStr.size() / length + (fileStr.size() % length != 0);//ÿ�еĳ���
 
	cout << "���ľ���Ϊ��" << endl;
	for (int i = 0; i < col; i++) {
		int pos = i;
		for (int j = i; j < fileStr.size(); j += col) {
			cout << fileStr[j] << " ";
		}
		cout << endl;
	}
 
	vector<string> antic;//������ĵ�����
	for (int i = 0; i < fileStr.size();) {
		antic.push_back(string(fileStr.begin() + i, fileStr.begin() + i + col));
		i += col;
	}
 
	int* antikey = new int[length + 1]();//������û� key[Ŀ����]=Դ��
 
	while (1) {
		cout << "������һ�����û����������û������û�����" << endl;
		string temp = "";
		cin >> temp;//���û��ַ���// 143��56
		//(1 4 3)(5 6)
		for (int i = 0; i < temp.size(); i++) {
			if (i == 0) {
				antikey[temp[i] - '0'] = temp[temp.size() - 1] - '0';
			}
			else antikey[temp[i] - '0'] = temp[i - 1] - '0';
		}
		//������������˳�
		char ch = '\0';
		cout << "�Ƿ�����������û���y/n��?" << endl;
		cin >> ch; if (ch == 'n')break;
	}
 
 
	cout << "���û������û�Ϊ��" << endl;
 
	for (int i = 1; i <= length; i++) {
		if (antikey[i] == 0) {
			antikey[i] = i;
		}
		//cout << i << " " << antikey[i] << endl;
	}
 
	cout << "�ɹ��õ����û������û���" << endl;
 
	cout << endl << "������������н���" << endl;
	char ch = getchar(); ch = getchar();
 
 
	cout << "���ľ���Ϊ��" << endl;
	for (int i = 0; i < col; i++) {
		for (int j = 1; j <= length; j++) {
			cout << antic[antikey[j] - 1][i] << " ";
			finalStr += antic[antikey[j] - 1][i];//�������������
		}
		cout << endl;
	}
 
 
	cout << endl << "�õ�������Ϊ:" << endl;
	cout << finalStr << endl;
}

#include"ColPermutation.h"
 
int main() {
	while (1) {
		show();		//�˵�����
		keyDown();	//��������
		system("pause");
		system("cls");
	}
}