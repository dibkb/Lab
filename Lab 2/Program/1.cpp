#include<iostream>
using namespace std;
int computeSum(int s,int e){
    int sum = 0;
    for (int i = s; i <= e; ++i) {
        sum += i;
    }
    return sum;
}
int smallestIntegerForSum(int goal){

    int i = 1;
    int sum = 0;
    while (sum < goal) {
        sum += i;
        ++i;
    }
    return i;
}
int computeGcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
bool checkPrime(int n){
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
int removeDuplicates(int arr[], int n) {    
    if (n == 0 || n == 1)
        return n;
    int writeIndex = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[writeIndex - 1]) { 
            arr[writeIndex] = arr[i]; writeIndex++;
        } 
    }
    return writeIndex;
}
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
} 
void multiplymatrix(){
    int n;

    cout << "Enter the size of the square matrices (nXn): ";
    cin >> n;

    int matrix1[n][n], matrix2[n][n], result[n][n];

    cout << "Enter elements of matrix 1:\n";
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix 2:\n";
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> matrix2[i][j];
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) { 
    for (int k = 0; k < n; k++) {
result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    } 
}
void printmatrix(){
    int rows, cols;
    cout << "Enter the number of rows and columns: "; 
    cin >> rows >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result_sum[rows][cols], result_diff[rows][cols];

    cout << "Enter elements of matrix 1:\n";
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    cin >> matrix1[i][j];
    }
    }

    cout << "Enter elements of matrix 2:\n";
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cin >> matrix2[i][j];
        }
    }

// Perform addition
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        result_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

// Perform subtraction
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        result_diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

// Print the results
    cout << "\nSum of matrices:\n";
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cout << result_sum[i][j] << " ";
        }
    cout << endl;
    }

    cout << "\nDifference of matrices:\n";
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cout << result_diff[i][j] << " ";
    }
        cout << endl;
        }
    }

Enter the size of the square matrices (nXn): 3
Enter elements of matrix 1:
1 2 3 4 5 6 7 8 9
Enter elements of matrix 2:
9 8 7 6 5 4 3 2 1

Product of matrices:
30 24 18
84 69 54
138 114 90 

return 0;

int main(){
    multiplymatrix();

}