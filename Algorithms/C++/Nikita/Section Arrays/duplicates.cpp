using namespace std;
#include <vector>
#include <iostream>
#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> b;
    for (auto elem:nums){
        if (b.count(elem)>0){
            return true;
        }
        b.insert(elem);
    }
    return false;
    }
};



int main(){
    Solution sol ;
    cout << sol.containsDuplicate(vector<int>{1,2,3,1});
}