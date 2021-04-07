#include "cutvoxel.h"

CutVoxel::CutVoxel(int x_, int y_, int z_)
{
   x = x_;
   y = y_;
   z = z_;
}

void CutVoxel::draw(Sculptor &s)
{
    s.cutVoxel(x,y,z);
}
