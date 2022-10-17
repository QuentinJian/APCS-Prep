#include "SLinkedList.h"
#include <iostream>

using namespace std;

int main() {
    SLinkedList<string> *a = new SLinkedList<string>();
    a->addFront("MSP");
    cout << "A front() = " << a->front();
    return 0;
}