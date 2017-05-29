#include <iostream>
#include <stdio.h>

using namespace std;


typedef struct
{
  int iNbr;
  double dNbr;
}stInformation;

int main()
{
  cout<<"Hello, world !"<<endl;
  cout<<"This is my first C++ example !"<<endl;

  int iNbr = 10;
  for(int i = 0; i < iNbr; ++i)
  {
    cout<<"i = "<<i;
    cout<<"This is the master "<<endl;

    cout<<"This is the branch_1"<<endl;

    cout<<"This is the branch_2"<<endl;

    cout<<""<<endl;

//    printf("this is c format = %d\n", i);
  }

  return 0;
}
