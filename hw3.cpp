#include<iostream>
using namespace std;
int main(){
    string word, subword;
    cin >> word >> subword;
    bool is_substring = false;
    int len = word.size(), sublen = subword.size();
    for(int i = 0; i < len - sublen + 1; ++i){
        if(word[i] == subword[0]){
            is_substring = true;
            int _i = i + 1;
            for(int j = 1; j < sublen; ++j, _i++){
                if(subword[j] != word[_i]){
                    is_substring = false;
                    break;
                }
            }
            if(is_substring){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}