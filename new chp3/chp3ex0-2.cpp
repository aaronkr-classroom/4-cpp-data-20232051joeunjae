//chp3ex0.cpp
//�߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ������ ����ϱ�
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
	//�л��� �̸� ���� �Է��ϱ�
	cout << "you name: ";
	string name;
	cin >> name;
	cout << "helllo, " << name << "!" << endl;

	//�߰����� �⸻ ��� ������ ���� �ޱ�

	cout << "�߰��⸻ ������ �Է��ϼ���: ";
	double midterm, final;
	cin >> midterm >> final;
	//���� ������ ����
	cout << "enter all homework grades"
		"followed by eof:";
	
	vector<double>homework;
	//�Է��� ���� ����
	double x; //cin���� ���
	//�Һ���: ���ݱ��� count���� ������ �޾����� �Է¹��� ������ ���� sum
	while (cin >> x) {
		homework.push_back(x);

	}
	//���� ������ �Է� ������ Ȯ��
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "no grades. try again " << endl;
		return 1;
	}
	//������ ����
	sort(homework.begin(), homework.end());
	
	//���� ������ �߾Ӱ��� ����
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0;
	(homework[mid] + homework[mid - 1]) / 2;


	//����� ���
	streamsize prec = cout.precision();
	cout << "final grade" << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;







	return 0;
}