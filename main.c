#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};


    int *a = (arr + 1);
    printf("%p, %p\n", a, &arr[1][0]);

    printf("%p, %p\n", &arr, &arr[0][0]);

    //printf("%p", &arr, &(arr + 1));
    printf("%p", &a);


    return 0;
}
