#include<bits/stdc++.h>
using namespace std;
// method1: sum method
int sum(vector<int> &nums , int n){
 int sum = n * (n + 1) / 2;
int sum2=0;
for(int j=0;j<nums.size();j++){
    sum2+= nums[j];
}
return sum-sum2;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    cout<<"Missing Number:"<< sum(a,n);

}