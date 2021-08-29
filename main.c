#include "module.h"

int main() {
    char a[Standart_array_size] = "ABAAk.....l",
            b[Standart_array_size] = "mmmCCCC",
            d[Standart_array_size] = "ahBBB1 BBh B1",
            c[Standart_array_size] = "CC";

    printf("%s\n", b);
    mbl_ncopy(a, b, 5);
    printf("%s\n", b);
    FILE *fp = fopen("test.txt", "r");
    FILE *fp2 = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("PHDZ");

    } else {
        printf("%s\n", a);
        mbl_ncat(a, b, 2);
        printf("%s\n", a);
    }
}
