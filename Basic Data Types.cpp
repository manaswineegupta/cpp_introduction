#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int A1;
    long L1;
    char C1;
    float F1;
    double D1;
    scanf("%d %ld %c %f %lf", &A1, &L1, &C1, &F1, &D1);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf", A1, L1, C1, F1, D1);
    return 0;
}