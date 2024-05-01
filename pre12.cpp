#include <iostream>
#include <string>
using namespace std;
class Student {
private:
 string studentID;
 string studentName;
 int semester;
public:
 void inputStudentData() {
 cout << "Enter student ID (7 characters long, alphanumeric): ";
 cin >> studentID;
 cout << "Enter student name (without spaces): ";
 cin >> studentName;
 cout << "Enter semester (between 1 to 8): ";
 cin >> semester;
 }
 void displayStudentData() {
 cout << "Student ID: " << studentID << endl;
 cout << "Student Name: " << studentName << endl;
 cout << "Semester: " << semester << endl;
 }
 class Result {
 public:
 string subjectName[3];
 int subjectCredit[3];
 int theoryMarks[3];
 int practicalMarks[3];
 string theoryGrade[3];
 string practicalGrade[3];
 float sgpa;
 public:
 void calculateGrades() {
 for(int i = 0; i < 3; i++){
 theoryGrade[i] = calculateGrade(theoryMarks[i]);
 practicalGrade[i] = calculateGrade(practicalMarks[i]);
 }
 }

 string calculateGrade(int mark) {
 if(mark >= 80){
 return "AA";
 } else if(mark >= 73 && mark < 80){
 return "AB";
 } else if(mark >= 66 && mark < 73){
 return "BB";
 } else if(mark >= 60 && mark < 66){
 return "BC";
 } else if(mark >= 55 && mark < 60){
 return "CC";
 } else if(mark >= 50 && mark < 55){
 return "CD";
 } else if(mark >= 45 && mark < 50){
 return "DD";
 } else if(mark < 45){
 return "FF";
 }
 }
 void inputResultData() {
 for (int i = 0; i < 3; ++i) {
 cout << "Enter subject " << i + 1 << " name (with space): ";
 cin.ignore();
 getline(cin, subjectName[i]);
 cout << "Enter subject " << i + 1 << " credit (between 1 to 30): ";
 cin >> subjectCredit[i];
 cout << "Enter theory marks for subject " << i + 1 << " (between 0 to 100): ";
 cin >> theoryMarks[i];
 cout << "Enter practical marks for subject " << i + 1 << " (between 0 to 100): ";
 cin >> practicalMarks[i];
 }
 calculateGrades();
 }
 void displayResultData() {
 cout << "Result:" << endl;
 cout << "Subject Name\tSubject Credit\tTheory Marks\tPractical Marks\tTheory Grade\tPractical Grade" << endl;
 for (int i = 0; i < 3; ++i) {
 cout << subjectName[i] << "\t\t" << subjectCredit[i] << "\t\t" << theoryMarks[i] << "\t\t" << practicalMarks[i] << "\t\t" << theoryGrade[i] << "\t\t" << practicalGrade[i] << endl;
 }
 cout<< "\nSGPA : "<<(subjectCredit[0]*theoryMarks[0] +subjectCredit[1] *theoryMarks[1] + subjectCredit[2]*theoryMarks[2])/(subjectCredit[0]+subjectCredit[1]+subjectCredit[2]);
 }
 friend class GradeCalculator;
 };
 class GradeCalculator {
 public:
 static float calculateSGPA(Result &result) {
 float totalCredits = 0;
 float totalGradePoints = 0;
 for (int i = 0; i < 3; ++i) {
 float courseGradePoint = calculateGradePoint(result.theoryGrade[i]) + calculateGradePoint(result.practicalGrade[i]); totalGradePoints += courseGradePoint * result.subjectCredit[i]; totalCredits += result.subjectCredit[i];
 }
 if (totalCredits == 0)
 return 0;
 return totalGradePoints / totalCredits;
 }
 private:
 static int calculateGradePoint(string grade) {
 if (grade == "AA") return 10;
 else if (grade == "AB") return 9;
 else if (grade == "BB") return 8;
else if (grade == "BC") return 7;
 else if (grade == "CC") return 6;
 else if (grade == "CD") return 5;
 else if (grade == "DD") return 4;
 else return 0;
 }
 };
};
int main() {
 Student student;
 Student::Result result;
 student.inputStudentData();
 result.inputResultData();
 cout << endl;
 student.displayStudentData();
 result.displayResultData();
 return 0;
}
