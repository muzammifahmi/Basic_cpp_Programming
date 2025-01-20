#include <iostream>
using namespace std;

int main(){
    int bulan;
    cout <<"please input month numbers (1-12): ";
    cin >>bulan;

    switch (bulan){
        case 1:
        cout <<"The 1st month is January"<<endl;
        break;
        case 2:
        cout <<"The 2nd month is February"<<endl;
        break;
        case 3:
        cout <<"The 3rd month is March"<<endl;
        break;
        case 4:
        cout <<"The 4th month is April"<<endl;
        break;
        case 5:
        cout <<"The 5th month is May"<<endl;
        break;
        case 6:
        cout <<"The 6th month is June"<<endl;
        break;
        case 7:
        cout <<"The 7th month is July"<<endl;
        break;
        case 8:
        cout <<"The 8th month is August"<<endl;
        break;
        case 9:
        cout <<"The 9th month is September"<<endl;
        break;
        case 10:
        cout <<"The 10th month is October"<<endl;
        break;
        case 11:
        cout <<"The 11th month is November"<<endl;
        break;
        case 12:
        cout <<"The 12th month is December"<<endl;
        break;
        default:
        cout <<"Invalid month! \nMake sure your input is correct"<<endl;
    }
    return 0;
}
