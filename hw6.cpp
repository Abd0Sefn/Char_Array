#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    cout << s[0];
    for(int i = 1; i < len; ++i){
        if(i != 0 && s[i] != s[i - 1])
            cout << " ";
        cout << s[i];
    }
    return 0;
}