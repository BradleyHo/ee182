// Instantiating multiple objects of the GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// constructor initializes courseName with string supplied as argument
	explicit GradeBook(string name)
		: courseName(name) // member initializer to initialize courseName
	{
		// empty body
	} // end GradeBook constructor

	// function to set the course name
	void setCourseName(string name)
	{
		courseName = name; // store the course name in the object
	} // end function setCourseName

	// function to get the course name
	string getCourseName() const
	{
		return courseName; // return object's courseName
	} // end function getCourseName

	// display a welcome message to the GradeBook user
	void displayMessage() const
	{
		// call getCourseName to get the courseName
		cout << "Welcome to the grade book for\n" << getCourseName()
			<< "!" << endl;
	} // end function displayMessage
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook

// function main begins program execution
int main()
{
	// create two GradeBook objects
	GradeBook gradeBook1("EE 182 - Analog and Mixed-Signal IC Test Development");
	GradeBook myName1("Bradley Ho");

	// display initial value of courseName for each GradeBook
	cout << "I am taking " << gradeBook1.getCourseName()
		<< "\nMy name is " << myName1.getCourseName()
		<< endl;
} // end main
