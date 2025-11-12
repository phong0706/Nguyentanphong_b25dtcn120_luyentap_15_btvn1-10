#include <stdio.h>
#include <stdlib.h> 

int tinhHieu(int a, int b) {
    return a - b;
}

int tinhTich(int a, int b) {
    return a * b;
}

int main() {
    int so1 = 15;
    int so2 = 7;

    int hieu = tinhHieu(so1, so2);
    printf("Hieu cua %d va %d la: %d\n", so1, so2, hieu);

    int tich = tinhTich(so1, so2);
    printf("Tich cua %d va %d la: %d\n", so1, so2, tich);

    hieu = tinhHieu(so2, so1);
    printf("Hieu cua %d va %d la: %d\n", so2, so1, hieu);

    tich = tinhTich(so2, so1);
    printf("Tich cua %d va %d la: %d\n", so2, so1, tich);

    return 0;
}
