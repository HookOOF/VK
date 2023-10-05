#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res =INT_MIN; 
        for (auto elem:nums){
            res = max(res,elem);
        }
        int curMax = 1; 
        int curMin = 1; 
        int tmp;
       for (auto elem:nums){
            if (elem==0){
                curMax = 1; 
                curMin = 1;
                continue;
            }
            tmp = curMax *elem;
            curMax = max({elem,elem*curMax,elem*curMin});
            curMin = min({elem,tmp,elem*curMin});
            res = max(res,curMax);
            



       }
       return res;
    }
};

int main(){
    Solution sol;
    cout << sol.maxProduct(vector<int>{2,-5,-2,1,3});
    cout << int(3/2);
}