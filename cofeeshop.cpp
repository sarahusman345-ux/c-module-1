#include <iostream>
#include <string>

int main(){
    //variable declarations
    std::string CustomerName = "Sarah Shibu Usman";
    std::string itemname ="Iced Caramel Macchiato";
    int quantity = 2;
    double unitprice =5.50;
    //Constant definition for sales tax
    const double salesTax = 0.08;

    //price calculations
    double subtotal = quantity * unitprice;
    double taxAmount = subtotal * salesTax;
    double totalAmount = subtotal + taxAmount;

    //Output formulated receipt
    std::cout << "====COFEE SHOP RECEIPT====" << std::endl;
    std::cout <<"Coustomer: " << CustomerName << std::endl;
    std::cout <<"Item: " << itemname << std::endl;
    std::cout <<"Quantity: " << quantity << std::endl;
    std::cout <<"Unit Price: $" << unitprice << std::endl;
std::cout <<"---------------------------------" << std::endl;
    std::cout <<"Subtotal: $" << subtotal << std::endl;
    std::cout <<"Sales Tax (8%): $" << taxAmount << std::endl;
    std::cout <<"Total Amount: $" << totalAmount << std::endl;
    std::cout <<"============================" << std::endl;

    return 0;
}