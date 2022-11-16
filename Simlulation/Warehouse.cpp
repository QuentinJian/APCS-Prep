#include <vector>
#include <iostream>
#include <string>

using namespace std;
struct package
{
    /* data */
    int row;
    char type;
};
vector<vector<int>> WareHouse;
void solution(vector<package> A);
void put_A();
void put_B();
void put_C();
void put_D();
void put_E();

int empty_spot;
int out_of_limit;
int main() {
    int R, C, n;
    cin >> R >> C >> n;
    vector<package> packages(n);
    WareHouse.resize(R, vector<int>(C, 0));
    for (int i=0;i<n;i++) {
        package temp;
        cin >> temp.type;
        cin >> temp.row;
        packages[i] = temp;
    }
    return 0;
}

void solution(vector<package> A) {
    empty_spot = 0;
    out_of_limit = 0;
    char cur;
    for (int i=0;i<A.size();i++) {
        cur = A[i].type;
        switch (cur)
        {
        case 'A':
            put_A();
            break;
        case 'B':
            put_B();
            break;
        case 'C':
            put_C();
            break;
        case 'D':
            put_D();
            break;
        case 'E':
            put_E();
            break;
        }
    }
}

void put_A(int row) {
    int col = ;
    while(col>=0 && WareHouse[row][col]!=1) {

    }
}

void put_B() {

}

void put_C() {

}

void put_D() {

}

void put_E() {

}
