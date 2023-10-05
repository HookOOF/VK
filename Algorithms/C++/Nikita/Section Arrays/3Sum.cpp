using namespace std;
#include <string>
#include <iostream>
#include <map>
#include <vector>




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int b = 4; 
        int c = 9;
        int g = 9;
        int e = 9;
        int k[3] = {1,2,3};
        cout << &b <<endl ;
        cout << &c <<endl;
        cout << &g <<endl;
        cout << &e <<endl;
        cout << &k <<endl; 
        

       

        
        return vector<vector<int>> {{}} ; 
    }
};




int main(){
    Solution sol;
    sol.threeSum(vector<int>{-1,0,1,2,-1,-4});
    return 0;
}