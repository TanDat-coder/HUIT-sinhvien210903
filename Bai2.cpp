#include <iostream>
#include <ctime>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int tinhTuoi(int namSinh)
{
    // C?n khai b�o th? vi?n #include <ctime> ?? d�ng ???c time_t v� tm
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int namHH = 1900 + ltm->tm_year;
    try
    {
        if (namSinh <= 0 || namSinh > namHH)
            throw 101; // M� l?i 101
        else if (namSinh < 1920)
            throw 102; // M� l?i 102
        else
            return namHH - namSinh;
    }
    catch (int errCode)
    {
        if (errCode == 101)
            printf("Nam sinh khong hop le\n");
        else
            printf("Nam sinh < 1920\n");
        return -1;
    }
}

int main()
{
    int namSinh;
    printf("Nhap nam sinh: ");
    scanf_s("%d", &namSinh);
    int tuoi = tinhTuoi(namSinh);
    if (tuoi != -1)
        printf("Tuoi cua ban la: %d\n", tuoi);
    _getch();
    return 0;
}
