#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int num{}, digit{};
    for(int i = 0; i < s.size(); ++i){
        digit = s[i] - '0';
        num = 10 * num + digit;
    }
    cout << num << " " << 3 * num;
    return 0;
}