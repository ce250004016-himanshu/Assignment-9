#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6] = {
        {101, 45.50},
        {102, 75.00},
        {103, 60.25},
        {104, 30.00},
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
