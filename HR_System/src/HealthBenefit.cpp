#include "HealthBenefit.h"

HealthBenefit::HealthBenefit()
{
    //ctor
}

HealthBenefit::~HealthBenefit()
{
    //dtor
}

string HealthBenefit::getBenefit()
{
    Benefits::getBenefit();

    return getBenefit();
}

string HealthBenefit::selectAmount()
{
    if(planType == "Silver Plan")
        amount = "20% Coverage";
    else if(planType == "Gold Plan")
        amount = "30% Coverage";
    else if(planType == "Platinum Plan")
        amount = "40% Coverage";
    else
        amount = "No Coverage";
    return amount;
}
string HealthBenefit::displayBenefit()
{
    ostringstream dispBenefit;
    dispBenefit << "\n-Employee's Health Plan Type: " << planType;
    dispBenefit << "\n-Amount of Coverage: " << amount;
    return dispBenefit.str();
}
