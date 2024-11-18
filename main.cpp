#include <iostream>
#include <iomanip>

using namespace std;

void bmiCalculator() {

    double weightPounds, heightInches;


    cout << "Enter your weight in pounds: ";
    cin >> weightPounds;

    cout << "Enter your height in inches: ";
    cin >> heightInches;


    const double poundsToKg = 0.453592;
    const double inchesToM = 0.0254;


    double weightKg = weightPounds * poundsToKg;
    double heightM = heightInches * inchesToM;


    double bmi = weightKg / (heightM * heightM);


    string category;
    if (bmi < 18.5) {
        category = "Underweight";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        category = "Normal weight";
    } else if (bmi >= 25 && bmi < 29.9) {
        category = "Overweight";
    } else {
        category = "Obese";
    }


    cout << fixed << setprecision(2); // Format BMI to 2 decimal places
    cout << "\nYour BMI is: " << bmi << endl;
    cout << "This is categorized as: " << category << endl;
}

int main() {

    bmiCalculator();
    return 0;
}
