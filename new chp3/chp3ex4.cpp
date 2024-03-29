//chp3ex4
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::string;
using std::endl; using std::vector;

int main() {

	cout << "문자를 입력하세요" << endl;
	vector<string>words;
	string word;
	string max = "";
	string min = "";
	while (cin >> word) {
		words.push_back(word); {
			if (min.size() == 0)
				min = word;
		}
		if (min.size() == 0) {
			max = word;
		}
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size())max = word;
	}

	cout << "max" << max << endl;
	cout << " min" << min << endl;
		return 0;
}
