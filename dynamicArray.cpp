#include<iostream>
using namespace std;
 class DynamicArray
 {
    int *data;
    int capacity ;
        int index ;
public:
    DynamicArray()
    {
        data=new int[5];
        capacity =5;
        index =0;

    }
    DynamicArray(DynamicArray const &r)
    {

        this->capacity =r.capacity;
        this->index =r.index;
        this->data=new int[capacity];
        for(int i=0;i<index;i++)
        {
            this->data[i]=r.data[i];
        }

    }
    void operator=(DynamicArray const &r)
    {

        this->capacity =r.capacity;
        this->index =r.index;
        this->data=new int[capacity];
        for(int i=0;i<index;i++)
        {
            this->data[i]=r.data[i];
        }

    }


    void add(int element)
    {
        if(index==capacity)
        {
                int *newdata=new int[2*capacity];
                capacity*=2;
                for(int i =0;i<index;i++)
                {
                    newdata[i]=data[i];
                }
                delete[] data;

            data=newdata;
        }
         data[index]=element;
            index++;

    }
    void add(int i,int element)
    {
        if (i<index)
        {
            data[i]=element;

        }
        else if(i==index)
        {
            add(element);
        }
        else
            return;
    }
    int get(int i)
    {
        if (i<index)
        {
            return data[i];
        }
        else
            return -1;

    }
    void print()
    {

        int i=0;
        while(i<index)
        {
            cout<<data[i]<<" ";
            i++;
        }
        cout<<endl;
    }
 };





 int main(void)
 {
     DynamicArray d1;
     d1.add(10);
     d1.add(20);
     d1.add(30);
     d1.add(40);
     d1.add(50);
     d1.add(60);
     d1.add(70);
     d1.print();

    DynamicArray d2(d1);
    DynamicArray d3;
    d3=d1;
    d1.add(4,500);
    d1.print();
    d2.print();

    d3.print();

 }

