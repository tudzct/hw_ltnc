#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[4] = {'a', 'b', 'c', 'd'};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                cout << s[i] << s[j] << s[k] << endl;
            }
        }
    }

    return 0;
}
