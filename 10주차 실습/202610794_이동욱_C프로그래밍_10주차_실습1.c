#include <stdio.h>
#include <inttypes.h> 


int main(void)
{
    int i = 10;
    double f = 12.3;
    int* pi = NULL;

    double* pf = NULL;
    pi = &i;
    pf = &f;

    printf("f의 주소: %016" PRIXPTR "\n", (uintptr_t)&f);
    printf("i의 주소: %016" PRIXPTR "\n", (uintptr_t)&i);
    printf("pi의 값: %016" PRIXPTR "\n", (uintptr_t)pi);
    printf("pf의 값: %016" PRIXPTR "\n", (uintptr_t)pf);
    
    printf("%p %p \n", pi, &i);
    printf("%p %p \n", pf, &f);
    return 0;
}