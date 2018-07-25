#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "v3.h"
#include <iostream>
#include <vector>
#include "lineSegment.h"
#include "Plane.h"

class triangle
{
  public:
	triangle(const v3 &n, const v3 &p0, const v3 &p1, const v3 &p2);
	~triangle();
	triangle &operator-=(const v3 &rhs);
	v3 &getNormal();
	void setNormal(const v3 &N);
	//void transform(glm::mat4 & mat);
	int intersectPlane(const Plane &p, lineSegment &seg) const;
	void getDerived();

  private:
	v3 p[3];
	v3 normal;

	v3 U2;
	v3 U0;
	v3 U1;
	v3 Q0;
	v3 Q1;
	v3 Q2;
	v3 E0;
	v3 E1;
	v3 E2;
	v3 N0;
	v3 N1;
	v3 N2;
};
#endif
