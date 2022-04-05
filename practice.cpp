#include <iostream>
using namespace std;
int main()
{
    int array[5], *max, *min, i; //pointer variables declared for max and min

    cout<<"Enter 5 numbers: ";
    for ( i = 0 ; i < 5 ; i++ )
    cin>>array[i];
    max = array; //assigning max pointer to the address of the first element
    min = array; //assigning min pointer to the address of the first element
    for (i = 0; i < 5; i++)
    {
    //Finding the largest element in the array
    if (*(array+i) > *max)//check if the value stored at array+i is greater than value stored at max
        *max = *(array+i);
    }
    cout<<"Maximum Number : "<< *max << "\n" ;
    for (i = 0; i < 5; i++)
    {
    //Finding the smallest element in the array
    if (*(array+i) < *min)//check if the value stored at array+i is lesser than value stored at min
        *min = *(array+i);
    }
    cout<<"Minimum Number : "<< *min <<"\n";
    return 0;
}
/*Make a program in C++, determining the number of what day it is correspond
using if...else statement */

#include <iostream>
using namespace std;
int main() {
    
    string days[]={"Mon","Tue","Wed","Thru","Fri","Sat","Sun"};
    int day;
    cout<<"Enter day number(1 to 7): ";
    cin>>day;
    string dayName;
    if(day>=1 and day<=7) {
        dayName=days[day-1];
        cout<<dayName;
    }
    else
        cout<<"Wrong input";
    
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#define pi 3.14
/*Write a program that can compute the Perimeter, Area,
Circumference of a shape that have been choosen*/

using namespace std;

int main()
{
    int shape, length, width, base, side, height, radius,
    Perimeter1, Area1, Perimeter2, Area2, Perimeter3, Area3, Circumference, Area4;
    
    cout<<"Select a number of what shape need to be compute: \n";
    cout << "1. Square\n";
    cout << "2. Rectangle\n";
    cout << "3. Isosceles Triangle\n";
    cout << "4. Circle\n";
    cout << "Enter your choice: ";
    cin >> shape;
    
    if(shape > 4){
        cout << "The number you've entered is invalid!";
    }else{
        switch(shape){
            case 1:
                cout << "\nYou've choose Square ";
                cout << "\nPlease input the Length of Side: ";
                cin >> length;
                
                Perimeter1 = 4 * length;
                Area1 = pow(length,2);
                
                cout << "\nPerimeter =  " << Perimeter1 << endl;
                cout << "Area = " << Area1 << endl;
            break;
            case 2:
                cout << "\nYou've choose Rectangle";
                cout << "\nPlease input the length of the rectangle: ";
                cin >> length;
                cout << "\nPlease input the width of the rectangle: ";
                cin >> width;
                
                Perimeter2 = (2*width)+(2*length);
                Area2 = width*length;
                
                cout << "\nPerimeter = " << Perimeter2 << endl;
                cout << "Area = " << Area2 << endl;
            break;
            case 3:
                cout << "\nYou've choose Isosceles Triangle";
                cout << "\nPlease input the base of the Isosceles Triangle: ";
                cin >> base;
                cout << "\nPlease input the side of the Isosceles Triangle: ";
                cin >> side;
                cout << "\nPlease input the height of the Isosceles Triangle: ";
                cin >> height;
                
                Perimeter3 = (2*side)+base;
                Area3 = base*height*0.5;
                
                cout << "\nPerimeter = " << Perimeter3 << endl;
                cout << "Area = " << Area3 << endl;
            break;
            case 4:
                cout << "\nYou've choose Circle";
                cout << "\nPlease input the radius of the circle: ";
                cin >> radius;
                
                Circumference = 2*pi*radius;
                Area4 = pi*pow(radius,2);
                
                cout << "\nThe circumference of the circle is " << Circumference << endl;
                cout << "The area of the circle is " << Area4 << endl;
            break;
                
            
        }
    }

    return 0;
}
