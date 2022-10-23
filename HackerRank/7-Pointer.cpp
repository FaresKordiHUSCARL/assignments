#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int x=*a, y=*b;
    *a = x+y;
    if(x-y>=0) *b = x-y;
    else *b = -(x-y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}