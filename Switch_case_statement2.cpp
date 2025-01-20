#include <iostream>
using namespace std;

int main(){
    char nilai;
    cout <<"Please insert a greade (A, B, C, D or E): ";
    cin >>nilai;

    switch (nilai){
        case 'A':
        case 'a':
        cout <<"Excellent! :)"<<endl;
        break;
        case 'B':
        case 'b':
        cout <<"Well done :)"<<endl;
        break;
        case 'C':
        case 'c':
        cout <<"You passed :)"<<endl;
        break;
        case 'D':
        case 'd':
        cout <<"Better try again :)"<<endl;
        break;
        case 'E':
        case 'e':
        cout <<"Sorry, you failed :("<<endl;
        break;
        default:
        cout <<"Invalid grade"<<endl;
    }
    cout <<"Your grade is "<<nilai<<endl;
    return 0;
}
