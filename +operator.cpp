#include<iostream>
using namespace std;
class fraction{
public:
int num,den;
void simplify()
{
    int y=min(num,den);
    for(int i=1;i<=y;i++)
    if(num%i==0&&den%i==0)
    {   num/=i;
        den/=i;

    }
    num/y;
    den/y;
}
    void calc(fraction f2){
    int lcm= this->den*f2.den;
    this->num=(this->num*(lcm/this->den)+(f2.num*(lcm/f2.den)));
    den=lcm;
    simplify();
    cout<<num<<"/"<<den;
}
fraction operator+(fraction f2){
    int lcm= this->den*f2.den;
    this->num=(this->num*(lcm/this->den)+(f2.num*(lcm/f2.den)));
    den=lcm;
    simplify();
    cout<<num<<"/"<<den;
return f2;
}
};


int main (void)
{

    fraction g1;
   fraction g2;

    g1.num=15;
    g2.num=18;
    g1.den=7;
    g2.den=2;
    g1.calc(g2);
	//fraction g3= g1+g2;
}


