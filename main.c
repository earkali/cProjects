#include <stdio.h>
int us,taban;
int input();
int usAl(int taban, int us);

int main() {
    printf("Taban giriniz");
    taban = input();
    printf("Us giriniz");
    us = input();
    printf("Sonuc %d", usAl(taban, us));
    return 0;
}

int input() {
    int sayi;
    scanf("%d", &sayi);
    return sayi;
}

int usAl(int taban, int us) {
    if (us == 0) {
        return 1;
    }
    return taban * usAl(taban, us - 1);
}