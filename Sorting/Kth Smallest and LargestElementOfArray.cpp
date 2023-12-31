// You are given an array ‘Arr’ consisting of ‘N’ distinct integers and a positive integer ‘K’. Find out Kth smallest and Kth largest element of the array. It is guaranteed that K is not greater than the size of the array.
// Example:
// Let ‘N’ = 4,  ‘Arr’ be [1, 2, 5, 4] and ‘K’ = 3.  
// then the elements of this array in ascending order is [1, 2, 4, 5].  Clearly, the 3rd smallest and largest element of this array is 4 and 2 respectively.
// Sample Input 1:-
// 2
// 4 4
// 5 6 7 2
// 4 3
// 1 2 5 4
// Sample Output 1:
// 7 2 
// 4 2
#include <bits/stdc++.h>
#include <vector>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
        // Write your code here.
        sort(arr.begin(), arr.end());
        vector<int> ans;

        ans.push_back(arr[k - 1]);
        ans.push_back(arr[n - k]);

        return ans;
}
