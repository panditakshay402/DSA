/* Given an array arr consisting of only 0's and 1's in random order. 
Modify the array in-place to segregate 0s onto the left side and 1s 
onto the right side of the array. */

/* Examples :
Input: arr[] = [0, 0, 1, 1, 0]
Output: [0, 0, 0, 1, 1]
Explanation:  After segregation, all the 0's are on 
the left and 1's are on the right. 
Modified array will be [0, 0, 0, 1, 1].

Input: arr[] = [1, 1, 1, 1]
Output: [1, 1, 1, 1]
Explanation: There are no 0s in the given array, 
so the modified array is [1, 1, 1, 1] 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 1 
*/

#include <iostream>
#include <vector>
using namespace std;

void ms(vector<int>&a,int l,int r){
if(l>=r)return;
int m=(l+r)/2;
ms(a,l,m); ms(a,m+1,r);
vector<int> t;
int i=l,j=m+1;
while(i<=m&&j<=r)t.push_back(a[i]<a[j]?a[i++]:a[j++]);
while(i<=m)t.push_back(a[i++]);
while(j<=r)t.push_back(a[j++]);
for(int k=0;k<t.size();k++)a[l+k]=t[k];
}

int main(){
vector<int>a; int x;
while(cin>>x)a.push_back(x);
ms(a,0,a.size()-1);
for(int x:a)cout<<x<<" ";
}