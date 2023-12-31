// There is a company named James Peterson & Co. The company has ‘n’ employees. The employees have skills, which is denoted with help of an integer. The manager of James Peterson & Co. wants to sort the employees on the basis of their skills in ascending order. He is only allowed to swap two employees which are adjacent to each other. He is given the skills of employees in an array of size ‘n’. He can swap the skills as long as the absolute difference between their skills is 1. You need to help the manager out and tell whether it is possible to sort the skills of employees or not.
// Sample Input:
// 2
// 4
// 1 0 3 2
// 3
// 2 1 0
// Sample Output:
// Yes
// No
#include<bits/stdc++.h>
using namespace std;
bool checksort(int *arr, int n)
{
  for(int i =0; i<n-1; i++)
  {
    if(arr[i]>arr[i+1]){
      if(arr[i+1] == arr[i]-1)
        {
        swap(arr[i],arr[i+1]);
        }
      else
        return false;
    }
   }
   return true;
 }
int main(){// write your code here
    int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i =0; i<n; i++)
  {
  cin>>arr[i];
  }
  if(checksort(arr,n))
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
  
}
    return 0;
}
