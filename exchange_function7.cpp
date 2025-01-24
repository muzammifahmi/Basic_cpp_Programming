#include <iostream>
#include <cstring>

using namespace std;

void reverseString(char* str) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; ++i) {
        swap(str[i], str[length - 1 - i]);
    }
}

int main() {
    const int maxSize = 100;
    char input[maxSize];

    cout << "Masukkan kata : ";
    cin.getline(input, maxSize);
	cout <<"***----------***----------***"<<endl;
    reverseString(input);

    cout << "pembalikan kata: " << input << endl;
	cout <<"***----------***----------***"<<endl;
    return 0;
}
