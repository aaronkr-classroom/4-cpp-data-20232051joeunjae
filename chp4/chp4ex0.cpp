// chp4ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include<vector>

using std::cin;	using std::setprecision; // 실수 숫자 길이 정의
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;
using std::domain_error; using std::istream;

//함수로 호출하면 안수로 제공된 백터를 통째로 복사 ,중앙값을 구함
double median(vector<double>vec) {
	//과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = vec.size();
	if (size == 0) {
		cout << endl << "no grades. try again " << endl;
		return 1;
	}
	//점수를 정렬
	sort(vec.begin(), vec.end());

	//과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;
	double median;
	return size % 2 == 0;
	median = size % 2 == 0 ?
		(vec[mid] + vec[mid - 1]) / 2
		: vec[mid];
}
	//학생의 종합점수를 가함(더함)
	double grade(double mt, double ft, double hw) {
		return 0.2 * mt + 0.4 * ft + 0.4 * hw;
	}
	//학생의 종합점수를 가함 이함수는 인수를 복사하지 않고 median 함수가 해당 작업을 살행
	double grade(double mt, double ft, const vector<double>& hw) {
		if (hw.size() == 0)
			throw domain_error("no homework!");
		return grade(mt, ft, median(hw));
	}
	

	istream& read_hw(istream& in, vector<double>& hw) {
		if (in) {


			hw.clear();

			double x;
			//불변성
			while (in >> x) {

				hw.push_back(x);
			}

			in.clear();

		}
		return in;
	}
	int main(){
		cout << "your name";
		string name;
		cin >> name;
		cout << "hello, " << "!" << endl;

		cout << "midterm &final scoes:";
		double midterm, final;
		cin >> midterm >> final;
		cout << "enter all homework grades "
			"followed by EOF:";
		vector<double> homework;
		read_hw(cin, homework);
		
		
		
		//종합 점수를 계산해 생성
		try {
			double final_grade = grade(midterm, final, homework);
			streamsize prec = cout.precision();
			cout << "final grade" << setprecision(3)
				<< final_grade << setprecision(prec) << endl;
		
		}
		catch (domain_error) {
			cout << endl << "no grades entered. try again" << endl;
			return 1;
		}
		return 0;
} // main 끝
