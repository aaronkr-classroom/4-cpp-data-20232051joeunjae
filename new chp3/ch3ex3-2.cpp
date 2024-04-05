#include <iostream>
#include <vector>
#include <unordered_map>// {word: count}

using namespace std;

int main() {
	vector<string> words;
	unordered_map<string, int > wordcount;
	cout << "enter word (ctrl +z to stop): " << endl;
	string word;
	//1. read word (cin)
	while (cin >> word) {
		words.push_back(word);
	}
	

	//2. count words (for)
	for (auto w : words) {//for (i in vec)
		wordcount[w]++;
        
	}

	//3print results
	cout << "word count:" << endl;
	for (auto& pair : wordcount){
		cout << pair.first << ":" << pair.second << endl;


		}


	return 0;
}