class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
       a++;
       b += 2;
       return {a, b};
    }
};