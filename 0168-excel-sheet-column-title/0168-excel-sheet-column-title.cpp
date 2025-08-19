class Solution {
public:
    string convertToTitle(int n) {
        string title{""};

        while(n > 0){
            n = n - 1;
            title = static_cast<char>(65 + (n % 26)) + title;
            n /= 26;
        }

        return title;
    }
};