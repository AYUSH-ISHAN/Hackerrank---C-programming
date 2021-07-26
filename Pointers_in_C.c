#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
        int c = *b;
        if((*a - *b) >= 0)
            *b = *a - c;
        else
            *b = c - *a;
        *a = *a + c;
        
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
