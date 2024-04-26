#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H

#include "Benefits.h"


class DentalBenefit : public Benefits
{
public:
    DentalBenefit();
    ~DentalBenefit();

    string getBenefit();
    string selectAmount();
    string displayBenefit();
};

#endif // DENTALBENEFIT_H
