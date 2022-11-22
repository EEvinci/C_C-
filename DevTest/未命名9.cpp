#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = a[n-1];
	int min = a[0];

	int temp_max;
	int temp_min;

	int i = 0;
	int j = n - 1;
	while(i < n && j >= 0) {
		if(max <= a[j]) {
			temp_max = max;
			max = a[j];
			a[j] = temp_max;
		}
		
		// test
		for(int k = 0; k < n; k++) {
			cout << a[k] << " ";
		}
		cout << endl;
		
		if(min >= a[i]) {
			temp_min = min;
			min = a[i];
			a[i] = temp_min;
		}
		// test
		for(int k = 0; k < n; k++) {
			cout << a[k] << " ";
		}
		cout << endl;
		
		
		i++;
		j--;
	}

	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
