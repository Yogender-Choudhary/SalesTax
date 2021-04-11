#ifndef Entered_Data_H
#define Entered_Data_H
#include <bits/stdc++.h>
#include <string>
#include "Item.hpp"
#include "Tax.hpp"
using namespace std;
class Entered_Data
{
public:   
    void checkEntry(string str);
    int basketSize();
    int orderSize();
    string orderdetails(int i);
    Item basketdetails(int i);
};
#endif