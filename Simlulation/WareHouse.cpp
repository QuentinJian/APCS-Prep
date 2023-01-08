#include <iostream>

using namespace std;

int warehouse[35][55];
int n;

int putPackage(char package_type, int start_col) {
    int x = n, y = start_col;
    x = start_col;
    if (package_type == 'A') {
        while (x>=0 && warehouse[x][y]==0 && warehouse[x][y-1] == 0 
            && warehouse[x][y-2] == 0 && warehouse[x][y-3 == 0]) {
                x --;
        }
        x+=1;
        if (x+1 >= n) {
            return 1;
        }
        warehouse[x][y] = 1;
        warehouse[x][y+1] = 1;
        warehouse[x][y+2] = 1;
        warehouse[x][y+3] = 1;
        return 0;
    }
    if (package_type == 'B') {
        while (x >= 0 && warehouse[x][y] == 0) {
            x--;
        }
        x+=1;
        if (x+2 >= n) {
            return 1;
        }
        warehouse[x][y] = 1;
        warehouse[x+1][y] = 1;
        warehouse[x+2][y] = 1;
        return 0;
    }
    if (package_type == 'C') {
        while (x >= 0 && warehouse[x][y] == 0 && warehouse[x][y+1] == 0) {
                x--;
        }
        x+=1;
        if (x+1 >= n) {
            return 1;
        }
        warehouse[x][y] = 1;
        warehouse[x+1][y] = 1;
        warehouse[x][y+1] = 1;
        warehouse[x+1][y+1] = 1;
        return 0;

    }
    if (package_type == 'D') {
        while (x >= 1 && warehouse[x][y+1] == 0 && warehouse[x+2][y] == 0) {
            x--;
        }
        x+=1;
        if (x+2 >= n)
            return 1; 
        warehouse[x][y+1] = 1;
        warehouse[x+1][y+1] = 1;
        warehouse[x+2][y+1] = 1;
        warehouse[x][y] = 0;
        return 0;
    }
    if (package_type == 'E') {
        while(x>=0 && warehouse[x+1][y] == 0 && warehouse[x][y+1]==0 && warehouse[x][y+2]==0) {
            x--;
        }
        x+=1;
        if (x+1 >= n)
            return 1;
        warehouse[x][y+1] = 1;
        warehouse[x][y+2] = 1;
        warehouse[x+1][y] = 1;
        warehouse[x+1][y+1] = 1;
        warehouse[x+1][y+2] = 1;
    }
    return 0;
}

int main() {
    int R, C;
    char package;
    int start_col;
    int ans1 = 0, ans2 = 0;
    cin >> R >> C >> n;
    memset(warehouse, 0, sizeof(warehouse));
    for (int i=0;i<n;i++) {
        cin >> package >> start_col;
        ans1 += putPackage(package, start_col);
    }
    for (int i=0;i<R;i++) {
        for (int j=0;j<C;j++) {
            if (warehouse[i][j] == 0) 
                ans2 += 1; 
        }
    }
    cout << ans1 << "\n" << ans2;
    return 0;
}