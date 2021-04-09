#include "putsphere.h"

PutSphere::PutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_)
{
    xc = xc_;
    yc = yc_;
    zc = zc_;
    radius = radius_;
    r = r_;
    g = g_;
    b = b_;
}

void PutSphere::draw(Sculptor &s)
{
    s.setColor(r,g,b);
    double d;
    d = radius*radius;
    for(int i = xc-radius; i < xc+radius; i++){
        for(int j = yc-radius; j < yc+radius; j++){
            for(int k = zc-radius; k < zc+radius; k++){
                if (static_cast<double>(i-xc)*static_cast<double>(i-xc) + static_cast<double>(j-yc)*static_cast<double>(j-yc) + static_cast<double>(k-zc)*static_cast<double>(k-zc) < d){
                    s.putVoxel(i,j,k);
                }
            }
        }
    }
}
