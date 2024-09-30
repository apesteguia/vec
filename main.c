#include "vec.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static void print_each(void *);
static bool find_n(void *elem, void *finder);

int main() {
    Vec *vec = vec_new(sizeof(int));
    for (int i = 0; i < 100; i += 23) {
        vec_push(vec, &i);
    }
    dbg_print(vec);

    // vec_foreach(vec, print_each);

    int a = 23 * 77;
    int c = vec_find(vec, &a, find_n);
    printf("%d\n", c);
    // int *x = (int *) vec_get(vec, 77);
    // printf("%d\n", *x);
    vec_free(vec);
    return 0;
}

static void print_each(void *elem) { printf("%d\n", *(int *)elem); }

static bool find_n(void *elem, void *finder) {
    return (*(int *)elem == *(int *)finder);
}
