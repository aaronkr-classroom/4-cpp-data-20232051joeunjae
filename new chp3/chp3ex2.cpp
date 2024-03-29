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
        cout << "정수 4개 필요" << endl;
        return 1;
    }
    if (num.size() % 4 != 0) {
        cout << "사분위수들을 찾기 위해서는 정수의 개수가 4의 배수여야 합니다." << endl;
        return 1;
    }
    
    sort(num.begin(), num.end());

    for (int i = 0; i < 3; i++) {
        int idx = num.size() / 4 * (i + 1) - 1;
        cout << i + 1 << "번째 사분위 수 : " << num[idx] << endl;
   
    }









return 0;
}
