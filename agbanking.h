//
//  agbanking.h
//  AG Banking(project2)
//
//  Created by Jose Lara Hernandez on 7/26/23.
//
#pragma once
#ifndef agbanking_h
#define agbanking_h

#include <string>

class Banking {// AG Banking class
public:
    Banking(double initialInvestment, double monthlyDeposit, double annualInterest, int numYears);
    void displayData() const;

private:
    double InitialInvestment;
    double MonthlyDeposit;
    double AnnualInterest;
    int NumYears;

    double calculateYearEndBalance(double openingAmount, double interest) const;
    double calculateYearEndInterest(double openingAmount) const;
    
};

#endif /* agbanking_h */
