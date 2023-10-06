//
//  agbanking.cpp
//  AG Banking(project2)
//
//  Created by Jose Lara Hernandez on 7/27/23.
//
#include "agbanking.h"//    AG Banking header file
#include <iostream>
#include <iomanip>

using namespace std;

Banking::Banking(double initialInvestment, double monthlyDeposit, double annualInterest, int numYears)
    : InitialInvestment(initialInvestment), MonthlyDeposit(monthlyDeposit), AnnualInterest(annualInterest), NumYears(numYears) {}

//  displays all calculated data using chart to user
void Banking::displayData() const {
    double openingAmount = InitialInvestment;
    double depositedAmount = MonthlyDeposit;
    double total = openingAmount + depositedAmount;
    double interest = 0.0;
    double closingBalance = 0.0;

    //  Displays column information for our table being displayed to user
    cout << "Table below:" << endl;
    cout << setw(5) << "Month" << setw(18) << "Opening Amount" << setw(18) << "Deposited Amount"
         << setw(14) << "$ Total" << setw(14) << "$ Interest" << setw(18) << "Closing Balance"
         << endl;

    // loop to itterate through appropriate months set by user and calculate proper quatities
    for (int month = 1; month <= NumYears * 12; ++month) {
        interest = calculateYearEndInterest(openingAmount);
        closingBalance = calculateYearEndBalance(total, interest);

        //  formating to display information to user via chart
        cout << setw(5) << month << setw(18) << fixed << setprecision(2) << openingAmount
             << setw(18) << depositedAmount << setw(14) << setprecision(2) << total
             << setw(14) << setprecision(2) << interest << setw(18) << setprecision(2) << closingBalance << endl;

        openingAmount = closingBalance;
        total += depositedAmount + interest;
        
    }//for loop
}//void Banking::displayData()

//  calculates Closeing Balance for each month to be displayed in chart using for loop above
double Banking::calculateYearEndBalance(double total, double interest) const {
    return total + interest;
}// double Banking::calculateYearEndBalance()

//  calculates Interest for each month to be displayed in chart using for loop above
double Banking::calculateYearEndInterest(double openingAmount) const {
    return (openingAmount + MonthlyDeposit) * (AnnualInterest / 100.0) / 12.0;
}// double Banking::calculateYearEndInterest()
