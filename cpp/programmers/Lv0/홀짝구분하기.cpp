/*
자연수 n이 입력으로 주어졌을 때 만약 n이 짝수이면 "n is even"을, 홀수이면 "n is odd"를 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ n ≤ 1,000
*/

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    if ( n%2 == 0){
        cout << n << " is even";
    }else{
        cout << n << " is odd";
    }

    return 0;
}