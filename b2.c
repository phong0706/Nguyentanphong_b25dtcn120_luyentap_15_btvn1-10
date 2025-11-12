#include <stdio.h>
#include <stdlib.h> 

int tinhTongChuSo(int n) {
    int tong = 0;
    int chuSo = 0;
    
    n = abs(n);
    if (n == 0) {
        return 0;
    }
    while (n > 0) {
        chuSo = n % 10; // Lay chu so cuoi cung
        tong += chuSo;  // Cong vao tong
        n /= 10;         // Bo chu so cuoi cung
    }

    return tong;
}
int main() {
    int so1 = 12345;
    int tong1 = tinhTongChuSo(so1);
    printf("Tong cac chu so cua %d la: %d\n", so1, tong1);

    int so2 = 987;
    int tong2 = tinhTongChuSo(so2);
    printf("Tong cac chu so cua %d la: %d\n", so2, tong2);

    int so3 = -555;
    int tong3 = tinhTongChuSo(so3);
    printf("Tong cac chu so cua %d la: %d\n", so3, tong3);

    int so4 = 0;
    int tong4 = tinhTongChuSo(so4);
    printf("Tong cac chu so cua %d la: %d\n", so4, tong4);

    return 0;
}
