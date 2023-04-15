/* sort elements */
/* can also use the vector type for this with series of push and pop */

//Author: "Tambu Precious" 
#include <iostream>

using namespace std;


struct link{
    int data;
    link* next;

};

class structLinks{
private:
    link* first;
    int number_values = 0;
    int* arr1;
public:
    structLinks(){  //Constructor: called on initials
        first = NULL;
    }
    ~structLinks(){  //  this is a distructor and it is called when we exit the class 
        link* destroyer = first; 
        while(destroyer!=NULL){
            link* temporary = destroyer; 
            destroyer = destroyer->next; 
            destroy temporary;
        }
    }
        
        void additem(int);
        void verboseDisplay();
        void displayLists();
        void bubblesort(); // looking to improve this algorithm in future

};
void structLinks::additem(int item){
    link* new_link = new link;
    new_link->data = item;
    new_link->next = first;
    first = new_link;
    number_values = number_values + 1;
    /* in one sentence:
    new link is of type link from a structure. create a new link, then assign it the new in coming data, then
    make it's pointer to point to the data of the next item (or the previous item that was entered).
    then make a start pointer to point to this new link's own data.  then iterate.

    */
}

void structLinks::verboseDisplay(){

    link* current_link = new link;
    current_link = first;
    cout<<"Values entered: "<<number_values<<endl;
    while(current_link!=NULL){  // While not at the end

        cout<<current_link<<"-> "<<current_link->data<<endl;
        current_link = current_link->next; //  point to next address
    }
}


// the main man::: 'Evil Laugh'
void structLinks::bubblesort(){
    link* sorting_link1 = new link;
    sorting_link1 = first;
    link* sorting_link2 = new link;

    for(int i=0; i<number_values-1; i++){
        sorting_link2 = sorting_link1->next;
        for(int k=i+1; k<number_values; k++){
            if(sorting_link1->data > sorting_link2->data){
                int temp;
                temp = sorting_link1->data;
                sorting_link1->data = sorting_link2->data;
                sorting_link2->data = temp;
            }
            sorting_link2 =   sorting_link2->next;
        }
        sorting_link1 =   sorting_link1->next;
    }
}



void structLinks::displayLists(){
    link* sorted = new link;
    sorted = first;
    link* ending =  new link;

    cout<<"Ascending: ";
    while(sorted!=NULL){
        cout<<sorted->data<<" ";
        sorted = sorted->next;
        cout<<sorted->data<<" ";
        // faster loop
        if(sorted!=NULL){
            sorted = sorted->next;
            cout<<sorted->data<<" ";
            sorted = sorted->next;
        }
    }

    cout<<"\n";
    cout<<"Descending: ";
    cout<<"Use and array"<<endl;
}

int main(){


    structLinks ls;

    cout<<"Enter values(e or E to stop)"<<endl<<endl;
    char values;                                    // this means just 1 byte.  that is why you can sort only single numbers. {isalpha(), isdigit(), - good solve
    int equivalentInt;

    values = 'a';
    while(values!='e'){
        cout<<">> ";
        cin>>values;
        if(values=='e'){
            break;
        }

        equivalentInt = values - '0';
        ls.additem(equivalentInt);
    }

    ls.verboseDisplay();
    ls.bubblesort();
    ls.displayLists();

    return 0;
}
