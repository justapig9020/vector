#include "vector.h"
#include <stdio.h>

int main(void) {
    vec_t v = new_vec(sizeof(int));
    for (int i=0; i<10; i++)
        push(v, &i);
    size_t size;
    int *arr = into_array(v, &size);
    for (int i=0; i<size; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
