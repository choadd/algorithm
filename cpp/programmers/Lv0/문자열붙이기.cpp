/*
문제 설명
두 개의 문자열 str1, str2가 공백으로 구분되어 입력으로 주어집니다.
입출력 예와 같이 str1과 str2을 이어서 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ str1, str2의 길이 ≤ 10
*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1 >> str2;

    string str3 = str1 + str2;

    for (char c : str3){
        if(c == ' '){
            c = '\0';
        }
    }

    cout << str3;
    
    return 0;
}