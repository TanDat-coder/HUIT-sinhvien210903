#include <stdio.h>
#include <stdlib.h>

// Hàm nhập mảng
void nhapMang(int** arr, int* n, char tenMang) {
    printf("Nhap so luong phan tu cua mang %c: ", tenMang);
    scanf("%d", n);

    *arr = (int*)malloc((*n) * sizeof(int));
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }

    for (int i = 0; i < *n; i++) {
        printf("Nhap gia tri cho phan tu thu %d cua mang %c: ", i + 1, tenMang);
        scanf("%d", &(*arr)[i]);
    }
}

// Hàm xuất mảng
void xuatMang(int* arr, int n, char tenMang) {
    printf("Cac phan tu cua mang %c: ", tenMang);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm tính và xuất kết quả chia của các phần tử mảng a cho b
void chiaMang(int* a, int* b, int n) {
    printf("Ket qua chia cac phan tu cua mang a cho mang b:\n");
    for (int i = 0; i < n; i++) {
        if (b[i] == 0) {
            printf("Khong the chia phan tu thu %d cua mang a cho 0 (phan tu thu %d cua mang b).\n", i + 1, i + 1);
        }
        else {
            printf("a[%d] / b[%d] = %d / %d = %.2f\n", i, i, a[i], b[i], (float)a[i] / b[i]);
        }
    }
}

int main() {
    int* a, * b;
    int na, nb;

    // Nhập mảng a
    nhapMang(&a, &na, 'a');

    // Nhập mảng b
    nhapMang(&b, &nb, 'b');

    // Kiểm tra kích thước của hai mảng
    if (na != nb) {
        printf("Hai mang phai co cung kich thuoc.\n");
    }
    else {
        // Xuất mảng a và b
        xuatMang(a, na, 'a');
        xuatMang(b, nb, 'b');

        // Tính và xuất kết quả chia
        chiaMang(a, b, na);
    }

    // Giải phóng bộ nhớ
    free(a);
    free(b);

    return 0;
}
