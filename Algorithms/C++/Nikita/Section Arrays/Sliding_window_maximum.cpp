#include <iostream>
#include <vector>
#include <deque>
using namespace std;



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> output ;
    deque<int> dq ;  
    if (k==0){
        return {}; 
    } 
    for (int i = 0 ; i<nums.size();i++){
        while (!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
        }
        cout<<endl; 
        while (!dq.empty() && nums[dq.back()]<=nums[i])
            dq.pop_back();
        
        dq.push_back(i);
        if (i>=k-1){
            output.push_back(nums[dq.front()]);
        }
    }
    return output ; 
    }
};




int main(){
    Solution sol;
    auto b = sol.maxSlidingWindow(vector<int>{2, 12, 1, 2, 4, 0, 7, 14, 5, 19},2);
}