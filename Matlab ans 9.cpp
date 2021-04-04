//ans no 9
#include<bits/stdc++.h>
#define f1(x,y,z)  (3-5*y-2*z)/10
#define f2(x,y,z)  (3+4*x-3*z)/10
#define f3(x,y,z)  (-3+x+6*y)/10

using namespace std;
 
int main()
{
 double x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int step=1;
 cout<< setprecision(6)<< fixed;
 cout<<"Enter tolerable error: ";
 cin>>e;
 
 cout<< endl<<"Count\tx\t\ty\t\tz"<< endl;
 do
 {
 
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  cout<< step<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<< endl;
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);
 
  step++;
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);
 
 cout<< endl<<"Solution: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
 return 0;
}