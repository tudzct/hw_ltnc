#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string res = "";
    int tmp = (s[0] - '0') * 10 + (s[1] - '0');
    if(s[8] == 'A'){
        if(tmp == 12){
            res += "00";
            for(int i = 2; i < s.size() - 2; i++) res += s[i];
            return res;
        }

        else{
            for(int i = 0; i < s.size() - 2; i++) res += s[i];
            return res;
        }
    }

    else{
        if(tmp == 12){
            for(int i = 0; i < s.size() - 2; i++) res += s[i];
            return res;
        }

        else{
            res += to_string(tmp + 12);
            for(int i = 2; i < s.size() - 2; i++) res += s[i];
            return res;
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
