#include <bits/stdc++.h>

using namespace std;

void generateStrings(vector<string>& res, string pref, const string& chars, int len) {
    if (len == 0) {
        res.push_back(pref);
        return;
    }

    for (char c : chars) {
        string newPref = pref + c;
        generateStrings(res, newPref, chars, len - 1);
    }
}

int main() {
    vector<string> res;
    string chars = "abcd";
    int len = 3;

    generateStrings(res, "", chars, len);

    //print ans
    for (const string& s : res) {
        cout << s << endl;
    }

    return 0;
}