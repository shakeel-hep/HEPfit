/* 
 * Copyright (C) 2015 HEPfit Collaboration
 *
 *
 * For the licensing terms see doc/COPYING.
 */

#ifndef LEFTRIGHTSYMMETRICMODELMATCHING_H
#define	LEFTRIGHTSYMMETRICMODELMATCHING_H

#include "gslpp.h"
#include "StandardModelMatching.h"

class LeftRightSymmetricModel;

/**
 * @class LeftRightSymmetricModelMatching
 * @ingroup LeftRightSymmetricModel
 * @brief A class for the matching in the LeftRightSymmetricModel. 
 * @author HEPfit Collaboration
 * @copyright GNU General Public License
 * @details  
 */
class LeftRightSymmetricModelMatching : public StandardModelMatching {
public:
    LeftRightSymmetricModelMatching(const LeftRightSymmetricModel & LeftRightSymmetricModel_i);
    
    /**
     *
     * @brief Updates to new LeftRightSymmetricModel parameter sets.
     * @return
     */
    
    void updateLeftRightSymmetricModelParameters();
    
    std::vector<WilsonCoefficient>& CMbsg();
    
    std::vector<WilsonCoefficient>& CMprimebsg();
    
    std::vector<WilsonCoefficient>& CMBMll();
    
    std::vector<WilsonCoefficient>& CMprimeBMll();

private:
    const LeftRightSymmetricModel & myLeftRightSymmetricModel;
    gslpp::matrix<gslpp::complex> myCKM;
    
    WilsonCoefficient mcbsg, mcprimebsg;
    WilsonCoefficient mcBMll, mcprimeBMll;
    std::vector<WilsonCoefficient> vmcbsg, vmcprimebsg;
    std::vector<WilsonCoefficient> vmcBMll, vmcprimeBMll;
};

#endif	/* LEFTRIGHTSYMMETRICMODELMATCHING_H */
