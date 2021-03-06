//
// Mini Template Library
//

#include <cassert>
#include <cstring>

#pragma warning(push)
#pragma warning(disable : 4005)

#define MTL_namespace mtl
#define MTL_assert(expr) assert(expr)
#define MTL_memcpy(dest, src, num) memcpy(dest, src, num)
#define MTL_memset(dest, ch, num) memset(dest, ch, num)
#define MTL_strlen(s) static_cast<size_t>(strlen(s))
#define MTL_new(type) new type
#define MTL_new_array(type, n) new type [n]
#define MTL_delete(p) delete p
#define MTL_delete_array(p) delete[] p

#pragma warning(pop)

#include "string.inl"
