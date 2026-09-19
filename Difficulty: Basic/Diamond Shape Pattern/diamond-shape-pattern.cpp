#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
   for (int i = 1; i <= n; i++) {
               // Print leading spaces
               for (int j = 0; j < n - i; j++) {
                   cout << " ";
               }
               // Print i stars with a trailing space
               for (int j = 0; j < i; j++) {
                   cout << "* ";
               }
               cout << "\n";
           }

           // Lower half: Rows from n down to 1
           for (int i = n; i >= 1; i--) {
               // Print leading spaces
               for (int j = 0; j < n - i; j++) {
                   cout << " ";
               }
               // Print i stars with a trailing space
               for (int j = 0; j < i; j++) {
                   cout << "* ";
               }
               cout <<endl;
           }
    

    return 0;
}