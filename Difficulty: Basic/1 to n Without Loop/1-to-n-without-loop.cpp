class Solution {
  public:
    void printTillN(int n) {
        // Base case: if n is less than 1, stop the recursion
        if (n < 1) return;

        // Recursive call: pass (n - 1) to go down to 1
        printTillN(n - 1);

        // Print the current number followed by a space as it backtracks
        cout << n << " ";
    }
};
