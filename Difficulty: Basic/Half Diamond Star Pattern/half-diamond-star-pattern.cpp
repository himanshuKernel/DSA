#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i=1;i<2*n;i++){
        int stars= i;
        if(i>n) stars=2*n-i;
        for(int j=0;j<stars;j++){
            cout<<"* ";
        }
        cout<<endl;
    }   

    return 0;
}