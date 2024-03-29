//chp3ex0.cpp
//중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 결과 점수를 계산하기
#include <algorithm>
#include <ios> //streamsize
#include <iomanip> //setprecision
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main() {
	//학생의 이름 묻고 입력하기
	cout << "you name: ";
	string name;
	cin >> name;
	cout << "helllo, " << name << "!" << endl;

	//중간고사와 기말 고사 점수를 묻고 받기

	cout << "중간기말 점수를 입력하세요: ";
	double midterm, final;
	cin >> midterm >> final;
	//과제 점수를 물음
	cout << "enter all homework grades"
		"followed by eof:";
	
	vector<double>homework;
	//입력을 위한 변수
	double x; //cin에서 사용
	//불변성: 지금까지 count개의 점수를 받았으면 입력받은 점수의 합은 sum
	while (cin >> x) {
		homework.push_back(x);

	}
	//과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "no grades. try again " << endl;
		return 1;
	}
	//점수를 정렬
	sort(homework.begin(), homework.end());
	
	//과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0;
	(homework[mid] + homework[mid - 1]) / 2;


	//결과를 출력
	streamsize prec = cout.precision();
	cout << "final grade" << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;







	return 0;
}