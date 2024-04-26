#//Kian Academy
#include "Benefits.h"

Benefits::Benefits()
{

}

Benefits::~Benefits()
{

}

string Benefits::getBenefit()
{
    cout << "(1) Silver Plan.\n"
         << "(2) Gold Plan.\n"
         << "(3) Platinum Plan.\n"
         << "Enter Plan Type: ";
    cin >> planType;
    if(planType == "1")
        planType = "Silver Plan";
    else if(planType == "2")
        planType = "Gold Plan";
    else if(planType == "3")
        planType = "Platinum Plan";

    if(planType == "Silver Plan")
        amount = "20% Coverage";
    else if(planType == "Gold Plan")
        amount = "30% Coverage";
    else if(planType == "Platinum Plan")
        amount = "40% Coverage";
    else
        amount = "No Coverage";
}

string Benefits::getPlanType()
{
    return planType;
}

string Benefits::getAmount()
{
    return amount;
}

string Benefits::displayBenefit()
{
    if(planType == "Silver Plan")
        amount = "20% Coverage";
    else if(planType == "Gold Plan")
        amount = "30% Coverage";
    else if(planType == "Platinum Plan")
        amount = "40% Coverage";
    else
        amount = "No Coverage";
    ostringstream dispBenefit;
    dispBenefit << "\n-Employee's Plan Type: " << getPlanType();
    dispBenefit << "\n-Amount of Coverage: " << getAmount();
    return dispBenefit.str();
}
