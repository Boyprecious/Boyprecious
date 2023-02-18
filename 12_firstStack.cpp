/*Author[0] : Tambu Precious @ BoyPrecious
Aim: push and pop from a stack.
*/

# include <iostream>

using namespace std;

class Stack{

private:    // all of these guys private, so that user can't edit
    enum {MAX=10};
    int stackArray[MAX];
    int top;
public:
    Stack():top(0)
    {/*nothing*/}

    void push(int var){
        if(top>=MAX){
            cout<<"Full"<<endl;
        }
        else{
        stackArray[++top] = var;
        }
    }

    int pop(){
        if(top<0){
            cout<<"end"<<endl;
            return (stackArray[0]);
        }

        else{
        return stackArray[top--];
        }

    }
};



int main(){

    Stack s1;
    char popPush;

    cout<<"push/pop/exit?:(p, P, e):  ";
    cin>>popPush;

    while(popPush!='e'){

        switch(popPush){

            case 'P':
                int temp;
                cout<<"INPUT INT: "; cin>>temp; cout<<"Done!"<<endl;
                s1.push(temp);
                break;

            case 'p':
                cout<<"data: "<<s1.pop()<<endl;
                break;
        }


        cout<<"push/pop/exit?:(p, P, e):  ";
        cin>>popPush;

    }

 cout<<"Exited"<<endl;
return 0;
}
