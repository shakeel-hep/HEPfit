/*
 * Copyright (C) 2012 SusyFit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#include "SJPsiPhi.h"

double SJPsiPhi::getThValue() {
    return sin(AmpBs(FULLNLO).arg());
}