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

	fraction& operator++(int)//a very small change in syntax
	{
	    num= num+den;
	    simplify();

	}
void show()
{  cout<<endl<<num<<"/"<<den;}
};


int main (void)
{

    fraction g1(15,7);
    g1.show();
    g1++;
    g1.show();
   (g1++)++;// nesting is not allowed in the case of post increment this will give unpredictable result
   g1.show();
}


