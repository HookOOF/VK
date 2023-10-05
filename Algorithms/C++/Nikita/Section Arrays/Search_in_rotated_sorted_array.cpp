#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (nums[mid]==target){
                return mid;
            }
            if (nums[mid]>=nums[l]){
                if ((target<nums[l])|| (target>nums[mid])){
                    l =  mid +1 ;
                }
                else{
                    r =  mid -1 ;
                }
            }
            else{
                if ((target<nums[mid])|| (target>nums[r])){
                    r= mid - 1; 
                }
                else{
                    l = mid +1 ;
                }
            }
        }
        return -1;
    }
};




int main(){
    Solution sol ; 
    cout <<sol.search(vector<int>{4,5,6,7,0,1,2},0);
}