#include <stdlib.h>

void *aligned_alloc(size_t alignment, size_t size) {
    return __builtin_assigner_aligned_alloc(alignment, size);
}
void *calloc(size_t nmemb, size_t size) {
    return __builtin_assigner_calloc(nmemb, size);
}
void free(void *ptr) {
    __builtin_assigner_free(ptr);
}
void *malloc(size_t size) {
    return __builtin_assigner_malloc(size);
}
void *realloc(void *ptr, size_t size) {
    return __builtin_assigner_realloc(ptr, size);
}
