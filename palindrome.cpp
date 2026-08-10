#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int x=n;
    int revnum=0;
    while(n>0){
    int ld= n%10;
    revnum=(revnum*10)+ld;
    n=n/10;
    }
    if(x==revnum){
        cout<<"Number is palindrome";
    }
    else cout<<"Number is not a palindrome";


    
    return 0;
}