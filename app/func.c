#include <stdio.h>
#include <math.h>

#include "func.h"


vr variable(double a, double b,double c) {
    vr res;


    if(a == 0) {
        if(b == 0) {
            res.vr_count = 0;
            return res;
        } else {
            res.vr_count = 1;
            res.x1 = (-1 * c) / b;
            return res;
        }
    }

    double d = pow(b, 2) - 4*a*c;

    if(d < 0.0) {
        res.vr_count = 0;
    } else if(d == 0.0) {
        res.vr_count = 1;
        res.x1 = (-1.0*b) / (2.0*a);
    } else if(d > 0.0) {
        res.vr_count = 2;
        res.x1 = ((-1.0*b) - sqrt(d)) / (2.0*a);
        res.x2 = ((-1.0*b) + sqrt(d)) / (2.0*a);
    }

    return res;
}
