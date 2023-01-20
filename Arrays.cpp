#include <iostream>
using namespace std;
int main()
{
   int a[5]={0,1,2,3,4};//Number between braces should exceed the number of elements declared.
   cout<<""<<a[5]<<endl;
   cout<<""<<sizeof(a)<<endl;
   int b[]={0,69,45};//If we omit the size of array 
   b[2]=96;// now the value of b[2] gets changed.
   cout<<"the value of b[2] is "<<b[2]<<endl;
   int x[2][3] = {{2, 3, 4}, {8, 9, 10}};
    return 0;
}
