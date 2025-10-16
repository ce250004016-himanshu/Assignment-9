#include <iostream>
using namespace std;

struct Color {
    int red, green, blue;
};

int main() {
    Color colors[5] = {
        {125, 153, 230},
        {0, 128, 235},
        {40, 73, 120},
        {10, 25, 30},
        {254, 204, 5}
    };

    
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    
    cout << "Updated RGB values:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": ("
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << ")\n";
    }
    return 0;
