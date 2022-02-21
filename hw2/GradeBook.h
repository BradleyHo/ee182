// Fig. 4.12: GradeBook.h
// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp
#include <string> // program uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
	explicit GradeBook(std::string); // initializes course name
	void setCourseName(std::string); // set the course name
	std::string getCourseName() const; // retrieve the course name
	void displayMessage() const; // display a welcome message
	void determineClassAverage() const; // averages user-entered grades
private:
	std::string courseName; // course name for this GradeBook
}; // end class GradeBook
