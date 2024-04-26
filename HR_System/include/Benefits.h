#ifndef BENEFITS_H
#define BENEFITS_H

#include<bits/stdc++.h>
using namespace std;

class Benefits
{
public:
    string planType;
    string amount;

    Benefits();
    ~Benefits();

    string getPlanType();
    string getAmount();

    virtual string getBenefit();
    virtual string displayBenefit();
};

#endif // BENEFIT_H
