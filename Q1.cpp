#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6] = {
        {123, 55.50},
        {152, 65.00},
        {123, 63.25},
        {105, 65.00},
        {}, {}, 
    };

    cout << "Items with cost greater than 50.00:\n";
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }
    return 0;
}
