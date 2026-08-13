#include <iostream>
using namespace std;

// Print name N times using recursion
// void f(int i, int n) {
//     if (i > n)
//         return;

//     cout << "Lucky" << endl;

//     f(i + 1, n);
// }

// int main() {
//     int n;
//     cin >> n;

//     f(1, n);

//     return 0;
// }
// Print linearly from 1 to N.
void func(int i, int n){
    if(i > n)
    return;
    cout<< i <<" ";
    func(i+1,n);
}
int main(){
    int n;
    cin>> n;
    func(1,n);
    return 0;
}