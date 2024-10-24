//Deepak k warude
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    string fullName;
    
    cout << "Enter your full name: ";
    getline(cin, fullName);
    
    istringstream iss(fullName);
    vector<string> nameParts;
    string part;
    
    while (iss >> part) 
    {
        nameParts.push_back(part);
    }
    
    if (nameParts.size() < 2) 
    {
        cout << "Invalid input. Please enter at least a first and last name." << endl;
        return 1;
    }
    
    cout << nameParts[0][0] << ". ";
    
    for (size_t i = 1; i < nameParts.size() - 1; ++i) 
    {
        cout << nameParts[i][0] << ". ";
    }
    
    cout << nameParts.back() << endl;
        
    return 0;
}





