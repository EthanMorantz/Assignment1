// Monday-Week-2
/************************************
Student first name: Ethan
Student last name: Morantz
*************************************/
#include <iostream>
#include <string>
using namespace std;
/************************************
Be sure to connect this replit project
with GitHub !
*************************************/

/************************************
declare a constant integer named: 
NBR_SCORES with a value of 3
*************************************/
const int NBR_SCORES = 3;  
/************************************
IMPORTANT!
Use the above constant in your code
do not use a literal number 3
anywhere in your code!!!!!
*************************************/

/************************************
define a class named Student
The class will have 3 private members:
1) a string for first name
2) a string for last name
3) an integer array of size NBR_SCORES

the class will have 3 public members:
NOTE: only prototype the functions in the class
1) a void function named setName with 2 string parameters
to set the student first name and last name
2) a void function named setScores with no parameters
setScores will prompt the user for scores to pupulate
the private member array: scores 
see sample output
3) a void function named showScores with no parameters
showScores will display the values in
the private member array: scores
and will also display the average scores.
see sample output
Note: showScores is a const function
*************************************/
class Student {
    private:
    string fName;
   string lname;
   int scores[NBR_SCORES];
    public:
     void setName(string fName, string lName) {
      fName = fName;
      lName = lName;
        }

    void setScores() {
            for (int i = 0; i < NBR_SCORES; i++) {
                cout << "Enter score " << i + 1 << ": ";
                cin >> scores[i];
            }
        }

        void showScores() const {
            int total = 0;
            for (int i = 0; i < NBR_SCORES; i++) {
                cout << scores[i] << endl;
                total += scores[i];
            }
            int avg_score = total / (int)NBR_SCORES;
            cout << "Average score: " << avg_score << endl;
        }
};
/************************************
In the main function:
1) declare a Student object named student
2) declare 2 srtrings for first name and last name
3) prompt the user for the student's
first name and last name
4) use setName to set the student object's
first name and last name
5) use setScores to set the student' scores
6) use showScores to show the student's scores
*************************************/
int main() {
    // Declare a Student object named student
    Student student;

    // Declare two strings for first name and last name
    string fName, lName;

    // Prompt the user for the student's first name and last name
    cout << "Enter student's first-name ";
    cin >> fName;
  cout<< "and ";
    cout << "last-name: ";
    cin >> lName;

    // Use setName to set the student object's first name and last name
    student.setName(fName, lName);

    // Use setScores to set the student's scores
    student.setScores();

    // Use showScores to show the student's scores
    student.showScores();

    return 0;
}
/************************************
Define your member funcrtions 
below the main function
*************************************/


/********************************************
// YOUR OUTPUT
// copy-and-paste your output here



// SAMPLE OUTPUT
Enter student's first-name and last-name: Brad Gilbert
Enter score 1 for Brad Gilbert
100
Enter score 2 for Brad Gilbert
98
Enter score 3 for Brad Gilbert
94
Scores for Brad Gilbert are 
100 98 94 
The average is: 97
Goodbye
**********************************************/










































































































































































































































































































