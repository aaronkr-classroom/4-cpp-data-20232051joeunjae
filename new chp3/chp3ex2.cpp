//chp3ex2
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin;
using std::endl; using std::vector;
int main(){
    vector<int> num;
    int x;

    while (cin >> x) {
        num.push_back(x);
    }
    if (num.size() < 4)
    {
        cout << "���� 4�� �ʿ�" << endl;
        return 1;
    }
    if (num.size() % 4 != 0) {
        cout << "����������� ã�� ���ؼ��� ������ ������ 4�� ������� �մϴ�." << endl;
        return 1;
    }
    
    sort(num.begin(), num.end());

    for (int i = 0; i < 3; i++) {
        int idx = num.size() / 4 * (i + 1) - 1;
        cout << i + 1 << "��° ����� �� : " << num[idx] << endl;
   
    }









return 0;
}
