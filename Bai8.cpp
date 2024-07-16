#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tu;
    int mau;
} PhanSo;

// Hàm nhập mảng các phân số
void nhapMangPhanSo(PhanSo** arr, int* n) {
    printf("Nhap so luong phan so: ");
    while (scanf("%d", n) != 1 || *n <= 0) {
        printf("So luong phan so phai la so nguyen duong. Vui long nhap lai: ");
        while (getchar() != '\n'); // Xóa bộ đệm đầu vào
    }

    *arr = (PhanSo*)malloc((*n) * sizeof(PhanSo));
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1); // Thoát chương trình nếu không thể cấp phát bộ nhớ
    }

    for (int i = 0; i < *n; i++) {
        printf("Nhap tu so cua phan so thu %d: ", i + 1);
        while (scanf("%d", &(*arr)[i].tu) != 1) {
            printf("Tu so phai la so nguyen. Vui long nhap lai: ");
            while (getchar() != '\n'); // Xóa bộ đệm đầu vào
        }
        do {
            printf("Nhap mau so cua phan so thu %d (mau != 0): ", i + 1);
            while (scanf("%d", &(*arr)[i].mau) != 1) {
                printf("Mau so phai la so nguyen. Vui long nhap lai: ");
                while (getchar() != '\n'); // Xóa bộ đệm đầu vào
            }
            if ((*arr)[i].mau == 0) {
                printf("Mau so phai khac 0. Vui long nhap lai.\n");
            }
        } while ((*arr)[i].mau == 0);
    }
}

// Hàm xuất mảng các phân số
void xuatMangPhanSo(PhanSo* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan so thu %d: %d/%d\n", i + 1, arr[i].tu, arr[i].mau);
    }
}

int main() {
    PhanSo* arr;
    int n;

    nhapMangPhanSo(&arr, &n);
    xuatMangPhanSo(arr, n);

    free(arr); // Giải phóng bộ nhớ sau khi sử dụng
    return 0;
}
