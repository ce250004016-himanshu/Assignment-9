#include <iostream>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];

    cout << "Enter month name and sales amount for 12 months:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << " name: ";
        cin >> sales[i].month;
        cout << "Sales amount: ";
        cin >> sales[i].amount;
    }

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > sales[maxIndex].amount)
            maxIndex = i;
        if (sales[i].amount < sales[minIndex].amount)
            minIndex = i;
    }

    cout << "\nMonth with maximum sales: " << sales[maxIndex].month
         << " (" << sales[maxIndex].amount << ")\n";
    cout << "Month with minimum sales: " << sales[minIndex].month
         << " (" << sales[minIndex].amount << ")\n";

    return 0;
}
