#include "oop9.h"

int main() {
    double x;
    cout << "enter worth:";
    cin >> x;

    Property** arr = new Property * [7];

    for (int i = 0; i < 3; i++) {
        arr[i] = new Apartment(x);
    };

    for (int i = 3; i < 5; i++) {
        arr[i] = new Car(x);
    };

    for (int i = 5; i < 7; i++) {
        arr[i] = new CountryHouse(x);
    };

    for (int i = 0; i < 7; i++) {
        cout << arr[i]->tax() << endl;
    }

    for (int i = 0; i < 7; i++) {
        delete arr[i];
    }

}
