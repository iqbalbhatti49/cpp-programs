#include <iostream>
#include <stdlib.h>
using namespace std;

void GPA();
void CGPA();
void Formula();
void Grade();

int main() {
    system("cls");

    int num;

    cout << "    _______________________________\n";
    cout << "   |-------------------------------|\n";
    cout << "   |   Developed by Iqbal Bhatti   |\n";
    cout << "   |_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
    cout << "\n\n";
    cout << "    _______________________________ \n";
    cout << "   | ============================= |\n";
    cout << "   | |   GPA & CGPA Calculator   | |\n";
    cout << "   |__***************************__|\n";
    cout << "\n";
    cout << " _____________________________________\n";
    cout << "|            |                        |\n";
    cout << "| Enter # 1  | --- GPA Calculator --- |\n";
    cout << "|____________|________________________|\n";
    cout << "\n";
    cout << " _____________________________________\n";
    cout << "|            |                        |\n";
    cout << "| Enter # 2  | -- CGPA Calculator --  |\n";
    cout << "|____________|________________________|\n";
    cout << "\n";
    cout << " _____________________________________\n";
    cout << "|            |- Calculating Method - |\n";
    cout << "| Enter # 3  | ---- GPA & CGPA  ---- |\n";
    cout << "|____________|_______________________|\n";
    cout << "\n";
    cout << " _____________________________________\n";
    cout << "|            |                        |\n";
    cout << "| Enter # 4  | ---- Grade Table ----  |\n";
    cout << "|____________|________________________|\n";
    cout << "\n";
    cout << "       _______________________\n";
    cout << "      |                       |\n";
    cout << "      | # SELECT ANY BUTTON # |\n";
    cout << "      |_______________________|\n";   
    cout << "\n";

    cin >> num;

    switch(num) {
        case 1:
               GPA();
               break;
        case 2:
               CGPA();
               break;
        case 3:
               Formula();
               break;
        case 4:
               Grade();
               break;       
        case 5:
               exit(EXIT_SUCCESS);
               break;
        default:
               cout << "You entered wrong input!\n";
               cout << "Try again.\n";
               break;
    }
    return 0;
}

void GPA() {

    int subject;
    system("cls");
    cout << " ________________________________________\n";
    cout << "|         ======================         |\n";
    cout << "|        |    GPA Calculator    |        |\n";
    cout << "|        |   Calculating now!   |        |\n";
    cout << "|_________**********************_________|\n";
    cout << "\n";
    cout << " _____________________\n";
    cout << "| Enter Subjects : ";
    cin >> subject;
    cout << " ---------------------\n";

    float hour [subject];
    float marks [subject];
    cout << "\n";
    
    for (int i = 0; i < subject; i++) {
        cout << " ___________________________________\n";
        cout << "| Enter subject " << i + 1 << " credit hours : ";
        cin >> hour[i];
        
        cout << "| Enter subject " << i + 1 << " Points : ";
        cin >> marks[i];
        cout << " -----------------------------------\n";
    }
    float total_point = 0;
    float point;
    for (int j = 0; j < subject; j++) {
        point = hour[j] * marks[j];
        total_point = total_point + point;
    }

    float total_hour = 0;
    for (int k = 0; k < subject; k++) {
        total_hour = total_hour + hour[k];
    }

    float total_gpa;
    total_gpa = total_point / total_hour;

    cout << " _____________________________\n";
    cout << " => Total Points : " << total_point << "\n";
    cout << " => Total Credit Hours : " << total_hour << "\n";
    cout << " => Total GPA : " << total_gpa << "\n";
    cout << " -----------------------------\n";

    if (total_gpa >= 4.0) {
        cout << " *** Your GPA Grade is A+ ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 3.67 & total_gpa < 4.0) {
        cout << " *** Your GPA Grade is A- ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 3.33 & total_gpa < 3.67) {
        cout << " *** Your GPA Grade is B+ ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 3.0 & total_gpa < 3.33) {
        cout << " *** Your GPA Grade is B ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 2.67 & total_gpa < 3.0) {
        cout << " *** Your GPA Grade is B- ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 2.33 & total_gpa < 2.67) {
        cout << " *** Your GPA Grade is C+ ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 2.0 & total_gpa < 2.33) {
        cout << " *** Your GPA Grade is C ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 1.67 & total_gpa < 2.0) {
        cout << " *** Your GPA Grade is C- ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 1.33 & total_gpa < 1.67) {
        cout << " *** Your GPA Grade is D+ ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 1.0 & total_gpa < 1.33) {
        cout << " *** Your GPA Grade is D ***\n";
        cout << "------------------------------\n";
    }
    else if (total_gpa >= 0.0 & total_gpa < 1.0) {
        cout << " ***** Your are Fail. *****\n";
        cout << "------------------------------\n";
    \}
    else {
        cout << "";
    }

    again:
    int menu;
    cout << "\n";
    cout << " ______________________________________\n";
    cout << "| Enter # 1 |   Again GPA Calculator   |\n";
    cout << "| Enter # 2 |         Main Menu        |\n";
    cout << "| Enter # 3 |         Exit App         |\n";
    cout << "!--------------------------------------!\n";
    cout << " _________________\n";
    cout << "|Select any button|\n";
    cout << "!-----------------!\n";
    cout << "\n";
    cin >> menu;

    switch(menu) {
        case 1:
               GPA();
               break;
        case 2:
               main();
               break;
        case 3:
               exit(EXIT_SUCCESS);
        default:
               cout << "\nWrong Selected\n\nPlease Choose Again\n";
               goto again;
    }
}
void CGPA() {
    system("cls");
    int num_sem;
    cout << " ________________________________________\n";
    cout << "|          =====================          |\n";
    cout << "|         |   CGPA Calculator   |         |\n";
    cout << "|         |   Calculating now!  |         |\n";
    cout << "|__________*********************__________|\n";
    cout << "\n\n";

    cout << " ______________________\n";
    cout << "  Enter Semesters : ";
    cin >> num_sem;
    cout << " ----------------------\n";
    float semester[num_sem];

    for (int i = 0; i < num_sem; i++) {
        cout << " ______________________________________\n";
        cout << "  Enter Semester " << i + 1 << " Result in GPA : ";
        cin >> semester[i];
        cout << " --------------------------------------\n";
    }

    float sum_gpa = 0;

    for (int k = 0; k < num_sem; k++) {
        sum_gpa = sum_gpa + semester[k];
    }
    float total_cgpa;
    total_cgpa = sum_gpa / num_sem;

    cout << " _______________________\n";
    cout << "   => Your CGPA : " << total_cgpa << "\n";
    cout << " -----------------------\n";

    if (total_cgpa >= 4.0) {
        cout << "  Your CGPA Grade is A+ \n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 3.67 & total_cgpa < 4.0) {
        cout << "  Your CGPA Grade is A-\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 3.33 & total_cgpa < 3.67) {
        cout << "  Your CGPA Grade is B+\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 3.0 & total_cgpa < 3.33) {
        cout << "  Your CGPA Grade is B\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 2.67 & total_cgpa < 3.0) {
        cout << "  Your CGPA Grade is B-\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 2.33 & total_cgpa < 2.67) {
        cout << "  Your CGPA Grade is C+\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 2.0 & total_cgpa < 2.33) {
        cout << "  Your CGPA Grade is C\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 1.67 & total_cgpa < 2.0) {
        cout << "  Your CGPA Grade is C-\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 1.33 & total_cgpa < 1.67) {
        cout << "  Your CGPA Grade is D+\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 1.0 & total_cgpa < 1.33) {
        cout << "  Your CGPA Grade is D\n";
        cout << " -----------------------\n";
    }
    else if (total_cgpa >= 0.0 & total_cgpa < 1.0) {
        cout << "    Your are Fail.\n";
        cout << " -----------------------\n";
    }
    else {
        cout << "";
    }

    again:
    int amenu;
    cout << "\n";
    cout << " ______________________________________\n";
    cout << "| Enter # 1 |  Again CGPA Calculator   |\n";
    cout << "| Enter # 2 |         Main Menu        |\n";
    cout << "| Enter # 3 |         Exit App         |\n";
    cout << "!--------------------------------------!\n";
    cout << " _________________\n";
    cout << "|Select any button|\n";
    cout << "!-----------------!\n";
    cout << "\n";
    cin >> amenu;

    switch (amenu) {
        case 1:
               CGPA();
               break;
        case 2:
               main();
               break;
        case 3:
               exit(EXIT_SUCCESS);
        default:
               cout << "\nWrong Selected\n\nPlease Choose Again\n";
               goto again;
    }
    
}

void Formula() {
    system("cls");
    cout << "           _______________________________________\n";
    cout << "          |         ======================         |\n";
    cout << "          |        |  Calculating Method  |        |\n";
    cout << "          |        |       GPA & CGPA     |        |\n";
    cout << "          |_________**********************_________|\n";
    cout << "\n\n";
    cout << " ________________________________________________________________\n";
    cout << "|                |                                               |\n";
    cout << "| GPA Calculate  | (Credit hours * Points) / Sum of Credit Hours |\n";
    cout << "|________________|_______________________________________________|\n";
    cout << "|                |                                               |\n";
    cout << "| CGPA Calculate |       Sum of GPA / Number of Semesters        |\n";
    cout << "|________________|_______________________________________________|\n";
    cout << "\n\n";
    
    again:
    int ymenu;
    cout << "\n";
    cout << " ______________________________________\n";
    cout << "| Enter # 1 |         Main Menu        |\n";
    cout << "| Enter # 2 |         Exit App         |\n";
    cout << "!--------------------------------------!\n";
    cout << " _________________\n";
    cout << "|Select any button|\n";
    cout << "!-----------------!\n";
    cout << "\n";
    cin >> ymenu;

    switch (ymenu) {
        case 1:
               main();
               break;
        case 2:
               exit(EXIT_SUCCESS);
        default:
               cout << "\nWrong Selected\n\nPlease Choose Again\n";
               goto again;
    }   
}

void Grade() {
    cout << " _______________________________________\n";
    cout << "|      =============================    |\n";
    cout << "|     |  Table for Award of Grades  |   |\n";
    cout << "|______*****************************____|\n";
    cout << "\n";
    cout << " ___________________________________\n";
    cout << "|   Marks     |  Grade  |    GPA    |\n";
    cout << "|-------------|---------|-----------|\n";
    cout << "|  85 - 100   |    A    |    4.0    |\n";
    cout << "|  82 - 84    |    A-   |    3.67   |\n";
    cout << "|  78 - 81    |    B+   |    3.33   |\n";
    cout << "|  74 - 77    |    B    |    3.0    |\n";
    cout << "|  70 - 73    |    B-   |    2.67   |\n";
    cout << "|  66 - 69    |    C+   |    2.33   |\n";
    cout << "|  62 - 65    |    C    |    2.0    |\n";
    cout << "|  58 - 61    |    C-   |    1.67   |\n";
    cout << "|  54 - 57    |    D+   |    1.33   |\n";
    cout << "|  50 - 53    |    D    |    1.0    |\n";
    cout << "|  Below 50   |    F    |    0.0    |\n";
    cout << "|_____________|_________|___________|\n";
    cout << "";

    again:
    int zmenu;
    cout << "\n";
    cout << " ______________________________________\n";
    cout << "| Enter # 1 |         Main Menu        |\n";
    cout << "| Enter # 2 |         Exit App         |\n";
    cout << "!--------------------------------------!\n";
    cout << " _________________\n";
    cout << "|Select any button|\n";
    cout << "!-----------------!\n";
    cout << "\n";
    cin >> zmenu;

    switch (zmenu) {
        case 1:
               main();
               break;
        case 2:
               exit(EXIT_SUCCESS);
        default:
               cout << "\nWrong Selected\n\nPlease Choose Again\n";
               goto again;
    }   
}
