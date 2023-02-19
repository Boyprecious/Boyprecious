#include<iostream>

using namespace std;

class Distance{
private:
    int feet;
    int inches;

public:
    Distance(): feet(0), inches(0)
        {
            //nothingf
        }

    Distance(int fl , int inc): feet(fl), inches(inc)
        {
            // nothing
        }

     Distance operator +(Distance);
     Distance operator *(Distance);
     Distance operator -(Distance);


    void dip(){
        cout<<"feet "<<feet<<endl;
        cout<<"inches "<<inches<<endl;
    }
};

 Distance Distance::operator+(Distance D){

    int fl, inc;
    fl = feet + D.feet;
    inc = inches + D.inches;

    return Distance(fl, inc);
}

Distance Distance::operator*(Distance D){
    int fl, inc;

    fl = feet * D.feet;
    inc = inches * D.inches;

    return Distance(fl, inc);
}

Distance Distance::operator-(Distance D){
  int fl, inc;

  fl = feet - D.feet;
  inc = inches - D.inches;

  return Distance(fl, inc);
}


auto main()-> int{
    Distance D1(3, 3) , D2(3, 3), D3(4, 6), D4(10, 30), D5, D6, D7;

    D5 = D1 + D2 + D3 + D4;
    D6 = D5 - D2;
    D7 = D5 * D6 ;




    D5.dip();
    D6.dip();
    D7.dip();

    return EXIT_SUCCESS;
}
