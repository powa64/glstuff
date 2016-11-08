#ifndef _LIGHT_H
#define _LIGHT_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef VEC3F_DEFINED
#define VEC3F_DEFINED
typedef struct { float x, y, z; } vec3f_t;
#endif

typedef struct {
    vec3f_t position, color;
    float power;
} light_t;

light_t* make_light(vec3f_t, vec3f_t, float);
void delete_light(light_t*);

#ifdef __cplusplus
}
#endif

#endif
