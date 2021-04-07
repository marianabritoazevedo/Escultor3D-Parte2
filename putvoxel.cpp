#include "putvoxel.h"

PutVoxel::PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_){
    x = x_;
    y = y_;
    z = z_;
    r = r_;
    g = g_;
    b = b_;
}

void PutVoxel::draw(Sculptor &s)
{
    s.setColor(r,g,b);
    s.putVoxel(x,y,z);
}


