class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> p;
        int sum = 0;
        int sum2 = 0;
        for(auto x : s){
            ++p[x];
        }
        unordered_map<char, int> :: iterator it = p.begin();
        while(it != p.end()) {
            if(it -> second % 2 == 0) {
                sum += it -> second;
            } else {
                sum += it -> second - 1;
                sum2 = 1;
            }
            it++;
        }
        if(sum2) return sum + sum2;
        return sum;
    }
};