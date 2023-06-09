#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{


    float delta, x, farea;
     float a,b,c,d;
     float sum = 0;

     cout<<"\n pipe spacing [cm]:";
     cin>>delta;

     cout<<"\n lenght wall A [cm]:";
     cin>>a;
     cout<<"\n lenght wall B [cm]:";
     cin>>b;

     c=a;//side c=a
     d=b;//side d=b


     cout<<"\n============================\n";

     //floading area
     farea = (a*b)/10000;
     cout<<"floading area: "<<farea<<" [m2]\n";
     if (farea>39) {
         cout<<"ERROR! Floading area is too big! Should be less than 40m2\n";
         exit(0);
     }

     //the ratio of the lengths of the sides of the plate
     if (a/b >=2){
         cout<<"ERROR! The ratio of lenghts sides should be <2, now a/b: "<<a/b<<"\n";
         exit(0);
     }
     if (b/a >=2){
         cout<<"ERROR! The ratio of lenghts sides should be <2, now b/a: "<<b/a<<"\n";
         exit(0);
     }

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

     cout <<"\nPipe lenght: "<<sum/100<<" [m]\n";

     if (sum/100 > 100) {
         cout<<"ERROR! Pipe lenght is too long, should be less than 100m\n";
         exit(0);
     }

    cout<<"\n\n";
    return 0;
}
