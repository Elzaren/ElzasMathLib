#include "Vector3.h"


Vector3 operator+(const Vector3 &l, const Vector3 &r) {
    return {l.x + r.x, l.y + r.y, l.z + r.z};
}

Vector3 operator-(const Vector3 &l, const Vector3 &r) {
    return {l.x - r.x, l.y - r.y, l.z - r.z};
}

Vector3 operator*(const Vector3 &l, float f) {
    return {l.x * f, l.y * f, l.z * f};
}

float dot(const Vector3 &l, const Vector3 &r) {
    return l.x * r.x + l.y * r.y + l.z * r.z;
}

Vector3 cross(const Vector3 &l, const Vector3 &r) {
    return {l.y * r.z - (l.z * r.y), l.z * r.x - (l.x * r.z), l.x * r.y - (l.y * r.x)};
}

std::ostream &operator<<(std::ostream &os, const Vector3 &v) {
    os << '(' << v.x << ',' << v.y << ',' << v.z << ')';
    return os;
}