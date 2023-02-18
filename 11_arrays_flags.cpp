#include <iostream>
#include <iomanip>
using namespace std ;

struct carParts{
    float model;
    string color;
    string engine;
    float cost;
};

const int SIZE = 4;
int i;
carParts arr[SIZE]; // array of structures

void Display(int, carParts[]);

auto main() -> int {

    for(i=0; i<SIZE; i++){
        cout<<"            ARRAY DATA: "<<i+1<<"             "<<endl;
        cout<<endl;
        cout<<"model_float: "; cin>>arr[i].model;
        cout<<"color: ";       cin>>arr[i].color;
        cout<<"engine_name: "; cin>>arr[i].engine;
        cout<<"cost: ";        cin>>arr[i].cost;
    }

Display(SIZE, arr);// Parsing just the name of the array.

return EXIT_SUCCESS;
}

void Display(int i, carParts arrr[]){
    int width = 6;
    int j;
    for(j=0; j<i; j++){
        cout<<"Model:"<<setw(width)<<setprecision(2)<<<<arrr[j].model<<endl;
        cout<<"Color:"<<setw(width)<<arrr[j].color<<endl;
        cout<<"Engine:"<<setw(width)<<arr[j].engine<<endl;
        cout<<"Cost:"<<setw(width)<<setprecision(2)<<arr[j].cost<<endl;
        cout<<"--------------------------------------------------"<<"\n\n"<<endl;
    }
}
