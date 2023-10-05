using namespace std;
#include <vector>
#include <iostream> 
#include <algorithm> 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ;
        int right = height.size()-1;
        int maxx = 0 ; 
        while (left<right){
            if (min(height[left],height[right])*(right-left)>maxx){
                maxx = min(height[left],height[right])*(right-left);
                if (height[left]!=height[right]){
                    if (height[left]==min(height[left],height[right])){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
                else{
                    left++;
                    right--;
                }
                
            }
            else{
                if (height[left]==min(height[left],height[right])){
                        left++;
                    }
                    else{
                        right--;
                    }
            }
        }        
    return maxx;
    }
};



int main(){
    Solution sol ; 
    cout << sol.maxArea(vector<int>{5,2,6,2,5,4,8,3,5});
}