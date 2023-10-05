#include <vector>
#include <iostream>
using namespace std ; 



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=nums[0];
        int temp = 0 ; 
        
        for (int i=0;i<nums.size();i++){
            if (temp<0){
                temp=0 ;
            }
            temp+=nums[i];
            maxx = max(temp,maxx);

            
        }
        return maxx ;
    }
};




int main(){
    Solution sol;
    cout << sol.maxSubArray(vector<int>{-2,-3,-1});
}