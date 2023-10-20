#include <stdio.h>

int main() {
    int n, k = 0, t;
    scanf("%d", &n);
    t = n;
    while (t > 0) {
        t = t / 10;
        k++;
        if (k == 10) {
            k--; 
        }
    }

    if (k == 9) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}
