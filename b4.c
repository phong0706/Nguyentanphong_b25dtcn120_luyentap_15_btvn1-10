#include <stdio.h>

int tinhTongMang(const int* arr, int kichThuoc) {
    int tong = 0;
    
    for (int i = 0; i < kichThuoc; ++i) {
        tong += arr[i];
    }
    
    return tong;
}

int main() {
    int mangCuaToi[] = {10, 5, 3, 7, 2};
    
    int kichThuoc = sizeof(mangCuaToi) / sizeof(mangCuaToi[0]);
    
    int ketQuaTong = tinhTongMang(mangCuaToi, kichThuoc);
    
    printf("Tong cua cac phan tu trong mang la: %d\n", ketQuaTong);
    
    return 0;
}
