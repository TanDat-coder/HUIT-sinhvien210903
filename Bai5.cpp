#include <stdio.h>

int main()
{
    int a, b, c;
    float result;

    // Nh?p gi� tr? c?a a, b, c t? ng??i d�ng
    printf("Nhap gia tri cua a: ");
    scanf_s("%d", &a);
    printf("Nhap gia tri cua b: ");
    scanf_s("%d", &b);

    // Ki?m tra a - b c� b?ng 0 kh�ng
    if (a - b == 0)
    {
        printf("Loi: a - b bang 0. Khong the chia cho 0.\n");
    }
    else
    {
        printf("Nhap gia tri cua c: ");
        scanf_s("%d", &c);

        // T�nh v� in ra k?t qu? c?a c / (a - b)
        float KQ = (float)c / (a - b);
        printf("Ket qua c / (a - b) la: %.2f\n", KQ);
    }

    return 0;
}
