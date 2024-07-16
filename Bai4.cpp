#include <stdio.h>
#include <stdlib.h>

void nhapM1C_SoNguyen(int** a, int* n)
{
    *n = 10;
    *a = (int*)malloc((*n) * sizeof(int)); // cấp phát a có 10 phần tử
    for (int i = 0; i < *n; i++)
    {
        *(*a + i) = rand() % 100;
    }
}

void xuatM1C_SoNguyen(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nPhan tu thu %d co gia tri %d va dia chi o nho la %p", i, *(a + i), (void*)(a + i));
        printf("\nPhan tu thu %d co gia tri %d va dia chi o nho la %p", i, a[i], (void*)(a + i));
    }
}

int main()
{
    int* a;
    int n;
    nhapM1C_SoNguyen(&a, &n);
    xuatM1C_SoNguyen(a, n);

    free(a); // Giải phóng bộ nhớ sau khi sử dụng
    return 0;
}
