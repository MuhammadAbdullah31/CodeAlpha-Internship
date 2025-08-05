#include<iostream>
using namespace std;
int main() {
    int Num_of_courses;
    cout << "Enter the number of courses: ";
    cin >> Num_of_courses;
    double* Grade = new double[Num_of_courses];
    int Credit_hours;
    int Total_credits = 0;
    double Total_points = 0;  // Changed to double to allow decimal grade points
    for (int i = 0; i < Num_of_courses; i++) {
        cout << "\nEnter the Grade (on 4.0 scale) for Course " << i + 1 << ": ";
        cin >> Grade[i];
        cout << "Enter the Credit Hours for Course " << i + 1 << ": ";
        cin >> Credit_hours;
        Total_credits += Credit_hours;
        Total_points += Grade[i] * Credit_hours;
    }
    double GPA = Total_points / Total_credits;
    double Prev_GPA;
    int Prev_credits;
    cout << "\nEnter the Previous CGPA: ";
    cin >> Prev_GPA;
    cout << "Enter the Previous Total Credit Hours: ";
    cin >> Prev_credits;
    double CGPA = ((Prev_GPA * Prev_credits) + Total_points) / (Prev_credits + Total_credits);
    for (int i = 0; i < Num_of_courses; i++)
    {
        cout << "************Course " << i + 1 << "***************" << endl;
        cout << "Grade: " << Grade[i] << endl << endl;
    }
    cout << "Semester GPA: " << GPA << endl;
    cout << "Updated CGPA: " << CGPA << endl;
    return 0;
}