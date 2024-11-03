#include <iostream>
using namespace std;

int main()
{
   for(int i = 1; i <= 3; i++)
   {
       cout << "Week" << i << " : ";

     for(int j = 1; j <= 7; j++)
     {
        cout << "Day" << j << " . " ;
     }

     cout << endl;

   }
   
 return 0;
}