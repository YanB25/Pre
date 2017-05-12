//bug: no return statement and no use i
#include <iostream>
int bar(int i) {
    i = 2;
}
int main() {
    int i = 2;
    bar(i);
    return 0;
}

