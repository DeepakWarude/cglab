//Deepak k warude

#include<iostream>
#include<math.h>
using namespace std;

int factorial(int x)
{
int fact=1, i;

for(i=x; i>=1; i--)
{
fact=fact*i;
}
return fact;
}


int main()
{
 
int a, b, c, d, x, choice;

do
{

cout<<"Enter Number a:";
cin>>a;
cout<<"Enter Number b:";
cin>>b;

cout<<"\n\n**MENU**";
cout<<"\n1. Square";
cout<<"\n2. Cube";
cout<<"\n3. Square Root";
cout<<"\n4. Factorial";
cout<<"\n5. Sum";
cout<<"\n6. Product";
cout<<"\n7. Subtraction";
cout<<"\n8. Division";
cout<<"\n9. Exit";

cout<<"\n\nEnter Choice:";
cin>>choice;

switch(choice)
{

case 1:
c=a*a;
d=b*b;
cout<<"\nSquare of a is "<<c;
cout<<"\nSquare of b is "<<d;
break;

case 2:
c=a*a*a;
d=b*b*b;
cout<<"\nCube of a is "<<c;
cout<<"\nCube of b is "<<d;
break;

case 3:
cout<<"\nSquare Root of a is "<<sqrt(a);
cout<<"\nSquare Root of b is "<<sqrt(b);
break;

case 4:
cout << "\nFactorial of " << a << " is " << factorial(a);
cout << "\nFactorial of " << b << " is " << factorial(b);
break;

case 5: c=a+b;
cout<<"\nSum is "<<c;
break;

case 6: c=a*b;
cout<<"\nProduct is "<<c;
break;

case 7: c=a-b;
cout<<"\nSubtraction is "<<c;
break;

case 8: c=a/b;
cout<<"\nDivision is "<<c;
break;

 case 9:
cout << "\nExiting the program.";
break;

default:
cout<<"\nInvalid Choice";
}

cout<<"\nProgram Executed Successfully!";
cout << "\n\n";

} while (choice != 9);

return 0;
}





