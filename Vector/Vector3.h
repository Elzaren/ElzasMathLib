#ifndef VECTOR3_H_
#define VECTOR3_H_


struct Vector3 {
    union {
        struct {
            float x, y, z;
        };
        float v[3];
    };
    inline Vector3() : x(0.0f), y(0.0f), z(0.0f) { }
    inline Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) { }
    inline Vector3(float *fv) : x(fv[0]), y(fv[1]), z(fv[2]) { }
};

#endif //VECTOR3_H_

#define VECTOR3_EPSILON 0.000001f

//define basic operators
Vector3 operator+(const Vector3 &l, const Vector3 &r);
Vector3 operator-(const Vector3 &l, const Vector3 &r);
Vector3 operator*(const Vector3 &l, float f);
Vector3 operator*(const Vector3 &l, Vector3 &r);