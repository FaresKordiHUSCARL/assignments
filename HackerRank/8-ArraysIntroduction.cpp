#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++) scanf("%d", &A[i]);
    for(int i=N-1; i>=0; i--) printf("%d ", A[i]);
    return 0;
}
