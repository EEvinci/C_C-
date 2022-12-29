#include "ColPermutation.h"
 
string fileStr = "";
string finalStr = "";
 
void init()//初始化
{
	fileStr = "";
	finalStr = "";
}
 
void show()
{
	cout << "***************列置换密码***************" << endl;
	cout << "\t\t1.加密文件" << endl;
	cout << "\t\t2.解密文件" << endl;
	cout << "\t\t3.退出" << endl;
	cout << "******************************************" << endl;
 
}
 
void keyDown()//按键处理
{
	int userkey = 0;
	cin >> userkey;
	switch (userkey) {
	case 1:
		cout << "-----------------加密文件-----------------" << endl;
		readFile();
		encrypt();
		saveFile();
		init();
		break;
	case 2:
		cout << "-----------------解密文件-----------------" << endl;
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
 
void readFile()//读取文件
{
	cout << "请输入文件名：" << endl;
	string fileName;
	cin >> fileName;
	FILE* fp = fopen(fileName.c_str(), "r+");
	if (fp == nullptr) {
		cout << "未找到相关文件" << endl;
		return;
	}
	else {
		cout << "成功打开文件" << endl;
	}
	char ch;
	int pos = 0;
	while ((ch = fgetc(fp)) != EOF) {
		fileStr += ch;
	}
	cout << endl << "待处理的文件为：" << endl;
	cout << fileStr << endl;
	fclose(fp);
}
 
void saveFile()//保存文件
{
	string fileName;
	cout << endl << "请输入要保存信息的文件名：" << endl;
	cin >> fileName;
	FILE* fp = fopen(fileName.c_str(), "w+");
	if (fp == nullptr) {
		cout << endl << "保存文件失败" << endl;
		return;
	}
	else {
		cout << endl << "保存成功" << endl;
	}
	fprintf(fp, "%s", finalStr.c_str());
	fclose(fp);
 
}
 
void encrypt()//加密文件
{
	cout << endl << "请输入密钥：（固定长度和列置换）" << endl;
	cout << "请输入固定长度：" << endl;
	int length = 0;
	cin >> length;
 
	int col = fileStr.size() / length + (fileStr.size() % length != 0);//每列的长度
 
	cout << "明文矩阵为：" << endl;
	for (int i = 0; i < fileStr.size(); i++) {
		if (i != 0 && i % length == 0)cout << endl;
		cout << fileStr[i] << " ";//明文矩阵
	}
	cout << endl;
 
	vector<string> c;//存放明文的数组
	int pos = 0;
	for (int i = 0; i < length; i++) {
		int pos = i;
		string temp = "";
		while (pos < fileStr.size()) {
			temp += fileStr[pos];
			pos += 6;
		}
		if (temp.size() != col)temp += ' ';
		c.push_back(temp);//按列存入数组中
	}
 
 
	int* key = new int[length + 1]();//存放列置换 key[目标列]=源列
 
	while (1) {
		cout << "请输入一组列置换：" << endl;
		string temp = "";
		cin >> temp;//列置换字符串// 143或者56
		//求key
		//(1 4 3)(5 6)
		//key[1]=4  key[2]=2  key[3]=1  key[4]=3  key[5]=6 key[6]=5
		for (int i = 0; i < temp.size(); i++) {
			if (i == temp.size() - 1) {
				key[temp[i] - '0'] = temp[0] - '0';
			}
			else key[temp[i] - '0'] = temp[i + 1] - '0';
		}
		//继续输出还是退出
		char ch = '\0';
		cout << "是否继续输入列置换（y/n）?" << endl;
		cin >> ch; if (ch == 'n')break;
	}
 
	for (int i = 1; i <= length; i++) {
		if (key[i] == 0) {
			key[i] = i;//不移动的列序号
		}
		//cout << i << " " << key[i] << endl;
	}
 
	cout << endl << "按下任意键进行加密" << endl;
	char ch = getchar(); ch = getchar();
 
	for (int i = 1; i <= length; i++) {
		finalStr += c[key[i] - 1];
	}	
 
	cout << "密文矩阵为：" << endl;
	for (int i = 0; i < col; i++) {
		for (int j = 1; j <= length; j++) {
			cout << c[key[j] - 1][i] << " ";
		}
		cout << endl;
	}
 
	cout << endl << "得到的密文为:" << endl;
	cout << finalStr << endl;
}
 
void decrypt()//解密文件
{
	cout << endl << "请输入密钥：（固定长度和列置换）" << endl;
	cout << "请输入固定长度：" << endl;
	int length = 0;
	cin >> length;
 
	int col = fileStr.size() / length + (fileStr.size() % length != 0);//每列的长度
 
	cout << "密文矩阵为：" << endl;
	for (int i = 0; i < col; i++) {
		int pos = i;
		for (int j = i; j < fileStr.size(); j += col) {
			cout << fileStr[j] << " ";
		}
		cout << endl;
	}
 
	vector<string> antic;//存放密文的数组
	for (int i = 0; i < fileStr.size();) {
		antic.push_back(string(fileStr.begin() + i, fileStr.begin() + i + col));
		i += col;
	}
 
	int* antikey = new int[length + 1]();//存放列置换 key[目标列]=源列
 
	while (1) {
		cout << "请输入一组列置换（不是列置换的逆置换）：" << endl;
		string temp = "";
		cin >> temp;//列置换字符串// 143和56
		//(1 4 3)(5 6)
		for (int i = 0; i < temp.size(); i++) {
			if (i == 0) {
				antikey[temp[i] - '0'] = temp[temp.size() - 1] - '0';
			}
			else antikey[temp[i] - '0'] = temp[i - 1] - '0';
		}
		//继续输出还是退出
		char ch = '\0';
		cout << "是否继续输入列置换（y/n）?" << endl;
		cin >> ch; if (ch == 'n')break;
	}
 
 
	cout << "列置换的逆置换为：" << endl;
 
	for (int i = 1; i <= length; i++) {
		if (antikey[i] == 0) {
			antikey[i] = i;
		}
		//cout << i << " " << antikey[i] << endl;
	}
 
	cout << "成功得到列置换的逆置换！" << endl;
 
	cout << endl << "按下任意键进行解密" << endl;
	char ch = getchar(); ch = getchar();
 
 
	cout << "明文矩阵为：" << endl;
	for (int i = 0; i < col; i++) {
		for (int j = 1; j <= length; j++) {
			cout << antic[antikey[j] - 1][i] << " ";
			finalStr += antic[antikey[j] - 1][i];//按行输出的明文
		}
		cout << endl;
	}
 
 
	cout << endl << "得到的明文为:" << endl;
	cout << finalStr << endl;
}

#include"ColPermutation.h"
 
int main() {
	while (1) {
		show();		//菜单界面
		keyDown();	//按键处理
		system("pause");
		system("cls");
	}
}