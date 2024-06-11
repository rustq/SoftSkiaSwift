// File automatically generated by swift-bridge.
#include <stdint.h>
typedef struct SoftSkia SoftSkia;
void __swift_bridge__$SoftSkia$_free(void* self);

void* __swift_bridge__$Vec_SoftSkia$new(void);
void __swift_bridge__$Vec_SoftSkia$drop(void* vec_ptr);
void __swift_bridge__$Vec_SoftSkia$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_SoftSkia$pop(void* vec_ptr);
void* __swift_bridge__$Vec_SoftSkia$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_SoftSkia$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_SoftSkia$len(void* vec_ptr);
void* __swift_bridge__$Vec_SoftSkia$as_ptr(void* vec_ptr);

void* __swift_bridge__$SoftSkia$new(void);
void __swift_bridge__$SoftSkia$create(void* self, uintptr_t id);
void __swift_bridge__$SoftSkia$set_rect_attr(void* self, uintptr_t id, uint32_t x, uint32_t y, uint32_t width, uint32_t height, void* style, void* color);
void __swift_bridge__$SoftSkia$set_circle_attr(void* self, uintptr_t id, uint32_t cx, uint32_t cy, uint32_t r, void* style, void* color);
void __swift_bridge__$SoftSkia$set_line_attr(void* self, uintptr_t id, struct __private__FfiSlice p1, struct __private__FfiSlice p2, struct __private__OptionU32 stroke_width, void* color);
void __swift_bridge__$SoftSkia$set_points_attr(void* self, uintptr_t id, struct __private__FfiSlice points, struct __private__OptionU32 stroke_width, void* style, void* color);
void __swift_bridge__$SoftSkia$set_round_rect_attr(void* self, uintptr_t id, uint32_t x, uint32_t y, uint32_t r, uint32_t width, uint32_t height, void* style, void* color);
void* __swift_bridge__$SoftSkia$to_base64(void* self);


