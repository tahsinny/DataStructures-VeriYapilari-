#include <stdio.h>

int main() {
    int a = 10;         // Normal bir tamsayi degiskeni
    int *p;             // Pointer (isaret�i) degiskeni

    p = &a;             // 'p' degiskenine 'a' degiskeninin adresini atiyoruz

    // Degiskenlerin adres ve degerleri
    printf("a degiskeninin degeri: %d\n", a);
    printf("a degiskeninin adresi: %p\n", &a);
    printf("p pointer'inin degeri (a'nin adresi): %p\n", p);
    printf("p pointer'inin g�sterdi�i de�er: %d\n", *p);

    // Pointer ile degeri adresten degistirebiliriz
    *p = 20;
    printf("Pointer kullanarak a'n�n de�erini de�i�tirdik: %d\n", a);

    // Pointer ile dizi elemanlarina erisim
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Dizi adi zaten bir pointer'dir, ilk elemanin adresini tutar

    printf("Dizinin ilk eleman�: %d\n", *ptr);
    printf("Dizinin ikinci eleman�: %d\n", *(ptr + 1));
    printf("Dizinin ���nc� eleman�: %d\n", *(ptr + 2));

    return 0;
}
