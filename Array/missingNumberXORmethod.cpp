#include<bits/stdc++.h>
using namespace std;
int XOR(vector<int>&nums , int n){
    int xor1=0,xor2=0;
    
for(int i=0;i<n-1;i++){
    xor2 =xor2^nums[i];
    xor1 = xor1^(i+1);
} xor1=xor1^n;
return xor1 ^ xor2;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    cout<<"Missing Number:"<< XOR(a,n);

}
