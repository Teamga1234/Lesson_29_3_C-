#pragma once
#include "Overcoat.h"
#include <vector>
#include <algorithm>
class Shop {
private:
    vector<Overcoat> shop;

public:
    
    void addOvercoat(const Overcoat& coat) {
        shop.push_back(coat);
    }

    
    void removeOvercoat(int index) {
        if (index >= 0 && index < shop.size()) {
            shop.erase(shop.begin() + index);
        }
        else {
            cout << "Error index\n";
        }
    }


    void editSizeByIndex(int index, const string& newSize) {
        if (index >= 0 && index < shop.size()) {
            shop[index].setSize(newSize);
        }
        else {
            cout << "Error: Invalid index!\n";
        }
    }

    
    vector<Overcoat> findByType(int type) const {
        vector<Overcoat> tmp;
        for (const auto& coat : shop) {
            if (coat.getType() == type) {
                tmp.push_back(coat);
            }
        }
        return tmp;
    }

    void sortByPrice() {
        sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat& b) {
            return a.getPrice() < b.getPrice();
            });
    }

    
    void showAll () const {
        for (const auto& coat : shop) {
            cout << coat << endl;
        }
    }
};

