#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.size();
    for(int i = 0; i < len; ++i){
        if(s1[i] < s2[i]){
            cout <<"YES";
            return 0;
        }
        else if(s1[i] > s2[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}