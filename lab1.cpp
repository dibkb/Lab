#include<iostream>
#include <unordered_set>
using namespace std;
void display(vector<int>vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] <<" ";
    }
    cout << endl;
}
void append(int x,vector<int>&vec){
    cout << "Before Appending ";
    for (auto t:vec){
        cout << t << " ";
    }
    cout << endl;
    vec.emplace_back(x);
    cout << "After Appending ";
    for (auto t:vec){
        cout << t << " ";
    }
    cout << endl;
}
void insert(int index,int x,vector<int>&vec){
    cout << "Before inserting ";
    for (auto t:vec){
        cout << t << " ";
    }
    cout << endl;
    if (index <= vec.size())
    {
        vec.insert(vec.begin() + index, x);
    }
    else
    {
        cout << "Invalid index";
    }
    cout << "After inserting ";
    for (auto t:vec){
        cout << t << " ";
    }
    cout << endl;
}
void Delete(int x,vector<int>&vec){
    cout << "Before deleting " <<x;
    cout << endl;
    display(vec);
    int index = -1;
    for (int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] == x)
            index = i;
    }
    vec.erase (vec.begin()+index);
    cout << "After deleting " <<x;
    cout << endl;
    display(vec);
}
void LinearSearch(int x,vector<int>&vec){
    int index = -1;
    for (int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] == x)
            index = i;
    }
    if(index ==-1){
        cout << x << " Not found";
    }
    else
    {
        cout << "Found " << x <<" at index " << index;
    }
}
void Get(int index,vector<int>&vec){
    if(index > vec.size()){
        cout << "index out of bound ";
        return;
    }
    for (int i = 0; i < vec.size(); ++i)
    {
        if(i == index)
            cout << "Element " << vec[index];
    }
}
void Set(int index,int x,vector<int>&vec){
    cout << "Before inserting ";
    cout << endl;
    display(vec);
    if (index <= vec.size())
    {
        vec.insert(vec.begin() + index, x);
    }
    else
    {
        cout << "Invalid index";
    }
    cout << "After inserting ";
    cout << endl;
    display(vec);
}
void Max(vector<int>&vec){
    cout << "Array ";
    cout << endl;
    display(vec);
    int max = INT_MIN;
    for(auto it: vec){
        if(it > max)
            max = it;
    }
    cout << "Max " << max;
}
void Min(vector<int>&vec){
    cout << "Array ";
    cout << endl;
    display(vec);
    int min = INT_MAX;
    for(auto it: vec){
        if(it < min)
            min = it;
    }
    cout << "Min " << min;
}
void Reverse(vector<int>&vec){
    cout << "Array before reversing ";
    cout << endl;
    display(vec);
    int l = 0;
    int h = vec.size()-1;
    while(l<h){
        swap(vec[l],vec[h]);
        l++;
        h--;
    }
    cout << "Array after reversing ";
    cout << endl;
    display(vec);
}
void reverseArray(vector<int>& nums,int s, int e){
    while(s<e){
        swap(nums[s],nums[e]);
        s++;
        e--;
    }
}
void Rotate(vector<int>& vec, int k) {
    cout << "Array before rotate by "<<k;
    cout << endl;
    display(vec);
    int length = vec.size();
    k = k % length;
    reverseArray(vec,0,length-1);
    reverseArray(vec,0,k-1);  
    reverseArray(vec,k,length-1);
    cout << "Array After rotate ";
    cout << endl;
    display(vec);
}
// ---------------------------
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
    // Question 1
    // vector<int> myvecOne = {1, 2, 3, 4, 5,7,9,11,13};
    // display(myvecOne);

    // Question 2
    // vector<int> myvecTwo = {5, 4, 3, 2, 1};
    // append(10, myvecTwo);

    // // Question 3
    // vector<int> myvecThree = {5, 4, 3, 2, 1};
    // insert(3, 99, myvecThree);

    // // Question 4
    // vector<int> myvecFour = {5, 4, 3, 2, 1};
    // Delete(3, myvecFour);

    // // Question 5
    // vector<int> myvecFive = {5, 4, 3, 2, 1};
    // LinearSearch(0, myvecFive);

    // // Question 6
    // vector<int> myvecSix = {5, 4, 3, 2, 1};
    // Get(20, myvecSix);

    // // Question 7
    // vector<int> myvecSeven = {5, 4, 3, 2, 1};
    // Set(3,30, myvecSeven);

    // // Question 8
    // vector<int> myvecEight = {5, 4, 3, 2, 100};
    // Max(myvecEight);

    // Question 9
    // vector<int> myvecNine = {5, 4, 3, 2, 100};
    // Min(myvecNine);

    // Question 10
    // vector<int> myvecTen = {5, 4, 3, 2, 100};
    // Reverse(myvecTen);

    // Question 12
    // vector<int> myvecTwelve = {5, 4, 3, 2, 100};
    // Rotate(myvecTwelve,2);

    // --------------------------------------------
    // Question 1
    // vector<int> nums = {1,2,4,5,6,1};
    // isSorted(nums);

    // Question 2
    // vector<int> numsTwo = {1,2,3,2,1,1};
    // findSingleElement(numsTwo);

    // Question 3
    // vector<int> numsThree = {1,2,3,2,1,1};
    // findMultipleElements(numsThree);

    // Question 4
    // vector<int> numsThree = {1,2,3,2,1,1};
    // twoSum(numsThree,5);

    // Question 5
    // vector<int> numsFour = {11,32,30,2,4,9};
    // findMinMax(numsFour);
}