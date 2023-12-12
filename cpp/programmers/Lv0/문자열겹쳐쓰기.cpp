#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";

    int org_len = my_string.size();
    answer = my_string.substr(0, s);    
    answer += overwrite_string;
    answer = answer.substr(0,org_len);

    return answer;
}