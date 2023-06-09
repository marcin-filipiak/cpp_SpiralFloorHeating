#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{


    float delta, x;
     float a,b,c,d;
     float sum = 0;

     cout<<"pipe spacing:\n";
     cin>>delta;

     cout<<"lenght wall A:\n";
     cin>>a;
     cout<<"lenght wall B:\n";
     cin>>b;
     cout<<"wall C=A\n";
     c=a;
     cout<<"wall D=B (the pipes enter the room by wall D)\n";
     d=b;

     //wall A
     x=0;
     x = a - delta;
     sum = x;
     x = x - delta;
     sum = sum + x;
     do {
         x = x - delta * 2;
         sum = sum + x;
     }while(x-delta>0);

     //wall B
     x = b - delta * 2;
     sum = sum + x;
     do {
         x = x - delta * 2;
         sum = sum + x;
     }while(x-delta>0);


     //strona C
     x = c - delta * 2;
     sum = sum + x;
     do {
         x = x - delta * 2;
         sum = sum + x;
     }while(x-delta>0);

     //wall D
     x = d - delta * 4;
     sum = sum + x;
     do {
         x = x - delta * 2;
         sum = sum + x;
     }while(x-delta>0);


     cout <<"\n\nPipe lenght: "<<sum<<"\n\n";


    return 0;
}
