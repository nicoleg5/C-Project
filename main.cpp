/*This program will use the Harris-Benedict equation to\
calculate the number chocolate bars that should be consumed\
to maintain your weight if you do not exercise.*/

#include<iostream>
using namespace std;

int main()

{
    
    //Variables
 char gender, yn; //Gender, yes or no answer
 int age; //Age
 double weight; //Weight
 double height; //Height
 double bmr; //bmr or basal metabolic rate

do //declare 'do' statement
{
    //Prompt the user to enter their gender
 cout << "MALE or FEMALE? Enter M for male or F for female, then press ENTER. \n";
 cout << "M or F: "; cin >> gender; //Enter character for Gender

     //Prompt the user to enter their weight
 cout << "Please enter the weight in pounds and press ENTER. \n";
 cout << "Weight: "; cin >> weight; //Enter value for weight
 
    //Prompt the user to enter their height
 cout << "Please enter the height in inches and press ENTER. \n";
 cout << "Height: "; cin >> height; //Enter value for height
 
    //Prompt the user to enter their age
 cout << "Please enter the age in years and press ENTER. \n";
 cout << "Age: "; cin >> age; //Enter value for age

//Formulas for calories needed to maintain weight for male and female
    if ('m'==gender || 'M'==gender)
    {
        bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
    }
    else if ('f'==gender || 'F'==gender)
    {
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
    }
    
    //Variables
int const CBAR=230; //Chocolate calories
double chocoBar; //Number of chocolate bars
chocoBar = bmr / CBAR; //Algorithm for chocolate bars needed to maintain the body calories

//Set decimal numbers format
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout << "\nThe number of chocolate bars needed to maintain the weight of a person that is: \n"
     <<  weight << " pounds, " << height << " inches tall, and " << age << " years old is " 
     <<  chocoBar << endl; //Final calculations

//Ask user if they want to add another set of data
cout << "\nDo you want to enter another set of data?\n"
     << "Enter y for Yes or n for No\n";
cin >> yn;
} while(yn == 'y' || yn == 'y'); //declare 'while' statement
cout << "\nGood-Bye"; //'y' to add more data, 'n' to end program

    return 0;
}