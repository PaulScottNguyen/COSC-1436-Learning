//Preprocessor
#include <iostream>
#include <string>
using namespace std;

//Constant exemption
const int single_standard_exemption = 4000;
const int married_standard_exemption = 7000;

//Function to check if input is non-negative integer
//if not then ask again until the input is valid
int getNonNegativeInt(const std::string& prompt)
{
    std::string input;
    int value;

    while (true)
    {
        cout << prompt;
        cin >> input;   

        bool allDigits = true;
        for (char c : input)
        {
            if (!isdigit(c))
            {
                allDigits = false;
                break;
            }
        }

        if (allDigits)
        {
            value = std::stoi(input);
            return value;
        }
        
        cout << "Invalid input. Please enter a non-negative whole number.\n";
    }
}

//void function to ask for stuff
void getData(char& marital_status, int& number_of_children, int& gross_salary, int& pension_fund)
{
    //Get marital_status
    marital_status = 'X';
    //flag controlled do...while loop
    do
    {
        char answer;
        cout << "Are you married (y/n only): "; cin >> answer;
        if (answer == 'y' || answer == 'Y') //y and Y
        {
            marital_status = 'Y';
        }
        else if (answer == 'n' || answer == 'N') //n and N
        {
            marital_status = 'N';
        }
    }
    while (marital_status == 'X'); //loop until martial_status is different from X

    //Get number_of_children
    if (marital_status == 'Y')
    {
        cout << "your marital status is married!\n";
        number_of_children = getNonNegativeInt("How many children (under 14) do you have: ");
        gross_salary = getNonNegativeInt("Enter combined salary (both spouses): ");
        pension_fund = getNonNegativeInt("Enter percentage of gross income contributed to a pension fund (max 6%): ");
    }
    else
    {
        cout << "your marital status is not married!";
        gross_salary = getNonNegativeInt("Enter combined salary (both spouses): ");
        pension_fund = getNonNegativeInt("Enter percentage of gross income contributed to a pension fund (max 6%): ");
    }
}

int taxAmount(int& spouse, int& number_of_children, int& standard_exemption,int& gross_salary, int& pension_fund, int TotalFederalIncomeTax = 0)
{
    int Taxable_income = gross_salary - (standard_exemption 
                        + static_cast<int>((static_cast<double>(pension_fund) / 100.0) * gross_salary) 
                        + 1500 * (number_of_children + spouse));

    if (Taxable_income > 0 && Taxable_income <= 15000)
    {
        TotalFederalIncomeTax = static_cast<int>(Taxable_income * 0.15);
    }
    else
        if (Taxable_income > 15000 && Taxable_income <= 40000)
        {
            TotalFederalIncomeTax = static_cast<int>(2250 + (Taxable_income - 15000) * 0.25);
        }
        else
            if (Taxable_income > 40000)
            {
                TotalFederalIncomeTax = static_cast<int>(8460 + (Taxable_income - 40000) * 0.35);
            }
            else
                TotalFederalIncomeTax = 0;

    return TotalFederalIncomeTax;
}


int main()
{
    //variables in main to later put into taxAmount
    char marital_status; int number_of_children; int gross_salary; int pension_fund; 
    
    //call getData
    getData(marital_status, number_of_children, gross_salary, pension_fund);

    int standard_exemption;
    int spouse;
    if (marital_status == 'Y')
    {
        standard_exemption = married_standard_exemption;
        spouse = 2;
        cout << "Your household total federal income tax is " << taxAmount(spouse, number_of_children, standard_exemption, gross_salary, pension_fund);
    }
    else
    {
        standard_exemption = single_standard_exemption;
        spouse = 1;
        cout << "Your household total federal income tax is " << taxAmount(spouse, number_of_children, standard_exemption, gross_salary, pension_fund);
    }
}