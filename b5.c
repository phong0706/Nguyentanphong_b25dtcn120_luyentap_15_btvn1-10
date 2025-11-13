#include <stdio.h>

void timPhanTuNhieuNhat(int arr[], int n, int* phanTuTimDuoc, int* soLanXuatHien) {
    
    if (n <= 0) {
        *phanTuTimDuoc = 0;
        *soLanXuatHien = 0;
        return;
    }

    int maxCount = 0;
    int mostFrequentElement = arr[0];

    for (int i = 0; i < n; i++) {
        int currentCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentElement = arr[i];
        }
    }

    *phanTuTimDuoc = mostFrequentElement;
    *soLanXuatHien = maxCount;
}

int main() {
    int mang[] = {1, 3, 2, 1, 4, 1, 3, 5, 3, 3};
    int n = sizeof(mang) / sizeof(mang[0]);

    int phanTu;
    int soLan;

    timPhanTuNhieuNhat(mang, n, &phanTu, &soLan);

    printf("Phan tu xuat hien nhieu nhat: %d\n", phanTu);
    printf("So lan xuat hien: %d\n", soLan);

    return 0;
}
