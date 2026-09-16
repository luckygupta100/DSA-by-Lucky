// Second Largest In A Array Without Sorting.
#include<iostream>
#include<vector>
using namespace std;
int secondLargest(vector<int> &a , int n){
    int largest =a[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
                }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest;
}


int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Second Largest Element "<< secondLargest(a,n);

}