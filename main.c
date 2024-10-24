#include <stdio.h>

int main(void) {
    int lunghezzaLato;
    printf("inserisci la lunghezza del lato:");
    scanf("%d", &lunghezzaLato);
    if (lunghezzaLato > -1) {


    for (int i = 0; i < lunghezzaLato; i++) {
        for (int j = 0; j < lunghezzaLato; j++) {
            if (j == 0 || j == lunghezzaLato - 1 || i == 0 || i == lunghezzaLato - 1 ) {
                printf("*");
            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
    }
    else {
        printf("numero non valido ");
    }
    return 0;
}
