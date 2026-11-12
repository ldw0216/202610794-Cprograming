#include <stdio.h>
#include <inttypes.h> 

int main(void)
{
    int i = 0;
    char c = 69;
    float f = 12.3;

    printf("i의 주소: %016" PRIXPTR "\n", (uintptr_t)&i);
    printf("c의 주소: %016" PRIXPTR "\n", (uintptr_t)&c);
    printf("f의 주소: %016" PRIXPTR "\n", (uintptr_t)&f);

    return 0;
}