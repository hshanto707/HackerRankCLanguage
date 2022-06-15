#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function    
    *a = *a + *b;
    *b = abs(*a - *b - *b);
}

int main() {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    update(&a, &b);
    
    printf("%d\n", a);
    printf("%d", b);
    
    return 0;
}
