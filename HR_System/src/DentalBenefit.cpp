#include "DentalBenefit.h"

DentalBenefit::DentalBenefit()
{
    //ctor
}

DentalBenefit::~DentalBenefit()
{
    //dtor
}

string DentalBenefit::getBenefit()
{
    Benefits::getBenefit();
}

string DentalBenefit::selectAmount()
{
    if(planType == "Silver Plan")
        amount = "10% Coverage";
    else if(planType == "Gold Plan")
        amount = "20% Coverage";
    else if(planType == "Platinum Plan")
        amount = "30% Coverage";
    else
        amount = "No Coverage";
    return amount;
}
string DentalBenefit::displayBenefit()
{
    ostringstream dispBenefit;
    dispBenefit << "\n-Employee's Dental Plan Type: " << planType;
    dispBenefit << "\n-Amount of Coverage: " << amount;
    return dispBenefit.str();
}
