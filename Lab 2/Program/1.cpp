#include<iostream>
using namespace std;
int computeSum(int s,int e){
    // computes and returns the sum of all the integers between "first" and "last" inclusive.
    int sum = 0;
    for (int i = s; i <= e; ++i) {
        sum += i;
    }
    return sum;
}
int smallestIntegerForSum(int goal){
    // computes and returns the smallest positive integer n for which 1+2+3+...+n equals or exceeds the value of "goal".
    int i = 1;
    int sum = 0;
    while (sum < goal) {
        sum += i;
        ++i;
    }
    return i;
}
int computeGcd(int a, int b){
    // computes and returns the greatest common divisor (g.c.d.) of the arguments passed to it.
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
bool checkPrime(int n){
    // Determines whether an integer is prime
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
string englishName(int num) {
    // Prints the English name of an integer from 1 to 9
    switch (num) {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        default:
            return "Invalid input";
    }
}
void _reverse(vector<int>& nums,int s, int e){
    if(s>=e)
        return;
    swap(nums[s++], nums[e--]);
    _reverse(nums, s, e);
}
void reverseArray(vector<int>& nums){
    int s = 0, e = nums.size() - 1;
    _reverse(nums, s, e);
}
int largetIndex(vector<int>& nums){
    int maxIndex = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}
int main(){
    // cout << computeSum(10,11);
    vector<int>nums = {4, 5, 35,100};
    cout << largetIndex(nums);
    return 0;
}