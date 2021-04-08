#include "putsphere.h"
#include <cmath>

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


    for(int i = xc-radius; i < xc+radius; i++){
        for(int j = yc-radius; j < yc+radius; j++){
            for(int k = zc-radius; k < zc+radius; k++){
                d = pow(i - xc,2) + pow(j - yc,2) + pow(k - zc,2);
                if (d <= pow(radius,2)){
                    s.putVoxel(i,j,k);
                }
            }
        }
    }
}
