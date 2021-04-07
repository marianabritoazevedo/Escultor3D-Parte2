#include "putbox.h"

PutBox::PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_)
{
    x0 = x0_; x1 = x1_;
    y0 = y0_; y1 = y1_;
    z0 = z0_; z1 = z1_;
    r = r_; g = g_; b = b_;
}

void PutBox::draw(Sculptor &s)
{
    s.setColor(r,g,b);
    for (int i = x0; i <= x1; i++){
        for(int j = y0; j <= y1; j++){
            for (int k = z0; k <= z1; k++){
                s.putVoxel(i,j,k);
            }
        }
    }
}
