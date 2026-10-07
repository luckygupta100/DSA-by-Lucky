#include<bits/stdc++.h>
using namespace std;
int AppearsOnce(vector<int>&nums , int n){
    int XOR = 0;
    for(int i=0; i<n;i++){
        XOR =XOR^nums[i];
        
    } return XOR;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"Number Appears Once: "<< AppearsOnce(a,n);

}