using namespace std;
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st ; 
        vector<vector<int>> out ; 
        for (int i=0 ; i<nums.size()-1;i++){
            int left = i+1 ; 
            int right = nums.size()-1;
            while (left<right){
                if (nums[i]+nums[left]+nums[right]<0){
                    left++ ; 
                }
                else if (nums[i]+nums[left]+nums[right]>0){
                    right-- ; 
                }
                else{
                    st.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                }
            }
        

        for (auto t:st){
            out.push_back(t);
        }
        return out ; 
    }
};



int main(){
    Solution sol;
    sol.threeSum(vector<int>{-1,0,1,2,-1,-4});
    return 0;
}