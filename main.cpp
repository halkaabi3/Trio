//Author: Helal Alkaabi
#include <string>
#include <iostream>

using namespace std;

void greatestToLeast(int&,int&,int&);
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
   

    greatestToLeast(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
  void greatestToLeast(int&Red,int&Green,int&Blue)
  {
    if(Red<Green)
    {
        int tmp=Red;
        Red=Green;
        Green=tmp;
    }
    if(Red<Blue)
    {
        int tmp=Red;
        Red=Blue;
        Blue=tmp;
    }
    if(Green<Blue)
    {
        int tmp=Green;
        Green=Blue;
        Blue=tmp;

    }
    return ;
  }
