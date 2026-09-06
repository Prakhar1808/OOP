#include <iostream>
#include <iomanip>
using namespace std;

inline char getGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

float calculatePercentage(float totalObtained, float totalMaxMarks = 500.0f) {
    return (totalObtained / totalMaxMarks) * 100;
}

int main(){
    int marks[5];
    int totalObtained = 0;

    cout << "Enter marks for 5 subjects (out of 100): " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalObtained += marks[i];
    }

    float percentage = calculatePercentage(totalObtained);
    char grade = getGrade(percentage);

    cout << fixed << setprecision(2);
    cout << "\n Result: " << endl;
    cout << "Total Marks Obtained: " << totalObtained << " / 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
