#include <vector>
#include <iostream>
using namespace std ; 


class Solution {
public:
    vector<int>productExceptSelf(vector<int>& nums) {
    vector<int>out(nums.size(),1);
    int prefix = 1  ;
    for (int i=0;i<nums.size();i++){
        out[i]*=prefix;
        prefix*=nums[i];
    }
    int postfix = 1 ;

    for (int i=(nums.size()-1);i!=-1;i--){
        out[i]*=postfix;
        postfix*=nums[i];
    }
    return out;
    }
};


int main(){
    Solution sol ; 
    vector<int> b = sol.productExceptSelf(vector<int>{1,2,3,4});
    for (int i=0;i<b.size();i++){
        cout<< b[i]<< ' ';
    }
}