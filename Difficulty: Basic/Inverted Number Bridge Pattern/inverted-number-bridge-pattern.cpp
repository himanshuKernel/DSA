#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int space=0;
    for(int i =1;i<=n;i++){
        //for no
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        //for space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //for no
        for(int j=n-i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space +=2;
        
    }

    return 0;
}