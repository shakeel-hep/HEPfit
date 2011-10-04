/* 
 * File:   ClausenFunctions.cpp
 * Author: mishima
 */

#include <cstdlib>
#include <cmath>
#include <gsl/gsl_sf.h>
#include "ClausenFunctions.h"


ClausenFunctions::ClausenFunctions() {
}

//ClausenFunctions::ClausenFunctions(const ClausenFunctions& orig) {
//}

ClausenFunctions::~ClausenFunctions() {
}


////////////////////////////////////////////////////////////////////////

double ClausenFunctions::Cl2(const double phi) const {
    return ( gsl_sf_clausen(phi) );    
}

double ClausenFunctions::Cl3(const double phi) const {
    if (phi < 0.0 || phi > M_PI) 
        throw "phi is out of range in ClausenFunctions::Cl3()";
    
    if (phi==0.0) return ( gsl_sf_zeta_int(3) );
    
    double TMP = 0.0, l_double = 0.0, lfactorial = 1.0, sign = 1.0;
    for (int l=2; l<19; l++) {
        l_double = (double)l;
        lfactorial *= l_double;
        if (l%4) { sign = - 1.0; } else { sign = 1.0; }
        TMP += B[l]*pow(phi,l_double)/l_double/(l_double + 1.0)/(l_double + 2.0)
               /lfactorial * sign;
    }
    return ( gsl_sf_zeta_int(3) - phi*phi*(3.0/4.0 - log(phi)/2.0 - TMP) );
}





