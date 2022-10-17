#include <iostream>
#include <ctime>
#include <cstdlib>

#define Size 10
using namespace std;

void printA(int *a, int s) {
    for (int i=0;i<s;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[Size], tmp;
    srand(time(NULL));
    for (int i=0;i<Size;i++)
        A[i] = rand()%1000 + 1;
    cout << "AA Before Sorting" << endl;
    printA(A, Size);
    for (int i=Size-1;i>1;i--) {
        for (int j=0;j<i;j++){
            if(A[j] > A[j+1]) {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
        cout << "Outer loop" << Size - i << "st result" << endl;
        printA(A, Size);
    }
    cout << "After sorting" << endl;
    printA(A, Size);
}