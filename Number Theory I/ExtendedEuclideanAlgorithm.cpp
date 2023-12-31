// Extended Euclidean algorithm also finds integer coefficients x and y such that: ax + by = gcd(a, b) 
// Time Complexity: O(Log min(a, b)).

#include <bits/stdc++.h>
using namespace std;

class Triplet{
public:
int x;
int y;
int gcd;
};

Triplet extendedEuclid (int a,int b) {
// Base Case
if(b==0) {
Triplet ans;
ans.gcd = a;
ans.x = 1;
ans.y = 0;
return ans;
}
// Extended Euclid Algorithm
Triplet smallAns = extendedEuclid (b, a%b);
Triplet ans;
ans.gcd = smallAns.gcd;
ans.x = smallAns.y;
ans.y = smallAns.x - (a/b)*smallAns.y;
return ans;
}
int main() {
int a,b;
cin>>a>>b;
Triplet ans = extendedEuclid (a,b);
cout << ans.gcd<<endl;
cout<<ans.x<<endl;
cout<<ans.y <<endl;
return 0;
}
