#include<iostream>

int main() {
    // Constant bank parameters
    const double ANNUAL_INTEREST_RATE = 0.045; // 4.5% annual interest rate
    const double MINIMUM_BALANCE =100.0;

    //Declaring multiple variables in single lines
    int id1 = 101, id2 = 102;
    double balanceAccount1 = 1500.00, balance2 = 250.50;

    // Calculate interest for Account 1
    double earnedinterest = balanceAccount1 * ANNUAL_INTEREST_RATE;
    double projectedTotal = balanceAccount1 + earnedinterest;
     // Display banking report
     std:: cout <<"----BANK ACCOUNT INITIALIZATION REPORT----" << std::endl;
     std::cout <<"Min required balance: $" << MINIMUM_BALANCE << std::endl;
     std::cout <<"Annual Interest Rate: " << ANNUAL_INTEREST_RATE * 100 << "%" << std::endl;
     std::cout <<std::endl;
     std::cout <<"Account"<<id1 << "Balance: $" << balanceAccount1 << std::endl;
     std::cout <<"Projected 1-Year Earned Interest: $" << earnedinterest << std::endl;
    std ::cout <<"New Projected Total: $" << projectedTotal << std::endl;

    return 0;

}