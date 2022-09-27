#include <iostream>
using namespace std;

int main ()
{
  int Array_x [5]={11,20,30,45,50};
  int Array_y [8]={1,2,3,4,5,6,7,8};
  int CommonElements[13];
  int i, j, n=0;

  for(i=0; i<5; i++)
  {
    for (j=0 ; j<8 ; j ++)
    {
        if (Array_x[i]==Array_y[j])
        {
            CommonElements[i] =Array_x [i];
            cout <<CommonElements[i] << " ";
        }
    }
  }
 if (n==0)
{
    cout << "No Common elements";
}
return 0 ;
}
