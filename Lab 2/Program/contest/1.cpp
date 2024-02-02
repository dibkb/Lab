#include<iostream>
using namespace std;
int res = INT_MAX;
void backtrack(int index, vector<int> nums, vector<int> temp, int cnt)
{
    if(index == nums.size()){
        if(temp.back() == nums.size()-1 && cnt ==3){
            int sum = nums[0];
            for (int i = 0; i < temp.size()-1; ++i){
                // cout << temp[i]<< " ";
                sum += nums[temp[i] + 1];
            }
            res = std::min(res, sum);
            cout<< sum;
        }
        return;
    }
    temp.emplace_back(index);
    backtrack(index + 1, nums, temp, cnt + 1);
    temp.pop_back();
    backtrack(index + 1, nums, temp, cnt);
}
int minimumCost() {
    vector<int> nums = {10,3,1,1};
    backtrack(0,nums, {},0);
    cout << res;
    // return result;
}
int main(){
    minimumCost();

}