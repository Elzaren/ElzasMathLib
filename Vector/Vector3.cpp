//
// Created by Elzaren on 01/12/2023.
//

#include "Vector3.h"

Vector3 operator+(const Vector3 &l, const Vector3 &r){
    return {l.x+r.x, l.y+r.y, l.z+r.z};
}

Vector3 operator-(const Vector3 &l, const Vector3 &r){
    return {l.x-r.x, l.y-r.y, l.z-r.z};
}

Vector3 operator*(const Vector3 &l, float f){
    return {l.x*f, l.y*f, l.z*f};
}

Vector3 operator*(const Vector3 &l, Vector3 &r){
    return {l.x*r.x, l.y*r.y, l.z*r.z};
}