#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }
        static constexpr int primes[26] = {2,3, 5, 7, 11, 13, 17, 19,
                            23, 29, 31, 37, 41, 43, 47, 53, 59, 
                        61, 67, 71, 73, 79, 83, 89, 97, 101};
        unsigned long long  unq = 1 ; 
        for (int i=0;i<s.size();i++){
            unq*=primes[s[i]-'a'];
            if (unq>=1e9){
                unq%=10000000007;
            }
        }
        unsigned long long  unq1 = 1 ; 
        for (int i=0;i<s.size();i++){
            unq1*=primes[t[i]-'a'];
            if (unq1>=1e9){
                unq1%=1000000000;
            }
        }
        return unq==unq1? true:false; 
    }
};



int main(){
    Solution sol; 
    cout << sol.isAnagram("dgqztusjuu","dqugjzutsu") ; 
}
