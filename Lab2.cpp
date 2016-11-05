#include<iostream>
#include<math.h>
#include<ctime>
#include<string>
#include<cstring>
#include<time.h>
#include<cstdlib>
#include <iomanip>

using namespace std;
double getRound(double num){
	return round(num);
}

main(){
	double num, result;
	cout<<"Enter a number to be round off: ";
	cin>>num;
	result=getRound(num);
	cout<<"Round off value: "<<result<<endl;
	
	int minNumber=1 , maxNumber =20;
	srand((unsigned)time( NULL ));
	for(int i=0; i<10; i++)
	cout<<minNumber +(rand()%(maxNumber - minNumber + 1))<<" "<<endl;
	
	int rectangle_area, radius, area, w, l, height, side, base;
    float circle_area, triangle_area, square_area, rec_area;
    const double pi = 3.14;
    cout<<"***********MENU***********"<<endl;
    cout<<"[1] - Area of Circle"<<endl;
    cout<<"[2] - Area of Rectangle"<<endl;
    cout<<"[3] - Area of Triangle"<<endl;
    cout<<"[4] - Area of Square"<<endl;
    cout<<"[5] - Exit"<<endl;


    while (1==1){
    	
        cout<<"Enter your choice: ";
        cin>>area;
        cout<<endl;

        switch (area){
            case 1:
                cout<<"Enter the Radius of a Circle: ";
                cin>>radius;
                cout<<"The Area of a Circle: ";
                
                circle_area= pi * radius * radius;
                cout<< "Area of the Circle = "<<circle_area<<endl;
            break;

            case 2:
                cout<<"Enter the Width of a Rectangle: "<<endl;
                cin>>w;
                cout<<"Enter the Length of the Rectangle: "<<endl;
                cin>>l;
                cout<<"Enter the Area of the Rectangle: "<<endl;
                
                rec_area = w*l;
                cout<<"Rectangular Area = "<<rec_area<<endl;
            break;

            case 3:
                cout<<"Enter the Base of a Triangle: "<<endl;
                cin>>base;
                cout<<"Enter the Height of a Triangle: "<<endl;
                cin>>height;

                triangle_area = base * height /2;

                cout<<"Triangle Area = "<<triangle_area << endl;

            break;
            
            case 4:
                cout<<"Enter the Side of the Square: "<<endl;
                cin >> side;
                
                square_area = side * side; 
                cout<<"Square Area = "<<square_area<<endl;
            break;

            case 5:
                cout<<"Thank you!"<<endl;
                return 0;
            break;
            
            default:
            	cout<<"Wrong input"<<endl;
            
		}
    }
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of " << n << " = " << factorial(n);
	int factorial(int n){
    if(n!=1)
    return n*factorial(n-1);
    
    int getMax(int num1, int num2){
	if(num1 > num2)
		return num1;
	else
		return num2;	
		
	int num1, num2, max;
	cout<<"Enter 1st number: "<<endl;
	cin>>num1;
	cout<<"Enter 2nd number: "<<endl;
	cin>>num2;
	max=getMax(num1, num2);
	cout<<max; 	
		}

    
	}

}
