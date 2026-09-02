class Solution {
public:
    string convert(string s, int n) {
        if (n == 1 || n >= s.size()) {
            return s;
        }

        vector<string> rows(n);
        int row = 0;
        int dir = 1;

        for (char c : s) {
            rows[row].push_back(c);

            if (row == n - 1)
                dir = -1;
            else if (row == 0)
                dir = 1;

            row += dir;
        }

        string k;
        k.reserve(s.size());

        for (int i = 0; i < n; i++) {
            k += rows[i];
        }

        return k;
    }
};
