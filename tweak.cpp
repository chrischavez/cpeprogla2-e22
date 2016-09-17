#include <iostream>
#include<string>
#include<sstream>


using namespace std;




void selectSort( int x[], int n);

#define N_STUDENT 10 //Max size of Student
struct student
{
	int student_number;              // Student number of student
    string studnetname;             // Name of student
	string Address;                //Address of Studnet
    int CourseCode;               //Course Code 
    string CourseName;           // Name of Course 
};


int main ()
{
       student record[N_STUDENT];
    int n;
    
    
    for (int n = 0; n < N_STUDENT;n++)
    {
        cout <<"Enter Student Number: ";
        cin >> record[n].student_number;
        
        cout << "Enter Studnet  Name: ";
        cin >> record[n].studnetname;
        
        cout << "Enter Student Address: ";
        cin >> record[n].Address;
        
        cout << "Enter Course Code: ";
        cin >> record[n].CourseCode;
        
        cout << "Enter Course Name: ";
        cin >> record[n].CourseName;
    }
    
    	bool Exit = false;
    
	while (!Exit)
	{
		int choice;
        
		cout << endl;
        cout << "=======================================" << endl;
        cout << "                                       " << endl;
        cout << " WELCOME TO STUDENT RECORD             " << endl;
		cout << "                                       " << endl;
        cout << "=======================================" << endl;
		cout << "Select Action: " << endl;
		cout << "1) Display Student Deails" << endl;
		cout << "2) Sort Using Insertion Sort" << endl;
		cout << "3) Sort Using Merge Sort" << endl;
		cout << "4) Search Sorted Array Using Binary Search" << endl;
		cout << "5) Add the Array to a Stack" << endl;
		cout << "6) Display the Array" << endl;
		cout << "7) Exit" <<endl;
		cout << "=======================================" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		
		if (choice == 7)
		{
			Exit = true;
		}
		else if (choice == 6)
            {
               const int SIZE; // Array Size
              int myArray[SIZE]; //the array
              ...//initialize values
              for (int i=0;i<SIZE;i++) //go through all elements
                cout<<i<<'\t'<<myArray[i]<<endl; //print indexnumber and value
            }
        else if ( choice == 5)
        {
            
        }
        else if ( choice == 4)
        {
            
        }
        else if ( choice == 3)
        {
            
        } 
        else if ( choice == 2)
        
        {
                       
        }
        else if ( choice == 1)
        {
            cout << "Student Number: " << record[n].student_number << endl;
            cout << "Studnet  Name: " << record[n].studnetname << endl;
            cout << "Student Address: " << record[n].Address; << endl;
            cout << "Course Code: " << record[n].CourseCode << endl;
            cout << "Course Name: " << record[n].CourseName << endl;
           
        }
       
        
        
        return 0;
}

}
template <class dType>
void selectSort( int x[], int n)
{
    int smallPos, smallest;
    for (int i=0; i <n; i++)
    {
        smallPos = i;
        smallest = x[ smallPos];
        
        for (int j=i +1; j < n ;j ++)
            
            if (x[j] < smallest)
            {
                smallPos = j;
                smallest = x [ smallPos];
                
            }
        
    }
}


