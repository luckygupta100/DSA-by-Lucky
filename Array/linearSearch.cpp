#include<bits/stdc++.h>
using namespace std;
int main(){int n;
    int num;
    cin >>num;
    n=5;
    int arr[]={1,2,3,45,56};
    for(int i=0;i<n;i++){
        if(arr[i]==num){
        cout << i;
        return 0;
    }
    }
    cout << -1;
}