#include <stdio.h>

int main() {
    
    float media1, media2, soma1, soma2;

    float n1;
    float n2;
    float n3;
    float n4;

    printf ("Quais são as notas da Ana?\n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    soma1 = n1 + n2;
    media1 = soma1 / 2.0;

    printf ("Quais são as notas de Beto?\n");
    scanf("%f", &n3);
    scanf("%f", &n4);

    soma2 = n3 + n4;
    media2 = soma2 / 2.0;

    printf ("A media de notas da Ana é: %.2f. E a media do Beto é: %.2f\n", media1, media2);

    return 0;
}