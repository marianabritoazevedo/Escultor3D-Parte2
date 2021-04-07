#include "cutvoxel.h"

CutVoxel::CutVoxel(int x_, int y_, int z_, float r_, float g_, float b_)
{
   x = x_;
   y = y_;
   z = z_;
   r = r_;
   g = g_;
   b = b_;
}

void CutVoxel::draw(Sculptor &s)
{
    s.cutVoxel(x,y,z);
}
