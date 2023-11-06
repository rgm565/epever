#include <stdio.h>

int main (int argc, char **argv) {
    int inVal;

    printf ("Enter HEX value:\n");

    while (-1) {
        if (EOF == scanf ("%x", &inVal)) {
            return (0);
        }
        printf ("Decimal: %d\n", inVal);
    }
}

