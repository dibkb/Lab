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
void RightShift(vector<int>& vec, int k) {
    cout << "Array before Right Shift ";
    cout << endl;
    display(vec);
    for(int i=0;i<k;i++){
        vec.pop_back();
        vec.insert(vec.begin(),0);
    }
    cout << "Array after Right Shift ";
    cout << endl;
    display(vec);
}
void _reverseArray(vector<int>& nums,int s, int e){
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
    _reverseArray(vec,0,length-1);
    _reverseArray(vec,0,k-1);  
    _reverseArray(vec,k,length-1);
    cout << "Array After rotate ";
    cout << endl;
    display(vec);
}

int main()
{
    cout << "[i] Display()";
    cout << endl;
    vector<int> myvecOne = {1, 2, 3, 4, 5, 7, 9, 11, 13};
    display(myvecOne);
    cout << endl;
    cout << endl;

    cout << "[ii] Add/Append(x)";
    cout << endl;
    vector<int> myvecTwo = {5, 4, 3, 2, 1};
    append(10, myvecTwo);
    cout << endl;
    cout << endl;

    cout << "[iii] Insert(index, x)";
    cout << endl;
    vector<int> myvecThree = {5, 4, 3, 2, 1};
    insert(3, 99, myvecThree);
    cout << endl;
    cout << endl;

    cout << "[iv] Delete(x)";
    cout << endl;
    vector<int> myvecFour = {5, 4, 3, 2, 1};
    Delete(3, myvecFour);
    cout << endl;
    cout << endl;

    cout << "[v] LinearSearch(x)";
    cout << endl;
    vector<int> myvecFive = {5, 4, 3, 2, 1};
    LinearSearch(4, myvecFive);
    cout << endl;
    cout << endl;

    cout << "[vi] Get(index); function to get value available on the given index";
    cout << endl;
    vector<int> myvecSix = {5, 4, 3, 2, 1};
    Get(2, myvecSix);
    cout << endl;
    cout << endl;

    cout << "[vii] Set(index, x); insert the value x at the given index";
    cout << endl;
    vector<int> myvecSeven = {5, 4, 3, 2, 1};
    Set(3,30, myvecSeven);
    cout << endl;
    cout << endl;

    cout <<"[viii] Max()";
    cout << endl;
    vector<int> myvecEight = {5, 4, 3, 2, 100};
    Max(myvecEight);
    cout << endl;
    cout << endl;

    cout <<"[ix] Min()";
    cout << endl;
    vector<int> myvecNine = {5, 4, 3, 2, 100};
    Min(myvecNine);
    cout << endl;
    cout << endl;

    cout <<"[x] Reverse()";
    cout << endl;
    vector<int> myvecTen = {5, 4, 3, 2, 100};
    Reverse(myvecTen);
    cout << endl;
    cout << endl;

    cout << "[xi] Shift()";
    cout << endl;
    vector<int> myvecEleven = {5, 4, 3, 2, 100};
    RightShift(myvecEleven,3);
    cout << endl;
    cout << endl;

    cout << "[xii] Rotate()";
    cout << endl;
    vector<int> myvecTwelve = {5, 4, 3, 2, 100};
    Rotate(myvecTwelve,2);
    cout << endl;
    cout << endl;
}