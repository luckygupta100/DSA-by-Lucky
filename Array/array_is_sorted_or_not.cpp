// check array is sorted or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minimum = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else {return false;}
        
    }
    return true;

}

