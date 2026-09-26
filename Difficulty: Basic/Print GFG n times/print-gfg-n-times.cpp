#include <iostream>
using namespace std;

void f(int i,int n){
        if(i>n) return;
        cout<<"GFG ";
        f(i+1,n);

}
int main() {
    int n;
    cin >> n;

    // code here
    f(1,n);
    

    return 0;
}
