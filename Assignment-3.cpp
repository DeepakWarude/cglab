//Deepak k warude
#include<iostream>
using namespace std;

class Employee
{
private:
int salary;
int workhours;

public:
void getinfo()
{
cout<<"\nEnter Your Salary:";
cin>>salary;
cout<<"Your Salary Is: "<<salary;

cout<<"\nEnter Your Work Hours Per Day:";
cin>>workhours;
cout<<"Your Work Hours Are: "<<workhours<<endl;
}

void AddSal()
{
if(salary<50000)
{
salary=salary+10000;
cout<<"\nYour New Salary Based On Your Current Salary Is: "<<salary;
}

else
{
cout<<"\nYour Salary Cannot Increment Based On Your Current Salary";
}
}

void AddWork()
{
if(workhours>6)
{
salary=salary+1000;
cout<<"\nYour New Salary Based on Your Workhours Is: "<<salary;
}

else
{
cout<<"\nYour Salary Cannot Increment Based On Your Workhours";
}
}
};

int main()
{
int n,i;
cout<<"Enter Number of Employees:";
cin>>n;

for(i=1;i<=n;i++)
{
cout<<"\nCalculations For Employee: "<<i<<endl;
Employee gi;
gi.getinfo();
gi.AddSal();
gi.AddWork();

cout<<"\n***This Is Your Final Salary***"<<endl;
}

return 0;
}





