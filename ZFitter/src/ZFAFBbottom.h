/* 
 * Copyright (C) 2012 SusyFit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#ifndef ZFAFBBOTTOM_H
#define	ZFAFBBOTTOM_H

#include <ThObservable.h>
#include "ZFitter.h"


class ZFAFBbottom : public ThObservable {
public:

    /**
     * @brief ZFAFBbottom constructor
     * @param[in] ZF_i an object of ZFitter class
     */
    ZFAFBbottom(const ZFitter& ZF_i) : ThObservable(ZF_i), myZF(ZF_i) {};

    /**
     * @return the forward-backward asymmetry of the b-bar channel
     */
    double getThValue();

    
private:
    const ZFitter& myZF;
};

#endif	/* ZFAFBBOTTOM_H */
