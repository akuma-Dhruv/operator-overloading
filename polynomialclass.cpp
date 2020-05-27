#include<iostream>
using namespace std;
class polynomial{
int *degcoeff;
int capacity;
void doubleC(int c)
{ int i=capacity;
    int *newdata=new int[2*capacity];
                capacity*=2;
                for(int r =0;r<i;r++)
                {
                    newdata[r]=degcoeff[r];
                }
                delete[] degcoeff;

            degcoeff=newdata;

    for(;i<capacity;i++)
        {
            degcoeff[i]=0;
        }
        if(capacity<c)
        {
            doubleC(c);
        }
}

public:
    polynomial()
    {
        capacity=5;
        degcoeff= new int[5];

        for(int i=0;i<capacity;i++)
        {
            degcoeff[i]=0;
        }
    }
    polynomial(const polynomial& r)
    {
        this->capacity=r.capacity;
        for(int i=0;i<this->capacity;i++)
        {
            this->degcoeff[i]=r.degcoeff[i];
        }
    }
    void setcoeff(int i,int coeff)
    {
        if(i>capacity)
        {
            doubleC(i);
           //continue;
        }


            degcoeff[i]=coeff;

    }
    void print()
    {   int i=0;

      while(i<capacity)
        {
            if(degcoeff[i]==0)
            {   i++;
                continue;
            }
            else
            {   if(degcoeff[i]>0)
                cout<<"+";
                cout<<degcoeff[i]<<"x^"<<i;
                i++;
            }
        }
    }

};
int main(void)
{
    polynomial p1;
    p1.setcoeff(0,2);
    p1.setcoeff(1,4);
    p1.setcoeff(2,9);
    p1.setcoeff(4,3);
   polynomial p2(p1);
    //p1.setcoeff(25,3);
    p1.print();
    cout<<endl;
    p2.print();


}
