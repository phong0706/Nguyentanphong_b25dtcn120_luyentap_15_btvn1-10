#include <stdio.h> 

int daoNguocSo(int n) {

    int soDaoNguoc = 0;
    int chuSo = 0;
    while (n != 0) {

        chuSo = n % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSo;
        n = n / 10;
    }
    return soDaoNguoc;
}
int main() {
    int so1 = 12345;
    int ketQua1 = daoNguocSo(so1);
    printf("So dao nguoc cua %d la: %d\n", so1, ketQua1);
    int so2 = -789;
    int ketQua2 = daoNguocSo(so2);
    
    printf("So dao nguoc cua %d la: %d\n", so2, ketQua2);
    int so3 = 1500;
    int ketQua3 = daoNguocSo(so3);
    
    printf("So dao nguoc cua %d la: %d\n", so3, ketQua3);

    return 0; 
}
