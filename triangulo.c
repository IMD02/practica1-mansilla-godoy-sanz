#include <stdio.h>

int main() {
    int a, b, c;

    printf("Introduce los tres lados del triangulo:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((c < a + b) && (b < a + c) && (a < b + c)) {

        if (a == b && b == c) {
            printf("Triangulo equilatero\n");
        }
        else if (a == b || b == c) {
            printf("Triangulo isosceles\n");
        }
        else {
            printf("Triangulo escaleno\n");
        }

    } 
    else {
        printf("No es un triangulo\n");
    }

    return 0;
}