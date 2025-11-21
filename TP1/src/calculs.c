#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 4;
    char op = '&';

    switch (op) {
        case '+':
            printf("Resultat = %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultat = %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultat = %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultat = %d\n", num1 / num2);
            else
                printf("Erreur : division par zero\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Resultat = %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zero\n");
            break;

        case '&':
            printf("Resultat = %d\n", num1 & num2);
            break;

        case '|':
            printf("Resultat = %d\n", num1 | num2);
            break;

        case '~':
            printf("Resultat = %d\n", ~num1);
            break;

        default:
            printf("Operateur inconnu\n");
    }

    return 0;
}

