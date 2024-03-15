#include <iostream>

using namespace std;

int main()
{
   double merchandise_cost,employees_salary, storerent, electricitycost, TotalExpenses, profit , markedUpPrice;

  cout<<"Enter the total amount of merchandisecost";
  cin>>merchandise_cost;

  cout<<"Enter amount of storerent";
  cin>>storerent;

  cout<<"Enter the amount of employees_salary";
  cin>>employees_salary;

  cout<<"Enter the total amount of electricitycost";
  cin>>electricitycost;

  profit=0.10;
 TotalExpenses= merchandise_cost + employees_salary +storerent + electricitycost;

     markedUpPrice = (merchandise_cost+profit)/ 0.15;

     double markupAmount = markedUpPrice -merchandise_cost;

      cout << "The merchandise makeup is" << markupAmount << endl;

    return 0;
}
