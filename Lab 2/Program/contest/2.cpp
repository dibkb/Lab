
#include<iostream>
using namespace std;
    int resCount = 0;
    void backtrack(int index, int n,int k,int target){
        // base case;
        if(index > n) return;
        if(target == 0){
            // for(auto it: temp)
            //     cout << it;
            // cout << endl;
            resCount++;
            return;
        }
        for(int i = 1; i <= k; ++i){
            // cout << " index " << index << " i " << i <<" sum "<<target-i;
            // cout << endl;
            // temp.emplace_back(i);
            backtrack(index + 1,n,k, target - i);
            // temp.pop_back();
        }
    };
int main(){
    backtrack(0,2,6,7);
    cout << resCount;
}