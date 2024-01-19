#include<iostream>
#include <unordered_set>
using namespace std;
// ---------------------------
void display(vector<int>vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] <<" ";
    }
    cout << endl;
}
void isSorted(vector<int>& vec) {
    cout << "Array ";
    cout << endl;
    display(vec);
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            cout << "Not sorted";
            return;
        }
    }
    cout <<"Sorted ";
}
void findSingleElement(vector<int>& nums) {
    cout << "Array ";
    cout << endl;
    display(nums);
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    cout << "Single element " << result;
}
void findMultipleElements (vector<int>&nums) {
    unordered_set<int> seen;
    vector<int> duplicates;
    cout << "Array ";
    cout << endl;
    display(nums);
    for (int num : nums) {
        // If the element is already in the set, it's a duplicate
        if (seen.find(num) != seen.end()) {
            duplicates.push_back(num);
        } else {
            seen.insert(num);
        }
    }
    cout << "Duplicates ";
    cout << endl;
    display(duplicates);
}
void twoSum(vector<int>& nums, int target) {
    cout << "Array ";
    cout << endl;
    display(nums);
    unordered_map<int,int> mpp;
    for(int i = 0; i < nums.size();++i){
        int left = target - nums[i];
        auto it = mpp.find(nums[i]);
        if(it != mpp.end()){
            cout << "Elements " << nums[it->second] <<" "<< nums[i];
            return;
        }
        else
        {
            mpp[left] = i;
        }
    }
    cout << "Elements not found";
}
void findMinMax(vector<int>&nums){
    cout << "Array ";
    cout << endl;
    display(nums);
    int min = INT_MAX;
    int max = INT_MIN;
    for(auto it : nums){
        if(it > max)
            max = it;
        if(it < min)
            min = it;
    }
    cout << "Minimum " << min <<endl;
    cout << "Maximum " << max <<endl;
}
int main()
{

    // --------------------------------------------
    cout << "[i] Check if an array is sorted";
    cout << endl;
    vector<int> nums = {1,2,4,5,6,1};
    isSorted(nums);
    cout << endl;
    vector<int> numsOne = {1,2,4,5,6};
    isSorted(numsOne);
    cout << endl;
    cout << endl;

    cout << "[ii] Finding single element in an array";
    cout << endl;
    vector<int> numsTwo = {1,2,3,2,1};
    findSingleElement(numsTwo);
    cout << endl;
    cout << endl;

    cout << "[iii] Finding multiple elements in an array";
    cout << endl;
    vector<int> numsThree = {1,2,3,2,1,1};
    findMultipleElements(numsThree);
    cout << endl;
    cout << endl;

    cout << "[iv] Finding a pair of elements with sum k ";
    vector<int> numsFour = {1,2,3,2,1,1};
    twoSum(numsFour,5);
    cout << endl;
    cout << endl;

    cout << "[v] Finding max and min in a single scan; here you should use only single loop to perform both the operations";
    vector<int> numsFive = {11,32,30,2,4,9};
    findMinMax(numsFive);
}