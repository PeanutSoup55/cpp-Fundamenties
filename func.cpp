#include <iostream>
using namespace std;

//func that computes sales tax on the subtotal
double computeTax(double subTotal);

const double SALES_TAX = 0.075;


int main(){
    double tax = 10.0;
    double total = tax + computeTax(tax);

    cout << total << endl;
    return 0;
}

double computeTax(double tax){
    return tax * SALES_TAX;
}

