//Deepak k warude
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

class ExceptionHandling {
    int age, income;
    char city[20];
    char IsVehicle;
    
public:
    friend istream &operator>>(istream &din, ExceptionHandling &e) {
        cout << "\nEnter Age Of The Person: ";
        din >> e.age;
        cout << "\nEnter Income: ";
        din >> e.income;
        cout << "\nEnter City: ";
        din >> e.city;
        cout << "\nDoes The User Have A Vehicle (Y/N): ";
        din >> e.IsVehicle;
        return din;
    }
    
    friend ostream &operator<<(ostream &dout, ExceptionHandling &e) {
        vector<string> errors;

        // Check conditions and collect error messages
        if (e.age < 18 || e.age > 55) {
            errors.push_back("User's age should be between 18 and 55!");
        }
        if (e.income < 50000 || e.income > 100000) {
            errors.push_back("User should have an income between Rs. 50,000 - Rs. 1,00,000 per month!");
        }
        if (strcmp(e.city, "PUNE") != 0 && strcmp(e.city, "Pune") != 0 &&
            strcmp(e.city, "pune") != 0 && strcmp(e.city, "MUMBAI") != 0 &&
            strcmp(e.city, "Mumbai") != 0 && strcmp(e.city, "mumbai") != 0 &&
            strcmp(e.city, "CHENNAI") != 0 && strcmp(e.city, "Chennai") != 0 &&
            strcmp(e.city, "chennai") != 0 && strcmp(e.city, "BANGALORE") != 0 &&
            strcmp(e.city, "Bangalore") != 0 && strcmp(e.city, "bangalore") != 0) {
            errors.push_back("User should be from Pune/Mumbai/Bangalore/Chennai!");
        }
        if (e.IsVehicle == 'n' || e.IsVehicle == 'N') {
            errors.push_back("User should have a 4-wheeler!");
        }

        // Output errors if any
        if (!errors.empty()) {
            dout << "\nExceptions Caught:";
            for (const auto& error : errors) {
                dout << "\n- " << error;
            }
        } else {
            dout << "\nData is valid and accepted!";
        }

        return dout;
    }
};

int main() {
    int ch;
    ExceptionHandling e1;
    cout << "\n============ Exception Handling ===============";
    do {
        cout << "\n\n1. Insert Data\n2. Display Data\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cin >> e1;
                break;
            case 2:
                cout << e1;
                break;
            case 3:
                break;
            default:
                cout << "\nEnter a correct choice";
        }
    } while (ch != 3);
    return 0;
}





