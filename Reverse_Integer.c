#include <stdio.h>

int main() {
    int n, q, s = 0, r;
    scanf("%d", &n);
    q = n;
    while (q != 0) {
        r = q % 10;
        s = s * 10 + r; // Corrected this line to reverse the number.
        q = q / 10;
    }
    printf("%d", s);
    return 0; // Added a return statement for proper program termination.
}
