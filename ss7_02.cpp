#include <stdio.h>

int main() {
    int arr[5];  
    int i;

    
    printf("Nhap 5 phan tu cho mang:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

   
    printf("Cac phan tu trong mang la:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    
}