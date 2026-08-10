#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int revn=0;
    while(n>0){
        int ld=n%10;
        revn=(revn*10)+ld;
        n=n/10;
    } 
    
    cout<< revn;

    
}
