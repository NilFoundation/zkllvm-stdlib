#include <new>

_LIBCPP_WEAK
void* operator new(std::size_t size) _THROW_BAD_ALLOC {
    if (size == 0)
        size = 1;
    return __builtin_assigner_malloc(size);
}

_LIBCPP_WEAK
void* operator new(size_t size, const std::nothrow_t&) noexcept {
    return ::operator new(size);
}

_LIBCPP_WEAK
void* operator new[](size_t size) _THROW_BAD_ALLOC {
    return ::operator new(size);
}

_LIBCPP_WEAK
void* operator new[](size_t size, const std::nothrow_t&) noexcept {
    return ::operator new(size);
}

_LIBCPP_WEAK
void operator delete(void* ptr) noexcept {
    __builtin_assigner_free(ptr);
}

_LIBCPP_WEAK
void operator delete(void* ptr, const std::nothrow_t&) noexcept {
    ::operator delete(ptr);
}

_LIBCPP_WEAK
void operator delete(void* ptr, size_t) noexcept {
    ::operator delete(ptr);
}

_LIBCPP_WEAK
void operator delete[](void* ptr) noexcept {
    ::operator delete(ptr);
}

_LIBCPP_WEAK
void operator delete[](void* ptr, const std::nothrow_t&) noexcept {
    ::operator delete[](ptr);
}

_LIBCPP_WEAK
void operator delete[](void* ptr, size_t) noexcept {
    ::operator delete[](ptr);
}
