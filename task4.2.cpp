#include <iostream>
using namespace std;

int main()
{
  int i = 1;
  while(i <= 3)
  {
      cout << "Week" << i << " : " ;
      
    int j = 1;
    while(j <= 7)
    {
         cout << "D" << j << " . " ;
        j++;
    }
    cout << endl;
    i++;
  }
  return 0;

}