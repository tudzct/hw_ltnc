#include <vector>
#include <iostream>

using namespace std;

void trace(string *grid, int w, int Y, int x, bool &survived, int h, vector<vector<bool>> &visited){
    if(!survived){
        if(x < 0 || x == w || visited[Y][x]) return;
        visited[Y][x] = 1;

        if(Y == h - 1){
            survived = 1;
            return;
        }

        else{
            //move right
            if((x <= w - 2) && (grid[Y][x + 1] == 'E') && (grid[Y + 1][x + 1] != 'R') && !survived){
                trace(grid, w, Y + 1, x + 1, survived, h, visited);
            }
            //move left
            if(x >= 1 && grid[Y][x - 1] == 'E' && grid[Y + 1][x - 1] != 'R' && !survived){
                trace(grid, w, Y + 1, x - 1, survived, h, visited);
            }
            //still stand
            if(grid[Y + 1][x] != 'R' && !survived){
                trace(grid, w, Y + 1, x, survived, h, visited);
            }
        }
    }
}

int main(){
    int w, h;
    cin >> w >> h;
    string str[2000];
    for(int i = 0; i < h; i++) cin >> str[i];

    int x = str[0].find('Y');
    bool survived = 0;
    vector<vector<bool>> visited(h, vector<bool>(w, 0));

    trace(str, w, 0, x, survived, h, visited);
    cout << (survived ? "YES" : "NO");
    return 0;
}