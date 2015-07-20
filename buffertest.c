#include <stdio.h>
#include <string.h>

int main() {
    char A[8] = "";
    unsigned short B = 1979;

    strcpy(A, "Excessive");
    printf("%s", A);
    printf("%d", B);
    printf("\n");
}