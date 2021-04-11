#include <bits/stdc++.h>
#include "Item.hpp"
#include "Tax.hpp"
#include "Entered_Data.hpp"
#include "getFinalCost.hpp"
using namespace std;
getFinalCost getfinalcost;
Tax tax;
/* I have shifted all the logic in EntereD_Data class and getFinalCost class and 
defined different functions for different jobs and using this data accordingly.
*/
Entered_Data checkentry;
void printReceipt()
{
    cout << "------------------------------------------RECEIPT-----------------------------------------" << endl;
    for (int i = 0; i < checkentry.orderSize(); i++)
        cout << checkentry.orderdetails((i)) << ": " << getfinalcost.getPrice(i) << "\n";
    cout << "Sales Taxes: " << getfinalcost.getfinalprice("salesTax") << "\n";
    cout << "Total: " << getfinalcost.getfinalprice("total") << "\n";
    cout << "------------------------------------------------------------------------------------------" << endl;
}
int main()
{
    string str;
    cout << "Please read instructions first:\n Enter orders line by line\n Press S to stop.\n Enter Your orders here:" << endl;
    while (getline(cin, str))
    {
        if (str == "s" || str == "S")
            break;
        checkentry.checkEntry(str);
    }
    printReceipt();
    return 0;
}