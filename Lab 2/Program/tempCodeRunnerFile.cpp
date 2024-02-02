    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
int n = sizeof(arr) / sizeof(arr[0]);

int new_n = removeDuplicates(arr, n);

cout << "Array after removing duplicates: ";
for (int i = 0; i < new_n; i++) {
cout << arr[i] << " ";
}

cout << endl;
cout << "Number of distinct elements: " << new_n;

int arr1[] = {1, 2, 3, 4};
int n1 = sizeof(arr1) / sizeof(arr1[0]);

int arr2[] = {5, 6, 7};
int n2 = sizeof(arr2) / sizeof(arr2[0]);

int arr3[n1 + n2]; // Array to hold the merged elements

mergeArrays(arr1, n1, arr2, n2, arr3);

cout << "Merged array: ";
for (int i = 0; i < n1 + n2; i++) {
cout << arr3[i] << " ";
} 