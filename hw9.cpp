#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    int carry = 0;
    for(int i = len - 1; i >= 0; --i){
        s[i] += carry;
        carry = 0;
        if(i > len - 5){
            s[i] += 5;
        }
        if(s[i] > '9'){
                s[i] -= 10;
                carry = 1;
            }    
    }
    if (carry == 1){
        s = "1" + s;
    }
    cout << s;
    return 0;
}