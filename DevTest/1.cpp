#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double eps;
	cin >> eps;
	double sum = 0;

	int flag = 1;
	int den = 1;
	double temp = 1.0 * flag / den;
	while(fabs(temp) >= eps) {
		sum += temp;
		den += 2;
		flag = -flag;
		temp = flag * 1.0 / den;
	}
	sum += temp; // ���һ��Ҫ���� 
	
	sum *= 4;
	printf("Pi = %.4f",sum);

	system("pause");
	return 0;
}
