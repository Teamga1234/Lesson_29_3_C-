#include "Shop.h"
int main() {
    Shop myShop;
    Overcoat a("Jacket", 0, "M", 2000);
    Overcoat b("Coat", 1, "L", 500);
    Overcoat c("Jacket", 2, "S", 890);


    myShop.addOvercoat(a);
    myShop.addOvercoat(b);
    myShop.addOvercoat(c);

    cout << "All Overcoats:\n";
    myShop.showAll();
    cout << "\n---------------------\n";
    myShop.sortByPrice();
    cout << "---------------------\n";
    myShop.showAll();

    cout << "\n---------------------\n";
    vector<Overcoat> womenCoats = myShop.findByType(1);
    cout << "\nWomen Overcoats:\n";
    for (const auto& coat : womenCoats) {
        cout << coat << endl;
    }
    cout << "\n---------------------\n";
    myShop.editSizeByIndex(1, "L");
    myShop.showAll();
    cout << "\n---------------------\n";
    myShop.removeOvercoat(1);
    myShop.showAll();

    return 0;
}
