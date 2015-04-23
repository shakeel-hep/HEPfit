/* 
 * Copyright (C) 2014 SusyFit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#ifndef THOBSFACTORY_H
#define	THOBSFACTORY_H

#include <boost/functional/factory.hpp>
#include <boost/function.hpp>
#include <StandardModel.h>
#include <ThObservable.h>
#include <map>

class ThObsFactory {
public:

    ThObsFactory();
    
    ThObsFactory(const ThObsFactory& orig);

    virtual ~ThObsFactory()
    {
    };

    void addObsToFactory(const std::string name, boost::function<ThObservable*(const StandardModel&) >);

    /**
     * @brief This method checks for the existence of an observable of a specific name in the map
     * thobs and returns a pointer to the particular ThObservable.
     * @param[in] name the name of the observable
     * @param[in] model 
     * @return a pointer to an object of the type ThObservable
     */
    ThObservable* CreateThMethod(const std::string& name, const StandardModel& model) const;


private:
    std::map<std::string, boost::function<ThObservable* (const StandardModel &) > > obsThFactory;
};

#endif	/* THOBSFACTORY_H */
