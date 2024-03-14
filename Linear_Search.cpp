#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int array[5];
    int data;
    bool found = false;
    cout << "Enter the array:\n";
    for (int k = 0; k < 5; k++) {
        cin >> array[k];
    }
    cout << "Enter the data to search: ";
    cin >> data;
    for (int i = 0; i < 5; i++) {
        if (array[i] == data) {
            cout << "Data found at position " << i + 1 << endl;
            found = true;
        }
    }
    if (found==false) {
        cout << "Data not found in the array." << endl;
    }
    return 0;
}
