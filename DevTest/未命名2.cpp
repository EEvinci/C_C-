#include<iostream>
using namespace std;
int main() {
	int n;
	int count = 0;
	double average = 0;
	double sum = 0;
	int count_all = 0;
	while(1) {
		cin >> n;
		if(n < 0) {
			if(count_all == 0) {
				printf("Average = 0.00");
				return 0;
			} else {
				printf("Average = %.2f\n",average);
				printf("Count = %d",count);
				return 0;
			}
		} else if(n < 60)
			count ++;
		sum += n;
		count_all ++;
		average = sum / count_all;
	}


	return n;
}
