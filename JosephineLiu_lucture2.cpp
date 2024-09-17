//Josephine Liu
//9/16/2024
//Lecture 2
#include <iostream>
#include <string>

using namespace std;

int main(){
    //creating variables 
    int integer = 4; //integer number
    float floatnum = 4.3; //float number or decimal
    double doublenum = 9.4; //double number
    char charnum = 'f'; //letter
    bool boolean = false; //only for true or false
    string stri = "No"; //phrase

    cout << "integer = "<< integer << endl;
    cout << "float number = "<<floatnum << endl;
    cout << "double number = "<<doublenum << endl;
    cout << "character number = "<<charnum << endl;
    cout << "boolean = " <<boolean << endl;
    cout << "string = "<<stri << endl;


    char charnumtwo = 76;
    char charnumone = 89;
    char symbol = 60;

    //slide 37
    int inches; //variable to store total inches
    inches = 100 ; //store 100 in the varible inches

    cout << inches << " Inch(es) = "; //output the value of inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; //output maxium number of feet (foot)
    cout << inches % 12 << " inch(es) " << endl; //output remaining inches

    
    cout << "Compare: " << (charnumtwo < charnumone) <<  endl; //compares the two numbers if 1 then true if 0 then false

    cout << "2+3.5 = " << 2+3.5 <<endl; //prints the number and actually solves it for all of the three.
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 <<endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) <<endl;



    return 0;
}

/* OUTPUT:
100 Inch(es) = 8 feet (foot) and 4 inch(es) 
f > a 
2+3.5 = 5.5
6 / 4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8 */