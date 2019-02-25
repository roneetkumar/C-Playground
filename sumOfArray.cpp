#include <iostream>
using namespace std;

int main() {
	
    int i, array[50],operands,sum = 0;

    cout << "Enter No of Operands" << endl;
    cin >> operands;
    cout << "Enter the values" << endl;
    for(i=0 ; i<operands ; i++){
        cin >> array[i];
    }

    for(i=0 ; i<operands ; i++){
        sum = sum + array[i];
    }

    for(i=0 ; i<operands ; i++){
        cout << i+1 << ". " << array[i] << endl;
    }
    
    cout << "Sum of All The Operands Are : " << sum << endl;

    system("pause");
	return 0;
}