#include<iostream>
using namespace std;
class Africa{
private:
    char level[5] = "root";
public:
    void print();
};
void Africa::print(){
    cout<<"Africa Level: "<<level<<endl;
    cout<<"to-->";
}

class Cameroon{
private:
    char Level[6]= "node1";
public:
    void print();
};

void Cameroon::print(){
    cout<<"Cameroon Level: "<<Level<<endl;
    cout<<"to-->";
}

class Buea{
private:
   char Level[6]= "node2";
public:
    void print();
};
void Buea::print(){
    cout<<"Buea Level: "<<Level<<endl;
    cout<<"to-->";
}

class Molyko{
private:
    char Level[6] = "node3";
public:
    void print();
};


void Molyko::print(){
    cout<<"Molyko Level: "<<Level<<endl;
    cout<<"to-->";
}

class me:private Africa, private Cameroon, private Buea, private Molyko{
private:
    char Level[4]= "end";
public:
    void print();
};

class me2:public Africa, public Cameroon, public Buea, public Molyko{
private :
    char Level[4] = "end";
public:
    void print();

};

void me2::print(){
    cout<<"me Level: "<<Level<<endl;
}

void me::print(){
    Africa::print(); Cameroon::print(); Buea::print(); Molyko::print();
    cout<<"me Level: "<<Level<<endl;
}

int main(){

    me Boy;
    me2 Boy2;

    int i(0);

    Boy.print();

    // NOTE THESE

    Boy2.Africa::print();
    Boy2.Cameroon::print();
    Boy2.Buea::print();
    Boy2.Molyko::print();
    Boy2.print();

    return 0;
}
