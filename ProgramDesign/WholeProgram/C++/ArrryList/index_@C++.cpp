#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] = {1, 3, 5, 7, 9};
	int target = 7;

    // find(begin(arr), end(arr), target)  return iter
	auto it = find(begin(arr), end(arr), target);

	if (it != end(arr)) {
		int index = distance(arr, it);
		cout << "Element found at index " << index << endl;
	} else {
		cout << "Element not found" << endl;
	}

	return 0;
}