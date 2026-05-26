#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, credit;
    float totalGradePoints = 0, totalCredits = 0, cgpa;

    cout << "Enter number of subjects: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "\nEnter grade for subject " << i << ": ";
        cin >> grade;

        cout << "Enter credit for subject " << i << ": ";
        cin >> credit;

        totalGradePoints += grade * credit;
        totalCredits += credit;
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\nFinal CGPA = " << cgpa;

    return 0;
}