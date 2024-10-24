//Deepak k warude

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    string address;
    string telephoneNumber;
    string mobileNumber;
    bool isHeadOfFamily;

public:

    Person(const string& name, const string& address, const string& telephoneNumber, const string& mobileNumber, bool isHeadOfFamily)
        : name(name), address(address), telephoneNumber(telephoneNumber),
          mobileNumber(mobileNumber), isHeadOfFamily(isHeadOfFamily) {}

    static void header()
    {
        const int columnWidth = 25;

        cout << left << setw(columnWidth) << "Name" 
             << setw(columnWidth) << "Address" 
             << setw(columnWidth) << "Telephone Number" 
             << setw(columnWidth) << "Mobile Number" 
             << setw(columnWidth) << "Head of Family" 
             << endl;

        cout << string(columnWidth, '-') 
             << string(columnWidth, '-') 
             << string(columnWidth, '-') 
             << string(columnWidth, '-') 
             << string(columnWidth, '-') 
             << endl;
    }    

    void displayInfo() const
    {
        const int columnWidth = 25;
        cout << left << setw(columnWidth) << name
             << setw(columnWidth) << address
             << setw(columnWidth) << telephoneNumber
             << setw(columnWidth) << mobileNumber
             << setw(columnWidth) << (isHeadOfFamily ? "Yes" : "No") 
             << endl;
    }
};

int main() 
{
    Person::header();
    
    Person person1("Guddu", "Mirzapur", "0253-789645", "9045622334", true);
    Person person2("Sharad", "Jaunpur", "0253-989954", "6778995567", false);
    Person person3("Kaleen", "Mirzapur", "0253-457858", "5435546663", true);

    person1.displayInfo();
    person2.displayInfo();
    person3.displayInfo();
    
    return 0;
}





