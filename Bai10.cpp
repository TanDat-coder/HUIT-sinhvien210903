#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nhapChuoi(char** st) {
    char buffer[1000];
    printf("Nhap chuoi: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Loại bỏ ký tự newline nếu có
    buffer[strcspn(buffer, "\n")] = 0;

    *st = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
    if (*st == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }

    strcpy(*st, buffer);
}

void xuatChuoi(char* st) {
    char* p = st;
    while (*p != '\0') {
        printf("%c ", *p);
        p++;
    }
    printf("\n");
}

int main() {
    char* st;

    nhapChuoi(&st);
    xuatChuoi(st);

    free(st); // Giải phóng bộ nhớ sau khi sử dụng
    return 0;
}
