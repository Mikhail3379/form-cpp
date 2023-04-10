#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string address;
    int age;
    string email;
    string phone;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your email: ";
    cin >> email;

    cout << "Enter your phone number: ";
    cin >> phone;

    cout << "\n\nName: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Age: " << age << endl;
    cout << "Email: " << email << endl;
    cout << "Phone Number: " << phone << endl;

    return 0;
}
