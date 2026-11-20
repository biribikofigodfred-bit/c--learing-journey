#include <iostream>
using namespace std;

int main()
{
    int scores[8];
    string subjects[8] = {"Math", "Science", "English", "social studies", "Biology", "Chemistry", "Physics", "Emath"};
    string grades[8];
    double average_score;
    int total_score = 0;
    int number_of_trails = 0;
    int exams_year;

    cout << "Enter the year of exam " << endl;
    cin >> exams_year;

    // Loop 1: input with validation
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter the score of exam " << subjects[i] << ": ";
        cin >> scores[i];

        if (scores[i] < 0 || scores[i] > 100)
        {
            cout << "Invalid score. Please enter a score between 0 and 100." << endl;
            i--; // retry same subject
        }
    }

    cout << endl;

    // Loop 2: grading, printing, totaling
    for (int i = 0; i < 8; i++)
    {
        if (scores[i] >= 80)
            grades[i] = "A1";
        else if (scores[i] >= 70)
            grades[i] = "B2";
        else if (scores[i] >= 65)
            grades[i] = "B3";
        else if (scores[i] >= 60)
            grades[i] = "C4";
        else if (scores[i] >= 55)
            grades[i] = "C5";
        else if (scores[i] >= 50)
            grades[i] = "C6";
        else if (scores[i] >= 45)
            grades[i] = "D7";
        else if (scores[i] >= 40)
            grades[i] = "E8";
        else
            grades[i] = "F9";

        cout << subjects[i] << " = " << scores[i] << " - " << grades[i] << endl;

        total_score += scores[i];
    }

    average_score = total_score / 8.0;

    cout << endl;
    cout << "Total Score: " << total_score << endl;
    cout << "Average Score: " << average_score << endl;

    // Loop 3: count F9s (failures)
    for (int i = 0; i < 8; i++)
    {
        if (grades[i] == "F9")
        {
            number_of_trails++;
        }
    }

    cout << "Number of Trails: " << number_of_trails << endl;

    return 0;
}