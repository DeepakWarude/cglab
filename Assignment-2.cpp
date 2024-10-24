//Deepak k warude
#include <iostream>
using namespace std;

class Grade 
{
public:
    void showgrade() 
{
int marks;

for (int i = 1; i <= 5; i++) 
{
cout << "\n\nEnter Marks Of Student " << i << ": ";
cin >> marks;

if (marks >= 90 && marks <= 100) 
{
cout << "You Have O Grade\n";
} 

else if (marks >= 81 && marks < 90) 
{
cout << "You Have A Grade\n";
} 

else if (marks >= 71 && marks <= 80)
{
cout << "You Have B Grade\n";
} 

else if (marks >= 61 && marks <= 70) 
{
cout << "You Have C Grade\n";
} 

else if (marks >= 51 && marks <= 60) 
{
cout << "You Have D Grade\n";
} 

else if (marks >= 41 && marks <= 50)
{
cout << "You Are Pass\n";
} 

else if (marks <= 40) 
{
cout << "You Are Failed\n";
} 

else 
{
cout << "Invalid Marks\n";
}
}
}
};

int main() 
{
Grade g;
g.showgrade();

return 0;
}





