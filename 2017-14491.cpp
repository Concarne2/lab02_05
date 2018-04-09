#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num;
	vector<int> intList;
	while (cin >>  num) {
		if (num == EOF)
			break;
		intList.push_back(num);
	}
//	for (auto i : intList) 
	//	cout << i << " ";
	
	cout <<endl<<"ordered array"<<endl;
	sort(intList.rbegin(), intList.rend());
	for (auto i : intList) 
		cout << i << " ";
	
	cout << endl;
	return 0;
}