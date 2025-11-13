#include <stdio.h>

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    int newSize = 0; 

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    printArray(arr, n);

    int kichThuocMoi = removeDuplicates(arr, n);

    printf("Mang sau khi loai bo trung lap: ");
    printArray(arr, kichThuocMoi);
    
    printf("Ham tra ve kich thuoc mang moi la: %d\n", kichThuocMoi);

    return 0;
}
