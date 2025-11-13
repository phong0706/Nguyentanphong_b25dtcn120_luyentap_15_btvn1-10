#include <stdio.h>

int timKiemNhiPhan(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int mangDaSapXep[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(mangDaSapXep) / sizeof(mangDaSapXep[0]);
    
    int giaTriCanTim1 = 23;
    int giaTriCanTim2 = 45;

    int viTri1 = timKiemNhiPhan(mangDaSapXep, n, giaTriCanTim1);
    int viTri2 = timKiemNhiPhan(mangDaSapXep, n, giaTriCanTim2);

    if (viTri1 != -1) {
        printf("Tim thay %d tai chi so: %d\n", giaTriCanTim1, viTri1);
    } else {
        printf("Khong tim thay %d\n", giaTriCanTim1);
    }

    if (viTri2 != -1) {
        printf("Tim thay %d tai chi so: %d\n", giaTriCanTim2, viTri2);
    } else {
        printf("Khong tim thay %d\n", giaTriCanTim2);
    }

    return 0;
}
