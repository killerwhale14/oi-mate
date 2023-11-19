#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    //aria unui patrat
    int n;
    cin>>n;
    cout<<pow(n,2)<<endl;
    //aria unui dreptunghi
    int x,y;
    cin>>x>>y;
    cout<<x*y<<endl;
    //aria unui triunghi echilateral
    int a;
    cin>>a;
    cout<<(pow(a,2)*sqrt(3))/4<<endl;
    //aria unui triunghi dreptunghic,romb
    int c1,c2;
    cin>>c1>>c2;
    cout<<(c1*c2)/2<<endl;
    //aria trapezului
    int b1,b2,h;
    cin>>b1>>b2>>h;
    cout<<((b1+b2)*h)/2<<endl;
    //aria piamidei patrulatere
    int l,ap;
    cin>>l>>ap;
    cout<<((4*l*ap)/2)+(4*l)<<endl;

    return 0;
}
