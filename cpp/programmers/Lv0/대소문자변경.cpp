#include <iostream>
#include <string>

using namespace std;

/*
    영어 알파벳으로 이루어진 문자열 str이 주어집니다. 
    각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 출력하는 코드를 작성해 보세요.

    tip : a = 65, A = 97
*/

int main(void){
    string str;
    cin >> str;

    for (auto i : str)
    {
        if ( 'a' <= i && i <= 'z')
            i -= 'a' - 'A';
        else   
            i += 'a' - 'A';
        cout << i;
    }

    return 0;
}