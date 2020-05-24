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

	fraction operator+=(fraction const &f2)
	{
    int lcm= this->den*f2.den;

    num=(this->num*(lcm/this->den)+(f2.num*(lcm/f2.den)));
    den=lcm;
    simplify();
	return *this;
	}

void show()
{  cout<<endl<<num<<"/"<<den;}
};


int main (void)
{
    fraction g1(12,2);
    fraction g2(15,4);
    g1+=g2;
    g1.show();
    (g1+=g2)+=g2;
    g1.show();
}


