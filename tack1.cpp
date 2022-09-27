#include <iostream>
using namespace std ;

int main ()
{
    int arr_x[] = {10,20,30,40,50};
    int arr_y[] = {1,2,3,4,5,6,7,8};
    int MergeArray[15];

    int i ;
    for (i =0;i<5;i++)
    {
        MergeArray[i] = arr_x[i];
    }
    for (i=0; i<8; i++)
    {
         MergeArray[i+5] = arr_y[i];
    }
     for (i=12;i>0;i--)
     {
         cout << MergeArray[i]<< " ";
     }

      return 0;

}
