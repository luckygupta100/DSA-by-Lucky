#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int x=n;
    int revn=0;
    while(n>0){
        int ld=n%10;
        revn=(revn)+(ld*ld*ld);
        n=n/10;
    }
    if(revn==x){
        cout<<"this number is Armstrong number";
    }
    else cout<<"Not a armstrong number";

}