// BoyPrecious


#include<iostream>
#include<conio.h> //for getche()


using namespace std;


enum itsaWord{NO, YES};

int main(void){
    char ch;
    int wordCount = 0;
    itsaWord isWord = NO;

    cout<<"Enter a Phrase:\n";

    while((ch = getche())!= '\r'){

        if(ch==' ' || ch == '\r'){  // '\r' whitespace{or enter key}
            if(isWord == YES )
                wordCount++;
                isWord = NO;
        }
        else
            if(isWord == NO)
                isWord =YES;
    }

    cout << "\n---Word count is " << wordCount << "---\n";
    return 0;
}
