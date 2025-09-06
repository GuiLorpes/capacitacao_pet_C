#include <stdio.h>

int main(void) {
    unsigned short x = 92;
    long long y = 743892479823;
    char c[7] = "Penis!";
    int b = 4546;
    
    // "%u" = unsigned int
    // "%lld" = long long int
    // "%s" = string 
    // "%c" = char
    // "%i" = int

    printf("%u\n", x);
    printf("%lld\n", y);
    printf("%s\n", c);
    printf("%i\n", b);
}