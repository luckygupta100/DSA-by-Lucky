#include<iostream>
using namespace std;
int fibonnaci(int n){
    if(n>=2)
    return fibonnaci(n-1)+fibonnaci(n-2);
    else if(n==0){ 
    return 0; }
    else if(n==1) {
        return 1;
    }
    
}
int main(){

int result =fibonnaci(9);
cout<< result <<endl;

}