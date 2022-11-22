#include<iostream>
#include<cmath>

using namespace std;
bool is_sushu(int n) {
	if(n <= 0 || n == 1)
		return false;
	else {
		for(int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0)
				return false;
		}
	}
	return true;
}

int main() {
	int n;
	scanf("%d",&n);

	int flag=0;
	if(n % 2 == 0) {
		for(int i = 2; i <= n; i++) {
			if(is_sushu(i)&&is_sushu(n-i)) {
				printf("%d = %d + %d",n,i,n-i);
				break;
			}
		}

	}
	return 0;

}


