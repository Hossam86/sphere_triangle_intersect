#include "sphere.h"
sphere::sphere(/* args */)
{
    center = v3(0, 0, 0);
    radius = 0;
}

sphere::sphere(const v3 &c, double r)
{
    radius = r;
    center = c;
}

sphere::~sphere()
{
}

sphere::sphere(const sphere & rhs)
{
    radius=rhs.radius;
    center=rhs.center;
}

sphere& sphere::operator=(const sphere &rhs)
{
    radius=rhs.radius;
    center=rhs.center;
    return *this;
}

const v3& sphere::getCenter() const
{
    return this->center;
}

double sphere::getRaduis()
{
 return this->radius;
}
