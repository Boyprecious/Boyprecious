
#include <iostream>
using namespace std ;

class Swap{
private:
    int buffer;
public:

    void swapper(int*, int*);

    void referenceSwap(int&, int&);

};

void Swap::swapper(int *a, int *b){

    buffer = *a;
    *a = *b;
    *b = buffer;
}

void Swap::referenceSwap(int& a,  int& b){

    int i(0), arr[] = {a, b};
    b = arr[i];
    a = arr[i++];
    
}



int main(){
        int val1, val2;
        Swap SW;
        cout<<"Enter val1: "; cin>>val1;
        cout<<"Enter val2: ", cin>>val2;

        cout<<endl<<endl;

        cout<<"            Swap by pointers           "<<endl<<endl;
        cout<<"Before"<<endl;
        cout<<"val1: "<<val1<<" |  "<<"address: "<<&val1<<endl;
        cout<<"val2: "<<val2<<" |  "<<"address: "<<&val2<<endl;
        SW.swapper(&val1, &val2);

        cout<<"After"<<endl<<endl;
        cout<<"val1: "<<val1<<" |  "<<"address: "<<&val1<<endl;
        cout<<"val2: "<<val2<<" |  "<<"address: "<<&val2<<endl;
        cout<<"....................................................";
        cout<<endl<<endl;

        cout<<"   Swapping back by reference   "<<endl<<endl;
        cout<<"Before"<<endl;
        cout<<"val1: "<<val1<<" |  "<<"address: "<<&val1<<endl;
        cout<<"val2: "<<val2<<" |  "<<"address: "<<&val2<<endl;
        SW.referenceSwap(val1, val2);
        cout<<"After"<<endl;
        cout<<"val1: "<<val1<<" |  "<<"address: "<<&val1<<endl;
        cout<<"val2: "<<val2<<" |  "<<"address: "<<&val2<<endl;
        cout<<"...................................................";
        cout<<endl<<endl;
        cout<<"Storing in array and Swapping"<<endl;
        int k(0),  arr[] = {val1, val2}; /////////////////////////////////////note this
        cout<<"Before"<<endl;
        cout<<"val1: "<<arr[k]<<" |  "<<"address: "<<arr+ k <<endl;
        cout<<"val2: "<<arr[k++]<<" |  "<<"address: "<<arr+(++k)<<endl;

        SW.swapper((arr+k), (arr + (++k)));
        cout<<"After"<<endl<<endl;
        cout<<"val1: "<<arr[0]<<" |  "<<"address: "<<arr + 1<<endl;
        cout<<"val2: "<<arr[1]<<" |  "<<"address: "<<arr + 2<<endl;

    return 0;
}
