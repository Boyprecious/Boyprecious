
# include <iostream>
using namespace std;

class Distance{

private:
    float feet;
    int inches;
public:
    Distance(float ft, int in) : feet(ft), inches(in)  // user initialize
    {
    cout<<"Your intialization has been mounted"<<endl;
    }

    Distance(): feet(0), inches(0) // constructor
    {
      cout<<"mounted Default initalization"<<endl;
    }

    Distance adder(Distance);
    float get_feet(Distance);
    int get_inches(Distance);
};

Distance Distance::adder(Distance D1){ // retunr distance so add possible

    Distance D3;
    D3.feet = D1.feet + feet;    //NOTICE THIS OHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH. ADDS THE CALLER AND THE PARMA VARS
    D3.inches = D1.inches + inches;

    cout<<D3.inches<<endl;
    cout<<D3.feet<<endl;

    return D3;
}

float Distance::get_feet(Distance D1){

    return D1.feet;
}

int Distance::get_inches(Distance D1){
 return D1.inches;
}


auto main()->int{

    Distance d1, d3;
    Distance d2(12.0, 10);

     d3 = d2.adder(d1);    // parsing

     cout<<"feet: "<<d3.get_feet(d3)<<endl;
     cout<<"inches: "<<d3.get_inches(d3)<<endl;



    return EXIT_SUCCESS;
}
