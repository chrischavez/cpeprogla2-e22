//salinas
#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3];       
};

void newLine();

int main(){
	int sum;
    Student stud;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=1; i<4; i++){
            cout << "Grade "<< i << ": ";
            cin >> stud.grade[i];
		 	sum += stud.grade[i];
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    cout << "Average : " << sum/3 << endl;
    for(int i=1; i<4; i++){
            cout << "Grade "<< i << ": " << stud.grade[i] << endl;
		  
    }
    
    
    	  	if (sum/3 >= 75){
				cout<< "Pass";
				}
 		   else 
				cout<< "Fail";
    

    system("pause > 1");
    return 0;   

}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
