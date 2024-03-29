//chp3ex3
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::string;
using std::endl; using std::vector;

int main() {
	
	cout << "문자를 입력하세요" << endl;
	vector<string>words;
	string x;

	while (cin >> x) {
			
			words.push_back(x);
	}
	cout << "word:" << words.size();

	return 0;
}