//
//  main.cpp
//  AG Banking(project2)
//
//  Created by Jose Lara Hernandez on 7/26/23.
//
//  The purpose of this assignment is to get user input for initial investment, montly deposit, annual interest, and calculate balance along with interest gained and display information in months for however many years the user specifies.

#include "agbanking.h"// AG Banking header file
#include <iostream>

using namespace std;

int main() {
    
    double initialInvestment = 0.0;//   ammount first added to account
    double monthlyDeposit = 0.0;//  amount that will be deposited monthly
    double annualInterest = 0.0;// yearly based interest
    
    int numYears = 0;// number of years user wants to see data

    //  prompts for initial data input
    cout << "********** Data Input *******" << endl;
    cout << "Initial Investment Amount: $";
    cin >> initialInvestment;
    
    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;
    
    cout << "Annual Interest (%): ";
    cin >> annualInterest;
    
    cout << "Number of years: ";
    cin >> numYears;

    // Airgead Banking Class
    Banking airgead(initialInvestment, monthlyDeposit, annualInterest, numYears);
    
    //  Displays user input data after calculations are complete to screen
    airgead.displayData();

    //  closes program
    cout << "Press any key to continue . . ." << endl;
    cin.ignore();
    cin.get();
    
    return 0;
    
}//main
