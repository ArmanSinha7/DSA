class Solution {

public:

    bool rotateString(string a, string b) {

        if(a.size() == b.size() && (a + a).find(b) != string::npos)

            return true;

        return false;

    }

};