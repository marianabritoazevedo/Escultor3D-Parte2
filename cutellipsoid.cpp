#include "cutellipsoid.h"
#include <cmath>

CutEllipsoid::CutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_, float r_, float g_, float b_)
{
    xc = xc_; yc = yc_; zc = zc_;
    rx = rx_; ry = ry_, rz = rz_;
    r = r_; g = g_; b = b_;
}

void CutEllipsoid::draw(Sculptor &s)
{
    double d;
    if(rx == 0){
        for(int j=yc-ry; j<=yc+ry; j++){
            for(int k=zc-rz; k<=zc+rz; k++){
                d = pow(j-yc, 2)/pow(ry, 2) + pow(k-zc, 2)/pow(rz, 2);
                if(d <=1){
                    s.cutVoxel(xc, j, k);
                }
             }
         }
    }else if(ry == 0){
        for(int i=xc-rx; i<=xc+rx; i++){
            for(int k=zc-rz; k<=zc+rz; k++){
                d = pow(i-xc, 2)/pow(rx, 2) + pow(k-zc, 2)/pow(rz, 2);
                if(d <=1){
                    s.cutVoxel(i,yc,k); //habilita os Voxels no intervalo
                }
            }
         }

    }else if(rz == 0){
        for(int i=xc-rx; i<=xc+rx; i++){
            for(int j=yc-ry; j<=yc+ry; j++){
                d = pow(i-xc, 2)/pow(rx, 2) + pow(j-yc, 2)/pow(ry, 2);
                if(d <=1){
                    s.cutVoxel(i, j, zc); //habilita os Voxels no intervalo
                }
            }
         }
    }else{
        for(int i = xc-rx; i < xc+rx; i++){
            for(int j = yc-ry; j < yc+ry; j++){
                for(int k = zc-rz; k < zc+rz; k++){
                    d = pow(i - xc,2)/pow(rx, 2) + pow(j - yc,2)/pow(ry, 2) + pow(k - zc,2)/pow(rz, 2);
                    if (d <= 1){
                        s.cutVoxel(i,j,k);
                    }
                }
            }
        }
    }
}
