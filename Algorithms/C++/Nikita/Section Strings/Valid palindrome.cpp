#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        s = fixedString(s);
        int left = 0 ;
        int right = s.size()-1;
        while (left<right){
            if (s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string fixedString(string s){
        string temp="";
        for (auto x:s){
            if ((97<=x) && (x<=122) || (48<=x) && (x<=57)){
                temp+=x;
            }
            else if ((65<=x) && (x<=90))
            {
               temp+=(x+32); 
            }
        }
        return temp;
    }
};



int main(){
    Solution sol ;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama");
}