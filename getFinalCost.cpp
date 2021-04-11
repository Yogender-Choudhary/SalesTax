#include "getFinalCost.hpp"
Entered_Data checkData;
Tax tax1;
double getFinalCost:: getPrice(int i){
    return (checkData.basketdetails(i).getPrice() + tax1.getTaxOnItem(checkData.basketdetails(i)));
}
double getFinalCost:: getfinalprice(string s){
    double salestax = 0.0, total = 0.0;
       for (int i=0; i<checkData.basketSize();i++)
    {
        total += checkData.basketdetails(i).getPrice();
        salestax += tax1.getTaxOnItem(checkData.basketdetails(i));
    }
    total += salestax;
    if(s=="salesTax")
    return salestax;
    if(s=="total")
    return total;
}