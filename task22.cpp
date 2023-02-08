#include <iostream>
using namespace std;
main()
{
    float changes[5];
    float final_cost[5];

    cout << "Enter amount of change: ";
    for (int x =0; x <= 3 ; x=x+1)
    {
        cin >> changes[x];
    }
    cout << "Enter price of item: ";
    cin >> changes[4];

   final_cost[0] = changes[0] * 0.25;
   final_cost[1] = changes[1] * 0.10;
   final_cost[2] = changes[2] * 0.05;
   final_cost[3]=  changes[3] * 0.01;
   final_cost[4] = final_cost[0] + final_cost[1] + final_cost[2] + final_cost[3];
   if(final_cost[4] > changes[4])
   {cout << "true";
   }
   else
   {
     cout << "false";
   }
}