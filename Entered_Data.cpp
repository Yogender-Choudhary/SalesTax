#include "Entered_Data.hpp"
vector<Item> basket;
vector<string> order;
void Entered_Data:: checkEntry(string str){
     order.push_back(str.substr(0, str.length() - 8));
        stringstream strs(str);
        string temp;
        ItemCategory itemCategory = ItemCategory::General;
        bool imported = false;
        while (strs >> temp)
        {
            if (temp == "imported")
                imported = true;
            if (temp == "chocolate" or temp == "chocolates")
                itemCategory = ItemCategory::Food;
            else if (temp == "pill"||temp=="pills")
                itemCategory = ItemCategory::Medical;
            else if (temp == "book"||temp=="books")
                itemCategory = ItemCategory::Book;
        }
        double price = stod(temp);
        basket.push_back(Item(itemCategory, price, imported));
}
int Entered_Data:: basketSize(){
    return basket.size();
}
int Entered_Data:: orderSize(){
    return order.size();
}
string Entered_Data:: orderdetails(int i){
    return order[i];
}
Item Entered_Data:: basketdetails(int i){
    return basket[i];
}