#include <stdio.h>

int main() {
    int V1 = 3;
    int V3 = 5;

    int V2 = V1 == 3 ? 2 : 1;
    int V4 = V1 == 3 ? 2 : (V1 == 5 ? 3 : 1);
    int V5 = 0;

    V5 = V1 > 4 ? 10 : 20;
}