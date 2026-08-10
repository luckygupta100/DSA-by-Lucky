#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;
    int cnt=0;
    while(n>0){
    n%10;
        cnt=cnt+1;
    n=n/10;
    }
    cout<<cnt<<endl;


}