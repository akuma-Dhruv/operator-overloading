#include<iostream>
using namespace std;
class fraction{
public:
int num,den;
fraction()
{
	num=1;
    den=1;
}
fraction(int n,int d)
{
	num=n;
	den=d;
}
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

	fraction operator+(fraction const &f2)const
	{
    int lcm= this->den*f2.den;
	fraction fnew;
    fnew.num=(this->num*(lcm/this->den)+(f2.num*(lcm/f2.den)));
    fnew.den=lcm;
    fnew.simplify();
	return fnew;
	}
	fraction operator*(fraction const &f2)const
	{
		int n= this->num*f2.num;
		int d= this->den*f2.den;
		fraction fnew;
		fnew.num=n;
		fnew.den=d;
		fnew.simplify();
		return fnew;
	}
void show()
{  cout<<endl<<num<<"/"<<den;}
};


int main (void)
{

    fraction g1;
   fraction g2;

    g1.num=15;
    g2.num=18;
    g1.den=7;
    g2.den=2;

	fraction g3= g1+g2;
	g3.show();
	fraction g4=g1*g2;
	g4.show();
}


