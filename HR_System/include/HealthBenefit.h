#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H

#include "Benefits.h"


class HealthBenefit : public Benefits
{
public:
    HealthBenefit();
    ~HealthBenefit();

    string getBenefit();
    string selectAmount();
    string displayBenefit();
};

#endif // HEALTHBENEFIT_H
