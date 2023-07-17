#include <iostream>
#include <cmath>
using namespace std;
void centimeter();
void inch();
void foot();
void yard();
void mile();
void milimetre();
void meter();
void kilometer();
void formula();

int main() {
    system("cls");
    cout << " ______________________________\n";
    cout << "|                              |\n";
    cout << "|***  Quantities Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
    int select;
    cout << endl;
    cout << "                                                          made by *IQBAL BHATTI " << endl;
    cout << endl;
    cout << "Select any Quantity that you convert other Quantity.\n" << endl;
    cout << "1. Centimeter Quantity convert in other quantities.\n";
    cout << "2. Inch Quantity convert in other quantities.\n";
    cout << "3. Foot Quantity convert in other quantities.\n";
    cout << "4. Yard Quantity convert in other quantities.\n";
    cout << "5. Mile Quantity convert in other quantities.\n";
    cout << "6. Milimetre Quantity convert in other quantities.\n";
    cout << "7. Meter Quantity convert in other quantities.\n";
    cout << "8. Kilometer Quantity convert in other quantities.\n";
    cout << "9. Quantities Converter Formula\n";
    cout << "10.for Exit\n";
    cin >> select;
    switch (select) {
        case 1:
              centimeter();
              break;
        case 2:
              inch();
              break;  
        case 3:
              foot();
              break;
        case 4:
              yard();
              break;  
        case 5:
              mile();
              break;  
        case 6:
              milimetre();
              break;  
        case 7:
              meter();
              break;
        case 8:
              kilometer();
              break;  
        case 9:
              formula();
              break;       
        case 10:
              exit(EXIT_SUCCESS);
              break;                           
        default:
              cout << "Wrong Input\n";
              break;                
    }
    return 0;
}
void centimeter() {
    system("cls");
    cout << " _______________________________________\n";
    cout << "|                                       |\n";
    cout << "|***  Centimeter Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
    int cen;
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << endl;
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Foot'\n";
    cout << "Enter 3 for convert 'Mile'\n";
    cout << "Enter 4 for convert 'Yard'\n";
    cout << "Enter 5 for convert 'Micrometre'\n";
    cout << "Enter 6 for convert 'Milimetre'\n";
    cout << "Enter 7 for convert 'Meter'\n";
    cout << "Enter 8 for convert 'Kilometer'\n";
    cin >> cen;
    cout << endl;
    switch(cen) {
        case 1:
              int a;
              cout << "Enter number of Lengths : ";
              cin >> a;
              cout << endl;
              float centimeterr[20];
              if (a>0 && a<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeterr[0];
                    cout << endl;
                    cout << centimeterr[0] << " Centimeter = " << centimeterr[0] /2.54 << " Inch " << endl;
              }
              else if (a>1 && a<21) {    
                    for (int i=0; i<a; i++) {
                          cout << "Enter Centimeter_" << i+1 << " : ";
                          cin >> centimeterr[i];
                    }
                    cout << endl;
                    for (int x=0; x<a; x++) {
                          cout << centimeterr[x] << " Centimeter" << " = " << centimeterr[x]/2.54 << " Inch " << endl;
                    }
                    cout << endl;
                    float centi;
                    for (int j=0; j<a; j++) {
                          centi = centi + centimeterr[j];
                    }
                    float inch;
                    inch = centi / 2.54;
                    cout << "Total Centimeters " << centi << " = " << inch << " Inch";
              }
              else {
                    cout << "Please Choose number of length less than 20 " << endl;
              }
              break;  
        case 2:
              int b;
              cout << "Enter number of Lengths : ";
              cin >> b;
              cout << endl;
              float centimeter2[20];
              if (b>0 && b<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter2[0];
                    cout << endl;
                    cout << centimeter2[0] << " Centimeter = " << centimeter2[0] /30.48 << " Foot " << endl;
              }
              else if (b>1 && b<21) {
                    for (int i2=0; i2<b; i2++) {
                          cout << "Enter Centimeter_" << i2+1 << " : ";
                          cin >> centimeter2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b; x2++) {
                          cout << centimeter2[x2] << " Centimeter = " << centimeter2[x2]/30.48 << " Foot " << endl; 
                    }
                    cout << endl;
                    float centi2;
                    for (int j2=0; j2<b; j2++) {
                          centi2 = centi2 + centimeter2[j2];
                    }
                   float foot;
                   foot = centi2 / 30.48;
                   cout << "Total centimeters " << centi2 << " = " << foot << " Foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 3:
              int c;
              cout << "Enter Lengths : ";
              cin >> c;
              cout << endl;
              float centimeter3[20];
              if (c>0 && c<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter3[0];
                    cout << endl;
                    cout << centimeter3[0] << " Centimeter = " << centimeter3[0] /160934 << " Mile " << endl;
              }
              else if (c>1 && c<21) {
                    for (int i3=0; i3<c; i3++) {
                          cout << "Enter Centimeter_" << i3+1 << " : ";
                          cin >> centimeter3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c; x3++) {
                          cout << centimeter3[x3] << " Centimeter = " << centimeter3[x3]/160934 << " Mile " << endl;
                    }
                    cout << endl;
                    float centi3;
                    for (int k3=0; k3<c; k3++) {
                          centi3 = centi3 + centimeter3[k3];
                    }
                    float mile;
                    mile = centi3 / 160934;
                    cout << "Total Centimeters " << centi3 << " = " << mile << " Mile ";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 4:
              int d;
              cout << "Enter number of Lengths : ";
              cin >> d;
              cout << endl;
              float centimeter4[20];
              if (d>0 && d<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter4[0];
                    cout << endl;
                    cout << centimeter4[0] << " Centimeter = " << centimeter4[0] /91.44 << " Yard " << endl;
              }
              else if (d>1 && d<21) {
                    for (int i4=0; i4<d; i4++) {
                          cout << "Enter Centimeter_" << i4+1 << " : ";
                          cin >> centimeter4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d; x4++) {
                          cout << centimeter4[x4] << " Centimeter = " << centimeter4[x4]/91.44 << " Yard " << endl;
                    }
                    cout << endl;
                    float centi4;
                    for (int k4=0; k4<d; k4++) {
                          centi4 = centi4 + centimeter4[k4];
                    }
                    float yard;
                    yard = centi4 / 91.44;
                    cout << "Total Centimeters " << centi4 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              int e;
              cout << "Enter number of Lengths : ";
              cin >> e;
              cout << endl;
              float centimeter5[20];
              if (e>0 && e<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter5[0];
                    cout << endl;
                    cout << centimeter5[0] << " Centimeter = " << centimeter5[0] *10000 << " Micrometer " << endl;
              }
              else if (e>1 && e<21) {
                    for (int i5=0; i5<e; i5++) {
                          cout << "Ener Centimeter_" << i5+1 << " : ";
                          cin >> centimeter5[e];
                    }
                    cout << endl;
                    for (int x5=0; x5<e; x5++) {
                          cout << centimeter5[x5] << " Centimeter = " << centimeter5[x5]*10000 << " Micrometer " << endl;
                    }
                    cout << endl;
                    float centi5;
                    for (int k5=0; k5<e; k5++) {
                          centi5 = centi5 + centimeter5[k5];
                    }
                    float micrometer;
                    micrometer = centi5 * 10000;
                    cout << "Total Centimeter " << centi5 << " = " << micrometer << " Micrometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f;
              cout << "Enter number of Lengths : ";
              cin >> f;
              cout << endl;
              float centimeter6[20];
              if (f>0 && f<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter6[0];
                    cout << endl;
                    cout << centimeter6[0] << " Centimeter = " << centimeter6[0] *10 << " Milimeter " << endl;
              }
              else if (f>1 && f<21) {
                    for (int i6=0; i6<f; i6++) {
                          cout << "Enter Centimeter_" << i6+1 << " : ";
                          cin >> centimeter6[i6];
                    }
                    cout << endl;
                    for (int x6=0; x6<f; x6++) {
                          cout << centimeter6[x6] << " Centimeter = " << centimeter6[x6]*10 << " Milimeter " << endl;
                    }
                    cout << endl;
                    float centi6;
                    for (int k6=0; k6<f; k6++) {
                          centi6 = centi6 + centimeter6[k6];
                    }
                    float milimeter;
                    milimeter = centi6 * 10;
                    cout << "Total Centimeters " << centi6 << " = " << milimeter << " Milimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 7:
              int l;
              cout << "Enter number of Lengths : ";
              cin >> l;
              cout << endl;
              float centimeter7[20];
              if (l>0 && l<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter7[0];
                    cout << endl;
                    cout << centimeter7[0] << " Centimeter = " << centimeter7[0] /100 << " Meter " << endl;
              }
              else if (l>1 && l<21) {
                    for (int i7=0; i7<l; i7++) {
                          cout << "Enter Centimeter_" << i7+1 << " : ";
                          cin >> centimeter7[i7]; 
                    }
                    cout << endl;
                    for (int x7=0; x7<l; x7++) {
                          cout << centimeter7[x7] << " Centimeter = " << centimeter7[x7]/100 << " Meter " << endl;
                    }
                    cout << endl;
                    float centi7;
                    for (int k7=0; k7<l; k7++) {
                          centi7 = centi7 + centimeter7[k7];
                    }
                    float meter;
                    meter = centi7 / 100;
                    cout << "Total Centimeters " << centi7 << " = " << meter << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 8:
              int m;
              cout << "Enter number of Lengths : ";
              cin >> m;
              cout << endl;
              float centimeter8[20];
              if (m>0 && m<=1) {
                    cout << "Enter Centimeter : ";
                    cin >> centimeter8[0];
                    cout << endl;
                    cout << centimeter8[0] << " Centimeter = " << centimeter8[0] /100000 << " Kilometer " << endl;
              }
              else if (m>1 && m<21) {
                    for (int i8=0; i8<m; i8++) {
                          cout << "Enter Centimeter_" << i8+1 << " : ";
                          cin >> centimeter8[i8];
                    }
                    cout << endl;
                    for (int x8=0; x8<m; x8++) {
                          cout << centimeter8[x8] << " Centimeter = " << centimeter8[x8]/100000 << " Kilometer " << endl;
                    }
                    cout << endl;
                    float centi8;
                    for (int k8=0; k8<m; k8++) {
                          centi8 = centi8 + centimeter8[k8];
                    }
                    float kilometer;
                    kilometer = centi8 / 100000;
                    cout << "Total Centimeters " << centi8 << " = " << kilometer << " Kilometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "\nWrong Input\nTry Again.\n";
              break;                       
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Centimeter Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              centimeter();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void inch() {
    system("cls");
    cout << " _________________________________\n";
    cout << "|                                 |\n";
    cout << "|***  Inch Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
    cout << "\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << endl;
    int in;
    cout << "Enter 1 for convert 'Foot'\n";
    cout << "Enter 2 for convert 'Yard'\n";
    cout << "Enter 3 for convert 'Mile'\n";
    cout << "Enter 4 for convert 'Milimeter'\n";
    cout << "Enter 5 for convert 'Centimeter'\n";
    cout << "Enter 6 for convert 'Meter'\n";
    cout << "Enter 7 for convert 'Kilometer'\n";
    cin >> in;
    cout << endl;
    switch(in) {
        case 1:
              int a2;
              cout << "Enter number of Lengths : ";
              cin >> a2;
              cout << endl;
              float inch[20];
              if (a2>0 && a2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch[0];
                    cout << endl;
                    cout << inch[0] << " Inch = " << inch[0] /12 << " Foot " << endl;
              }
              else if (a2>1 && a2<21) {
                    for (int i=0; i<a2; i++) {
                          cout << "Enter Inch_" << i+1 << " : ";
                          cin >> inch[i];
                    }
                    cout << endl;
                    for (int x=0; x<a2; x++) {
                          cout << inch[x] << " Inch = " << inch[x]/12 << " Foot " << endl;
                    }
                    cout << endl;
                    float inc;
                    for (int k=0; k<a2; k++) {
                          inc = inc + inch[k];
                    }
                    float foot;
                    foot = inc / 12;
                    cout << "Total Inch " << inc << " = " << foot << " Foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2:
              int b2;
              cout << "Enter number of Lengths : ";
              cin >> b2;
              cout << endl;
              float inch2[20];
              if (b2>0 && b2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch2[0];
                    cout << endl;
                    cout << inch2[0] << " Inch = " << inch2[0] /36 << " Yard " << endl;
              }
              else if (b2>1 && b2<21) {
                    for (int i2=0; i2<b2; i2++) {
                          cout << "Enter Inch_" << i2+1 << " : ";
                          cin >> inch2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b2; x2++) {
                          cout << inch2[x2] << " Inch = " << inch2[x2]/36 << " Yard " << endl;
                    }
                    cout << endl;
                    float inc2;
                    for (int k2=0; k2<b2; k2++) {
                          inc2 = inc2 + inch2[k2];
                    }
                    float yard;
                    yard = inc2 / 36;
                    cout << "Total Inch " << inc2 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 3:
              int c2;
              cout << "Enter number of Lengths : ";
              cin >> c2;
              cout << endl;
              float inch3[20];
              if (c2>0 && c2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch3[0];
                    cout << endl;
                    cout << inch3[0] << " Inch = " << inch3[0] /63360 << " Mile " << endl;
              }
              else if (c2>1 && c2<21) {
                    for (int i3=0; i3<c2; i3++) {
                          cout << "Enter Inch_" << i3+1 << " : ";
                          cin >> inch3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c2; x3++) {
                          cout << inch3[x3] << " Inch = " << inch3[x3]/63360 << " Mile " << endl;
                    }
                    cout << endl;
                    float inc3;
                    for (int k3=0; k3<c2; k3++) {
                          inc3 = inc3 + inch3[k3];
                    }
                    float mile;
                    mile = inc3 / 63360;
                    cout << "Total Inch " << inc3 << " = " << mile << " Mile";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;     
        case 4:
              int d2;
              cout << "Enter number of Lengths : ";
              cin >> d2;
              cout << endl;
              float inch4[20];
              if (d2>0 && d2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch4[0];
                    cout << endl;
                    cout << inch4[0] << " Inch = " << inch4[0] *25.4 << " Milimeter " << endl;
              }
              else if (d2>1 && d2<21) {
                    for (int i4=0; i4<d2; i4++) {
                          cout << "Enter Inch_" << i4+1 << " : ";
                          cin >> inch4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d2; x4++) {
                          cout << inch4[x4] << " Inch = " << inch4[x4]*25.4 << " Milimeter " << endl;
                    }
                    cout << endl;
                    float inc4;
                    for (int k4=0; k4<d2; k4++) {
                          inc4 = inc4 + inch4[k4];
                    }
                    float milimeter;
                    milimeter = inc4 * 25.4;
                    cout << "Total Inch " << inc4 << " = " << milimeter << " Milimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;         
        case 5:
              int e2;
              cout << "Enter number of Lengths : ";
              cin >> e2;
              cout << endl;
              float inch5[20];
              if (e2>0 && e2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch5[0];
                    cout << endl;
                    cout << inch5[0] << " Inch = " << inch5[0] *2.54 << " Centimeter " << endl;
              }
              else if (e2>1 && e2<21) {
                    for (int i5=0; i5<e2; i5++) {
                          cout << "Enter Inch_" << i5+1 << " : ";
                          cin >> inch5[i5];                  
                    }
                    cout << endl;
                    for (int x5=0; x5<e2; x5++) {
                          cout << inch5[x5] << " Inch = " << inch5[x5]*2.54 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float inc5;
                    for (int k5=0; k5<e2; k5++) {
                          inc5 = inc5 + inch5[k5];
                    }
                    float centimeter;
                    centimeter = inc5 * 2.54;
                    cout << "Total Inch " << inc5 << " = " << centimeter << " Centimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f2;
              cout << "Enter number of Lengths : ";
              cin >> f2; 
              cout << endl;
              float inch6[20];
              if (f2>0 && f2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch6[0];
                    cout << endl;
                    cout << inch6[0] << " Inch = " << inch6[0] /39.37 << " Meter " << endl;
              }
              else if (f2>1 && f2<21) {
                    for (int i6=0; i6<f2; i6++) {
                          cout << "Enter Inch_" << i6+1 << " : ";
                          cin >> inch6[i6];
                    }
                    cout << endl;
                    for (int x6=0; x6<f2; x6++) {
                          cout << inch6[x6] << " Inch = " << inch6[x6]/39.37 << " Meter " << endl;
                    }
                    cout << endl;
                    float inc6;
                    for (int k6=0; k6<f2; k6++) {
                          inc6 = inc6 + inch6[k6];
                    }
                    float meter;
                    meter = inc6 / 39.37;
                    cout << "Total Inch " << inc6 << " = " << meter << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 7:
              int l2;
              cout << "Enter number of Lengths : ";
              cin >> l2;
              cout << endl;
              float inch7[20];
              if (l2>0 && l2<=1) {
                    cout << "Enter Inch : ";
                    cin >> inch7[0];
                    cout << endl;
                    cout << inch7[0] << " Inch = " << inch7[0] /39370 << " Kilometer " << endl;
              }
              else if (l2>1 && l2<21) {
                    for (int i7=0; i7<l2; i7++) {
                          cout << "Enter Inch_" << i7+1 << " : ";
                          cin >> inch7[i7];
                    }
                    cout << endl;
                    for (int x7=0; x7<l2; x7++) {
                          cout << inch7[x7] << " Inch = " << inch7[x7]/39370 << " Kilometer " << endl;
                    }
                    cout << endl;
                    float inc7;
                    for(int k7=0; k7<l2; k7++) {
                         inc7 = inc7 + inch7[k7];
                    }
                    float kilometer;
                    kilometer = inc7 / 39370;
                    cout << "Total Inch " << inc7 << " = " << kilometer << " Kilometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "\nWrong Input\nTry Again\n";
              break;               
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Inch Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              inch();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void foot() {
    system("cls");
    cout << " _________________________________\n";
    cout << "|                                 |\n";
    cout << "|***  Foot Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << endl;
    int foo;
    cout << "\n";
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Yard'\n";
    cout << "Enter 3 for convert 'Mile'\n";
    cout << "Enter 4 for convert 'Milimeter'\n";
    cout << "Enter 5 for convert 'Centimeter'\n";
    cout << "Enter 6 for convert 'Meter'\n";
    cout << "Enter 7 for convert 'Kilometer'\n";
    cin >> foo;
    switch (foo) {
        case 1:
              int a3;
              cout << "Enter number of Lengths : ";
              cin >> a3;
              cout << endl;
              float foot[20];
              if (a3>0 && a3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot[0];
                    cout << endl;
                    cout << foot[0] << " Foot = " << foot[0] *12 << " Inch " << endl;
              }
              else if (a3>1 && a3<21) {
                    for (int i=0; i<a3; i++) {
                          cout << "Enter Foot_" << i+1 << " : ";
                          cin >> foot[i];
                    }
                    cout << endl;
                    for (int x=0; x<a3; x++) {
                          cout << foot[x] << " Foot = " << foot[x]*12 << " Inch " << endl;
                    }
                    cout << endl;
                    float foo;
                    for (int k=0; k<a3; k++) {
                          foo = foo + foot[k];
                    }
                    float inch;
                    inch = foo * 12;
                    cout << "Total Foot " << foo << " = " << inch << " Inch";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2:
              int b3;
              cout << "Enter number of Lengths : ";
              cin >> b3;
              cout << endl;
              float foot2[20];
              if (b3>0 && b3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot2[0];
                    cout << endl;
                    cout << foot2[0] << " Foot = " << foot2[0] /3 << " Yard " << endl;
              }
              else if (b3>1 && b3<21) {
                    for (int i2=0; i2<b3; i2++) {
                          cout << "Enter Foot_" << i2+1 << " : ";
                          cin >> foot2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b3; x2++) {
                          cout << foot[x2] << " Foot = " << foot[x2]/3 << " Yard " << endl;
                    } 
                    cout << endl;
                    float foo2;
                    for (int k2=0; k2<b3; k2++) {
                          foo2 = foo2 + foot2[k2];
                    }
                    float yard;
                    yard = foo2 / 3;
                    cout << "Total Foot " << foo2 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 3:
              int c3;
              cout << "Enter number of Lengths : ";
              cin >> c3;
              cout << endl;
              float foot3[20];
              if (c3>0 && c3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot3[0];
                    cout << endl;
                    cout << foot3[0] << " Foot = " << foot3[0] /5280 << " Mile " << endl;
              }
              else if (c3>1 && c3<21) {
                    for (int i3=0; i3<c3; i3++) {
                          cout << "Enter Foot_" << i3+1 << " : ";
                          cin >> foot3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c3; x3++) {
                          cout << foot3[x3] << " Foot = " << foot3[x3]/5280 << " Mile " << endl;
                    }
                    cout << endl;
                    float foo3;
                    for (int k3=0; k3<c3; k3++) {
                          foo3 = foo3 + foot3[k3];
                    }
                    float mile;
                    mile = foo3 / 5280;
                    cout << "Total Foot " << foo3 << " = " << mile << " Mile";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;  
        case 4:
              int d3;
              cout << "Enter number of Lengths : ";
              cin >> d3;
              cout << endl;
              float foot4[20];
              if (d3>0 && d3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot4[0];
                    cout << endl;
                    cout << foot4[0] << " Foot = " << foot4[0] *305 << " Milimeter " << endl;
              }
              else if (d3>1 && d3<21) {
                    for (int i4=0; i4<d3; i4++) {
                          cout << "Enter Foot_" << i4+1 << ": ";
                          cin >> foot4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d3; x4++) {
                          cout << foot4[x4] << " Foot = " << foot4[x4]*305 << " Milimeter " << endl;
                    }
                    cout << endl;
                    float foo4;
                    for (int k4=0; k4<d3; k4++) {
                          foo4 = foo4 + foot4[k4];
                    }
                    float milimeter;
                    milimeter = foo4 * 305;
                    cout << "Total Foot " << foo4 << " = " << milimeter << " Milimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              int e3;
              cout << "Enter number of Lengths : ";
              cin >> e3;
              cout << endl;
              float foot5[20];
              if (e3>0 && e3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot5[0];
                    cout << endl;
                    cout << foot5[0] << " Foot = " << foot5[0] *30.48 << " Centimeter " << endl;
              }
              else if (e3>1 && e3<21) {
                    for (int i5=0; i5<e3; i5++) {
                          cout << "Enter Foot_" << i5+1 << " : ";
                          cin >> foot5[i5];
                    }
                    cout << endl;
                    for (int x5=0; x5<e3; x5++) {
                          cout << foot5[x5] << " Foot = " << foot5[x5]*30.48 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float foo5;
                    for (int k5=0; k5<e3; k5++) {
                          foo5 = foo5 + foot5[k5];
                    }
                    float centimeter;
                    centimeter = foo5 * 30.48;
                    cout << "Total Foot " << foo5 << " = " << centimeter << " Centimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f3;
              cout << "Enter number of Lengths : ";
              cin >> f3;
              cout << endl;
              float foot6[20];
              if (f3>0 && f3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot6[0];
                    cout << endl;
                    cout << foot6[0] << " Foot = " << foot6[0] /3.281 << " Meter " << endl;
              }
              else if (f3>1 && f3<21) {
                    for (int i6=0; i6<f3; i6++) {
                          cout << "Enter Foot_" << i6+1 << " : ";
                          cin >> foot6[i6];
                    }
                    cout << endl;
                    for (int x6=0; x6<f3; x6++) {
                          cout << foot6[x6] << " Foot = " << foot6[x6]/3.281 << " Meter " << endl;
                    }
                    cout << endl;
                    float foo6;
                    for (int k6=0; k6<f3; k6++) {
                          foo6 = foo6 + foot6[k6];
                    }
                    float meter;
                    meter = foo6 / 3.281;
                    cout << "Total Foot " << foo6 << " = " << meter << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 7:
              int l3;
              cout << "Enter number of Lengths : ";
              cin >> l3;
              cout << endl;
              float foot7[20];
              if (l3>0 && l3<=1) {
                    cout << "Enter Foot : ";
                    cin >> foot7[0];
                    cout << endl;
                    cout << foot7[0] << " Foot = " << foot7[0] /3281 << " Kilometer " << endl;
              }
              else if (l3>1 && l3<21) {
                    for (int i7=0; i7<l3; i7++) {
                          cout << "Enter Foot_" << i7+1 << " : ";
                          cin >> foot7[i7];
                    }
                    cout << endl;
                    for (int x7=0; x7<l3; x7++) {
                          cout << foot7[x7] << " Foot = " << foot7[x7]/3281 << " Kilometer " << endl;
                    }
                    cout << endl;
                    float foo7;
                    for (int k7=0; k7<l3; k7++) {
                          foo7 = foo7 + foot7[k7];
                    }
                    float kilometer;
                    kilometer = foo7 / 3281;
                    cout << "Total Foot " << foo7 << " = " << kilometer << " Kilometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "\nWrong Input\nTry Again\n";
              break;                                       
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Foot Quantity Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              foot();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void yard() {
    system("cls");
    cout << " _________________________________\n";
    cout << "|                                 |\n";
    cout << "|***  Yard Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << endl;
    int ya;
    cout << "\n";
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Foot'\n";
    cout << "Enter 3 for convert 'Mile'\n";
    cout << "Enter 4 for convert 'Milimeter'\n";
    cout << "Enter 5 for convert 'Centimeter'\n";
    cout << "Enter 6 for convert 'Meter'\n";
    cout << "Enter 7 fot convert 'Kilometer'\n";
    cin >> ya;
    switch(ya) {
        case 1:
              int a4;
              cout << "Enter number of Lengths : ";
              cin >> a4;
              cout << endl;
              float yard[20];
              if (a4>0 && a4<=1) {
                    cout << "Enter Yard : ";
                    cin >> yard[0];
                    cout << endl;
                    cout << yard[0] << " Yard = " << yard[0] *36 << " Inch " << endl;
              }
              else if (a4>1 && a4<21) {
                    for (int i=0; i<a4; i++) {
                          cout << "Enter Yard_" << i+1 << " : ";
                          cin >> yard[i];
                    }
                    cout << endl;
                    for (int x=0; x<a4; x++) {
                          cout << yard[x] << " Yard = " << yard[x]*36 << " Inch " << endl;
                    }
                    cout << endl;
                    float ya;
                    for (int j=0; j<a4; j++) {
                          ya = ya + yard[j];
                    }
                    float inch;
                    inch = ya * 36;
                    cout << "Total Yard " << ya << " = " << inch << " Inch";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2:
              int b4;
              cout << "Enter number of Lengths : ";
              cin >> b4;
              cout << endl;
              float yard2[20];
              if (b4>0 && b4<=1) {
                    cout << "Enter Yard : ";
                    cin >> yard2[0];
                    cout << endl;
                    cout << yard2[0] << " Yard = " << yard2[0] *3 << " Foot " << endl;
              }
              else if (b4>1 && b4<21) {
                    for (int i2=0; i2<b4; i2++) {
                          cout << "Enter Yard_" << i2+1 << " : ";
                          cin >> yard2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b4; x2++) {
                          cout << yard2[x2] << " Yard = " << yard2[x2]*3 << " Foot " << endl;
                    }
                    cout << endl;
                    float ya2;
                    for (int j2=0; j2<b4; j2++) {
                          ya2 = ya2 + yard[j2];
                    }
                   float foot;
                   foot = ya2 * 3;
                   cout << "Total Yard " << ya2 << " = " << foot << " Foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 3:
              float c4;
              cout << "Enter number of Lengths : ";
              cin >> c4;
              cout << endl;
              float yard3[20];
              if (c4>0 && c4<=1) {
                    cout << "Enter Yard : ";
                    cin >> yard3[0];
                    cout << endl;
                    cout << yard3[0] << " Yard = " << yard3[0] /1760 << " Mile " << endl;
              }
              else if (c4>1 && c4<21) {
                    for (int i3=0; i3<c4; i3++) {
                          cout << "Enter Yard_" << i3+1 << " : ";
                          cin >> yard3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c4; x3++) {
                          cout << yard3[x3] << " Yard = " << yard3[x3]/1760 << " Mile " << endl;
                    }
                    cout << endl;
                    float ya3;
                    for (int j3=0; j3<c4; j3++) {
                          ya3 = ya3 + yard3[j3];
                    }
                    float mile;
                    mile = ya3 / 1760;
                    cout << "Total Yard " << ya3 << " = " << mile << " Mile";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 4:
              float d4;
              cout << "Enter number of Lengths : ";
              cin >> d4;
              cout << endl;
              float yard4[20];
              if (d4>0 && d4<=1) {
                    cout << "Enter Yard : ";
                    cin >> yard4[0];
                    cout << endl;
                    cout << yard4[0] << " Yard = " << yard4[0] *914.4 << " Milimeter " << endl;
              }
              else if (d4>1 && d4<21) {
                    for (int i4=0; i4<d4; i4++) {
                          cout << "Enter Yard_" << i4+1 << " : ";
                          cin >> yard4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d4; x4++) {
                          cout << yard4[x4] << " Yard = " << yard4[x4]*914.4 << " Milimeter " << endl;
                    }
                    cout << endl;
                    float ya4;
                    for (int j4=0; j4<d4; j4++) {
                          ya4 = ya4 + yard4[j4]; 
                    }
                    float milimeter;
                    milimeter = ya4 * 914.4;
                    cout << "Total Yard " << ya4 << " = " << milimeter << " Milimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              int e4;
              cout << "Enter number of Lengths : ";
              cin >> e4;
              cout << endl;
              float yard5[20];
              if (e4>0 && e4<=1) {
                    cout << "Enter Yard : ";
                    cin >> yard5[0];
                    cout << endl;
                    cout << yard5[0] << " Yard = " << yard5[0] *91.44 << " Centimeter " << endl;
              }
              else if (e4>1 && e4<21) {
                    for (int i5=0; i5<e4; i5++) {
                          cout << "Enter Yard_" << i5+1 << " : ";
                          cin >> yard5[i5];
                    }
                    cout << endl;
                    for (int x5=0; x5<e4; x5++) {
                          cout << yard5[x5] << " Yard = " << yard5[x5]*91.44 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float ya5;
                    for (int j5=0; j5<e4; j5++) {
                          ya5 = ya5 + yard5[j5];
                    }
                    float centimeter;
                    centimeter = ya5 * 91.44;
                    cout << "Total Yard " << ya5 << " = " << centimeter << " Centimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f4;
              cout << "Enter number of Lengths : ";
              cin >> f4;
              cout << endl;
              float yard6[20];
              if (f4>0 && f4<=1) {
                    cout << "Enter Yard : ";
                    cin >> yard6[0];
                    cout << endl;
                    cout << yard6[0] << " Yard = " << yard6[0] /1.094 << " Meter " << endl;
              }
              else if (f4>1 && f4<21) {
                    for (int i6=0; i6<f4; i6++) {
                          cout << "Enter Yard_" << i6+1 << " : ";
                          cin >> yard6[i6];
                    }
                   cout << endl;
                   for (int x6=0; x6<f4; x6++) {
                         cout << yard6[x6] << " Yard = " << yard6[x6]/1.094 << " Meter " << endl; 
                   }
                   cout << endl;
                   float ya6;
                   for (int j6=0; j6<f4; j6++) {
                         ya6 = ya6 + yard6[j6];
                   }
                   float meter;
                   meter = ya6 / 1.094;
                   cout << "Total Yard " << ya6 << " = " << meter << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 7:
              int l4;
              cout << "Enter number of Lengths : ";
              cin >> l4;
              cout << endl;
              float yard7[20];
              if (l4>0 && l4<21) {
                    cout << "Enter Yard : ";
                    cin >> yard7[0];
                    cout << endl;
                    cout << yard7[0] << " Yard = " << yard7[0] /1094 << " Kilometer " << endl;
              }
              else if (l4>1 && l4<21) {
                    for (int i7=0; i7<l4; i7++) {
                          cout << "Enter Yard_" << i7+1 << " : ";
                          cin >> yard7[i7];
                    }
                    cout << endl;
                    for (int x7=0; x7<l4; x7++) {
                          cout << yard7[x7] << " Yard = " << yard7[x7]/1094 << " Kilometer " << endl; 
                    }
                    cout << endl;
                    float ya7;
                    for (int j7=0; j7<l4; j7++) {
                          ya7 = ya7 + yard7[j7];
                    }
                    float kilometer;
                    kilometer = ya7 / 1094;
                    cout << "Total Yard " << ya7 << " = " << kilometer << " Kilometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "Wrong Input\n";
              break;                                     
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Yard Quantity Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              yard();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void mile() {
    system("cls");
    cout << " _________________________________\n";
    cout << "|                                 |\n";
    cout << "|***  Mile Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << endl;
    int mi;
    cout << "\n";
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Foot'\n";
    cout << "Enter 3 for convert 'Yard'\n";
    cout << "Enter 4 for convert 'Centimeter'\n";
    cout << "Enter 5 for convert 'Meter'\n";
    cout << "Enter 6 fot convert 'Kilometer'\n";
    cin >> mi;
    switch(mi) {
        case 1:
              int a5;
              cout << "Enter number of Lengths : ";
              cin >> a5;
              cout << endl;
              float mile[20];
              if (a5>0 && a5<=1) {
                    cout << "Enter Mile : ";
                    cin >> mile[0];
                    cout << endl;
                    cout << mile[0] << " Mile = " << mile[0] *63360 << " Inch " << endl;
              }
              else if (a5>1 && a5<21) {
                    for (int i=0; i<a5; i++) {
                          cout << "Enter Mile_" << i+1 << " : ";
                          cin >> mile[i];
                    }
                    cout << endl;
                    for (int x=0; x<a5; x++) {
                          cout << mile[x] << " Mile = " << mile[x]*63360 << " Inch " << endl;
                    }
                    float mil;
                    for (int j=0; j<a5; j++) {
                          mil = mil + mile[j];
                    }
                    float inch;
                    inch = mil * 63360;
                    cout << "Total Mile " << mil << " = " << inch << " Inch";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2: 
              int b5;
              cout << "Enter number of Lengths : ";
              cin >> b5;
              cout << endl;
              float mile2[20];
              if (b5>0 && b5<=1) {
                    cout << "Enter Mile : ";
                    cin >> mile2[0];
                    cout << endl;
                    cout << mile2[0] << " Mile = " << mile2[0] *5280 << " Foot " << endl;
              }
              else if (b5>1 && b5<21) {
                    for (int i2=0; i2<b5; i2++) {
                          cout << "Enter Mile_" << i2+1 << " : ";
                          cin >> mile2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b5; x2++) {
                          cout << mile2[x2] << " Mile = " << mile2[x2]*5280 << " Foot " << endl;
                    }
                    cout << endl;
                    float mil2;
                    for (int j2=0; j2<b5; j2++) {
                          mil2 = mil2 + mile2[j2];
                    }
                    float foot;
                    foot = mil2 * 5280;
                    cout << "Total Mile " << mil2 << " = " << foot << " Foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;      
        case 3:
              int c5;
              cout << "Enter number of Lengths : ";
              cin >> c5;
              cout << endl;
              float mile3[20];
              if (c5>0 && c5<=1) {
                    cout << "Enter Mile : ";
                    cin >> mile3[0];
                    cout << endl;
                    cout << mile3[0] << " Mile = " << mile3[0] *1760 << " Yard " << endl;
              }
              else if (c5>1 && c5<21) {
                    for (int i3=0; i3<c5; i3++) {
                          cout << "Ente Mile_" << i3+1 << " : ";
                          cin >> mile3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c5; x3++) {
                          cout << mile3[x3] << " Mile = " << mile3[x3]*1760 << " Yard " << endl;
                    }
                    cout << endl;
                    float mil3;
                    for (int j3=0; j3<c5; j3++) {
                          mil3 = mil3 + mile3[j3];
                    }
                    float yard;
                    yard = mil3 * 1760;
                    cout << "Total Mile " << mil3 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;   
        case 4:
              int d5;
              cout << "Enter number of Lengths : ";
              cin >> d5;
              cout << endl;
              float mile4[20];
              if (d5>0 && d5<=1) {
                    cout << "Enter Mile : ";
                    cin >> mile4[0];
                    cout << endl;
                    cout << mile4[0] << " Mile = " << mile4[0] *160934 << " Centimeter " << endl;
              }
              else if (d5>1 && d5<21) {
                    for (int i4=0; i4<d5; i4++) {
                          cout << "Enter Mile_" << i4+1 << " : ";
                          cin >> mile4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d5; x4++) {
                          cout << mile4[x4] << " Mile = " << mile4[x4]*160934 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float mil4;
                    for (int j4=0; j4<d5; j4++) {
                          mil4 = mil4 + mile4[j4];
                    }
                    float centimeter;
                    centimeter = mil4 * 160934;
                    cout << "Total Mile " << mil4 << " = " << centimeter << " Centimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              int e5;
              cout << "Enter number of Lengths : ";
              cin >> e5; 
              cout << endl;
              float mile5[20];
              if (e5>0 && e5<=1) {
                    cout << "Enter Mile : ";
                    cin >> mile5[0];
                    cout << endl;
                    cout << mile5[0] << " Mile = " << mile5[0] *1609 << " Meter " << endl;
              }
              else if (e5>1 && e5<21) {
                    for (int i5=0; i5<e5; i5++) {
                          cout << "Enter Mile_" << i5+1 << " : ";
                          cin >> mile5[i5];
                    }
                    cout << endl;
                    for (int x5=0; x5<e5; x5++) {
                          cout << mile5[x5] << " Mile = " << mile5[x5]*1609 << " Meter " << endl;
                    }
                    cout << endl;
                    float mil5;
                    for (int k5=0; k5<e5; k5++) {
                          mil5 = mil5 + mile5[k5];
                    }
                    float meter;
                    meter = mil5 * 1609;
                    cout << "Total Mile " << mil5 << " = " << meter << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f5;
              cout << "Enter number of Lengths : ";
              cin >> f5;
              cout << endl;
              float mile6[20];
              if (f5>0 && f5<=1) {
                    cout << "Enter Mile : ";
                    cin >> mile6[0];
                    cout << endl;
                    cout << mile6[0] << " Mile = " << mile6[0] *1.609 << " Kilometer " << endl;
              }
              else if (f5>1 && f5<21) {
                    for (int i6=0; i6<f5; i6++) {
                          cout << "Enter Mile_" << i6+1 << " : ";
                          cin >> mile6[i6];
                    }
                    cout << endl;
                    for (int x6=0; x6<f5; x6++) {
                          cout << mile6[x6] << " Mile = " << mile6[x6]*1.609 << " Kilometer " << endl;
                    }
                    cout << endl;
                    float mil6;
                    for (int j6=0; j6<f5; j6++) {
                          mil6 = mil6 + mile6[j6];
                    }
                    float kilometer;
                    kilometer = mil6 * 1.609;
                    cout << "Total Mile " << mil6 << " = " << kilometer << " Kilometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "Wrong Input\n";
              break;                           
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Mile Quantity Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              mile();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void milimetre() {
    system("cls");
    cout << " ______________________________________\n";
    cout << "|                                      |\n";
    cout << "|***  Milimeter Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << "\n";
    int mim;
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Foot'\n";
    cout << "Enter 3 for convert 'Yard'\n";
    cout << "Enter 4 for convert 'Micrometer'\n";
    cout << "Enter 5 for convert 'Centimeter'\n";
    cout << "Enter 6 fot convert 'Meter'\n";
    cin >> mim;
    switch(mim) {
        case 1:
              int a6;
              cout << "Enter number of Lengths : ";
              cin >> a6;
              cout << endl;
              float mili[20];
              if (a6>0 && a6<=1) {
                    cout << "Enter Milimeter : ";
                    cin >> mili[0];
                    cout << endl;
                    cout << mili[0] << " Milimeter = " << mili[0] /25.4 << " Inch " << endl;
              }
              else if (a6>1 && a6<21) {
                    for (int i=0; i<a6; i++) {
                          cout << "Enter Milimeter_" << i+1 << " : ";
                          cin >> mili[i];
                    }
                    cout << endl;
                    for (int x=0; x<a6; x++) {
                          cout << mili[x] << " Milimeter = " << mili[x]/25.4 << " Inch " << endl;
                    }
                    cout << endl;
                    float mi;
                    for (int j=0; j<a6; j++) {
                          mi = mi + mili[j];
                    }
                    float inch;
                    inch = mi / 25.4;
                    cout << "Total Milimeter " << mi << " = " << inch << " Inch";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2: 
              float b6;
              cout << "Enter number of Lengths : ";
              cin >> b6;
              cout << endl;
              float mili2[20];
              if (b6>0 && b6<=1) {
                    cout << "Enter Milimeter : ";
                    cin >> mili2[0];
                    cout << endl;
                    cout << mili2[0] << " Milimeter = " << mili2[0] /305 << " Foot " << endl;
              }
              else if (b6>1 && b6<21) {
                   for (int i2=0; i2<b6; i2++) {
                         cout << "Enter Milimeter_" << i2+1 << " : ";
                         cin >> mili2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b6; x2++) {
                          cout << mili2[x2] << " Milimeter = " << mili2[x2]/305 << " Foot " << endl;
                    }
                    cout << endl;
                    float mi2;
                    for (int j2=0; j2<b6; j2++) {
                          mi2 = mi2 + mili2[j2];
                    }
                    float foot;
                    foot = mi2 / 305;
                    cout << "Total Milimeter " << mi2 << " = " << foot << " Foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;     
        case 3:  
              float c6;
              cout << "Enter number of Lengths : ";
              cin >> c6;
              cout << endl;
              float mili3[20];
              if (c6>0 && c6<=1) {
                    cout << "Enter Milimeter : ";
                    cin >> mili3[0];
                    cout << endl;
                    cout << mili3[0] << " Milimeter = " << mili3[0] /914 << " Yard " << endl;
              }
              else if (c6>1 && c6<21) {
                    for (int i3=0; i3<c6; i3++) {
                          cout << "Enter Milimeter_" << i3+1 << " : ";
                          cin >> mili3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c6; x3++) {
                          cout << mili3[x3] << " Milimeter = " << mili3[x3]/914 << " Yard " << endl;
                    }
                    cout << endl;
                    float mi3;
                    for (int j3=0; j3<c6; j3++) {
                          mi3 = mi3 + mili3[j3];
                    }
                    float yard;
                    yard = mi3 / 914;
                    cout << "Total Milimeter " << mi3 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 4:
              int d6;
              cout << "Enter number of Lengths : ";
              cin >> d6;
              cout << endl;
              float mili4[20];
              if (d6>0 && d6<=1) {
                    cout << "Enter Milimeter : ";
                    cin >> mili4[0];
                    cout << endl;
                    cout << mili4[0] << " Milimeter = " << mili4[0] *1000 << " Micrometer " << endl;
              }
              else if (d6>1 && d6<21) {
                    for (int i4=0; i4<d6; i4++) {
                          cout << "Enter Milimeter_" << i4+1 << " : ";
                          cin >> mili4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d6; x4++) {
                          cout << mili4[x4] << " Milimeter = " << mili4[x4]*1000 << " Micrometer " << endl;
                    }
                    cout << endl;
                    float mi4;
                    for (int j4=0; j4<d6; j4++) {
                          mi4 = mi4 + mili4[j4];
                    }
                    float mic;
                    mic = mi4 * 1000;
                    cout << "Total Milimeter " << mi4 << " = " << mic << " Micrometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              float e6;
              cout << "Enter number of Lengths : ";
              cin >> e6;
              cout << endl;
              float mili5[20];
              if (e6>0 && e6<=1) {
                    cout << "Enter Milimeter : ";
                    cin >> mili5[0];
                    cout << endl;
                    cout << mili5[0] << " Milimeter = " << mili5[0] /10 << " Centimeter " << endl;
              }
              else if (e6>1 && e6<21) {
                    for (int i5=0; i5<e6; i5++) {
                          cout << "Enter Milimeter_" << i5+1 << " : ";
                          cin >> mili5[i5];
                    }
                    cout << endl;
                    for (int x5=0; x5<e6; x5++) {
                          cout << mili5[x5] << " Milimeter = " << mili5[x5]/10 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float mi5;
                    for (int j5=0; j5<e6; j5++) {
                          mi5 = mi5 + mili5[j5];
                    }
                    float cen;
                    cen = mi5 / 10;
                    cout << "Total Milimeter " << mi5 << " = " << cen << " Centimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;            
        case 6:
              float f6;
              cout << "Enter number of Lengths : ";
              cin >> f6;
              cout << endl;
              float mili6[20];
              if (f6>0 && f6<=1) {
                    cout << "Enter Milimeter : ";
                    cin >> mili6[0];
                    cout << endl;
                    cout << mili6[0] << " Milimeter = " << mili6[0] /1000 << " Meter " << endl;
              }
              else if (f6>1 && f6<21) {
                    for (int i6=0; i6<f6; i6++) {
                          cout << "Enter Milimeter_" << i6+1 << " : ";
                          cin >> mili6[i6];
                    }
                    cout << endl;
                    for (int x6=0; x6<f6; x6++) {
                          cout << mili6[x6] << " Milimeter = " << mili6[x6]/1000 << " Meter " << endl;
                    }
                    cout << endl;
                    float mi6;
                    for (int j6=0; j6<f6; j6++) {
                          mi6 = mi6 + mili6[j6];
                    }
                    float me;
                    me = mi6 / 1000;
                    cout << "Total Milimeter " << mi6 << " = " << me << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;    
        default:
              cout << "Wrong Input\n";
              break;                 
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Milimeter Quantity Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              milimetre();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void meter() {
    system("cls");
    cout << " __________________________________\n";
    cout << "|                                  |\n";
    cout << "|***  Meter Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    int mem;
    cout << "\n";
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Foot'\n";
    cout << "Enter 3 for convert 'Yard'\n";
    cout << "Enter 4 for convert 'Mile'\n";
    cout << "Enter 5 for convert 'Milimeter'\n";
    cout << "Enter 6 for convert 'Centimeter'\n";
    cout << "Enter 7 fot convert 'Kilometer'\n";
    cin >> mem;
    switch(mem) {
        case 1:
              int a7;
              cout << "Enter number of Lengths : ";
              cin >> a7;
              cout << endl;
              float meter[20];
              if (a7>0 && a7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter[0];
                    cout << endl;
                    cout << meter[0] << " Meter = " << meter[0] *39.37 << " Inch " << endl;
              }
              else if (a7>1 && a7<21) {
                    for (int i=0; i<a7; i++) {
                          cout << "Enter Meter_" << i+1 << " : ";
                          cin >> meter[i];
                    }
                    cout << endl;
                    for (int x=0; x<a7; x++) {
                          cout << meter[x] << " Meter = " << meter[x]*39.37 << " Inch " << endl;
                    }
                    cout << endl;
                    float met;
                    for (int j=0; j<a7; j++) {
                          met = met + meter[j];
                    }
                    float inch;
                    inch = met * 39.37;
                    cout << "Total Meter " << met << " = " << inch << " Inch";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2:
              int b7;
              cout << "Enter nunber of Lengths : ";
              cin >> b7;
              cout << endl;
              float meter2[20];
              if (b7>0 && b7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter2[0];
                    cout << endl;
                    cout << meter2[0] << " Meter = " << meter2[0] *3.281 << " Foot " << endl;
              }
              else if (b7>1 && b7<21) {
                    for (int i2=0; i2<b7; i2++) {
                          cout << "Enter Meter_" << i2+1 << " : ";
                          cin >> meter2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b7; x2++) {
                          cout << meter2[x2] << " Meter = " << meter2[x2]*3.281 << " Foot " << endl;
                    }
                    cout << endl;
                    float met2;
                    for (int j2=0; j2<b7; j2++) {
                          met2 = met2 + meter2[j2];
                    }
                    float foot;
                    foot = met2 * 3.281;
                    cout << "Total Meter " << met2 << " = " << foot << " Foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 3:
              float c7;
              cout << "Enter number of Lengths : ";
              cin >> c7;
              cout << endl;
              float meter3[20];
              if (c7>0 && c7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter3[0];
                    cout << endl;
                    cout << meter3[0] << " Meter = " << meter3[0] *1.094 << " Yard " << endl;
              }
              else if (c7>1 && c7<21) {
                    for (int i3=0; i3<c7; i3++) {
                          cout << "Enter Meter_" << i3+1 << " : ";
                          cin >> meter3[i3]; 
                    }
                    cout << endl;
                    for (int x3=0; x3<c7; x3++) {
                          cout << meter3[x3] << " Meter = " << meter3[x3]*1.094 << " Yard " << endl;
                    }
                    cout << endl;
                    float met3;
                    for (int j3=0; j3<c7; j3++) {
                          met3 = met3 + meter3[j3];
                    }
                    float yard;
                    yard = met3 * 1.094;
                    cout << "Total Meter " << met3 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 4:
              int d7;
              cout << "Enter number of Lengths : ";
              cin >> d7;
              cout << endl;
              float meter4[20];
              if (d7>0 && d7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter4[0];
                    cout << endl;
                    cout << meter4[0] << " Meter = " << meter4[0] /1609 << " Mile " << endl;
              }
              else if (d7>1 && d7<21) {
                    for (int i4=0; i4<d7; i4++) {
                          cout << "Enter Meter_" << i4+1 << " : ";
                          cin >> meter4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d7; x4++) {
                          cout << meter4[x4] << " Meter = " << meter4[x4]/1609 <<" Mile " << endl;
                    }
                    cout << endl;
                    float met4;
                    for (int j4=0; j4<d7; j4++) {
                          met4 = met4 + meter4[j4];
                    }
                    float mile;
                    mile = met4 / 1609;
                    cout << "Total Meter " << met4 << " = " << mile << " Mile";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              int e7;
              cout << "Enter number of Lengths : ";
              cin >> e7; 
              cout << endl;
              float meter5[20];
              if (e7>0 && e7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter5[0];
                    cout << endl;
                    cout << meter5[0] << " Meter = " << meter5[0] *1000 << " Milimeter " << endl;
              }
              else if (e7>1 && e7<21) {
                    for (int i5=0; i5<e7; i5++) {
                          cout << "Enter Meter_" << i5+1 << " : ";
                          cin >> meter5[i5]; 
                    }
                    cout << endl;
                    for (int x5=0; x5<e7; x5++) {
                          cout << meter5[x5] << " Meter = " << meter5[x5]*1000 << " Milimeter " << endl;
                    }
                    cout << endl;
                    float met5;
                    for (int j5=0; j5<e7; j5++) {
                          met5 = met5 + meter5[j5];
                    }
                    float milli;
                    milli = met5 * 1000;
                    cout << "Total Meter " << met5 << " = " << milli << " Milimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f7;
              cout << "Enter number of Lengths : ";
              cin >> f7;
              cout << endl;
              float meter6[20];
              if (f7>0 && f7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter6[0];
                    cout << endl;
                    cout << meter6[0] << " Meter = " << meter6[0] *100 << " Centimeter " << endl;
              }
              else if (f7>1 && f7<21) {
                    for (int i6=0; i6<f7; i6++) {
                          cout << "Enter Meter_" << i6+1 << " : ";
                          cin >> meter6[i6];
                    }
                    cout << endl;
                    for (int x6=0; x6<f7; x6++) {
                          cout << meter6[x6] << " Meter = " << meter6[x6]*100 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float met6;
                    for (int j6=0; j6<f7; j6++) {
                          met6 = met6 + meter6[j6];
                    }
                    float cent;
                    cent = met6 * 100;
                    cout << "Total Meter " << met6 << " = " << cent << " Centimeter";   
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }                     
              break;
        case 7:
              int l7;
              cout << "Enter number of Lengths : ";
              cin >> l7;
              cout << endl;
              float meter7[20];
              if (l7>0 && l7<=1) {
                    cout << "Enter Meter : ";
                    cin >> meter7[0];
                    cout << endl;
                    cout << meter7[0] << " Meter = " << meter7[0] /1000 << " Kilometer " << endl;
              }
              else if (l7>1 && l7<21) {
                    for (int i7=0; i7<l7; i7++) {
                          cout << "Enter Meter_" << i7+1 << " : ";
                          cin >> meter7[i7];
                    }
                    cout << endl;
                    for (int x7=0; x7<l7; x7++) {
                          cout << meter7[x7] << " Meter = " << meter7[x7]/1000 << " Kilometer " << endl; 
                    }
                    cout << endl;
                    float met7;
                    for (int j7=0; j7<l7; j7++) {
                          met7 = met7 + meter7[j7];
                    }
                    float kilo;
                    kilo = met7 / 1000;
                    cout << "Total Meter " << met7 << " = " << kilo << " Kilometer";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "\nWrong Input\nTry Again\n";
              break;     
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Meter Quantity Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              meter();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void kilometer() {
    system("cls");
    cout << " ______________________________________\n";
    cout << "|                                      |\n";
    cout << "|***  Kilometer Quantity Converter  ***|\n";
    cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << endl;
    int kilometer1;
    cout << "\n";
    cout << "Enter 1 for convert 'Inch'\n";
    cout << "Enter 2 for convert 'Foot'\n";
    cout << "Enter 3 for convert 'Yard'\n";
    cout << "Enter 4 for convert 'Mile'\n";
    cout << "Enter 5 for convert 'Centimeter'\n";
    cout << "Enter 6 fot convert 'Meter'\n";
    cin >> kilometer1;
    switch(kilometer1) {
        case 1:
              int a8;
              cout << "Enter number of Lengths : ";
              cin >> a8;
              cout << endl;
              float kilo[20];
              if (a8>0 && a8<=1) {
                    cout << "Enter Kilometer : ";
                    cin >> kilo[0];
                    cout << endl;
                    cout << kilo[0] << " Kilometer = " << kilo[0] *39370.1 << " Inch " << endl;
              }
              else if (a8>1 && a8<21) {
                    for (int i=0; i<a8; i++) {
                          cout << "Enter Kilometer_" << i+1 << " : ";
                          cin >> kilo[i];
                    }
                    cout << endl;
                    for (int x=0; x<a8; x++) {
                          cout << kilo[x] << " Kilometer = " << kilo[x]*39370.1 << " Inch " << endl;
                    }
                    cout << endl;
                    float kil;
                    for (int j=0; j<a8; j++) {
                          kil = kil + kilo[j];
                    }
                    float inch;
                    inch = kil * 39370.1;
                    cout << "Total Kilometer " << kil << " = " << inch << " Inch";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 2:
              int b8;
              cout << "Enter number of Lengths : ";
              cin >> b8;
              cout << endl;
              float kilo2[20];
              if (b8>0 && b8<=1) {
                    cout << "Enter Kilometer : ";
                    cin >> kilo2[0];
                    cout << endl;
                    cout << kilo2[0] << " Kilometer = " << kilo2[0] *3281 << " Foot " << endl;
              }
              else if (b8>1 && b8<21) {
                    for (int i2=0; i2<b8; i2++) {
                          cout << "Enter Kilometer_" << i2+1 << " : ";
                          cin >> kilo2[i2];
                    }
                    cout << endl;
                    for (int x2=0; x2<b8; x2++) {
                          cout << kilo2[x2] << " Kilometer = " << kilo2[x2]*3281 << " Foot " << endl;
                    }
                    cout << endl;
                    float kil2;
                    for (int j2=0; j2<b8; j2++) {
                          kil2 = kil2 + kilo2[j2];
                    }
                    float foot;
                    foot = kil2 * 3281;
                    cout << "Total Kilometer " << kil2 << " = " << foot << " foot";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 3:
              int c8;
              cout << "Enter number of Lengths : ";
              cin >> c8;
              cout << endl;
              float kilo3[20];
              if (c8>0 && c8<=1) {
                    cout << "Enter Kilometer : ";
                    cin >> kilo3[0];
                    cout << endl;
                    cout << kilo3[0] << " Kilometer = " << kilo3[0] *1094 << " Yard " << endl;
              }
              else if (c8>1 && c8<21) {
                    for (int i3=0; i3<c8; i3++) {
                          cout << "Enter Kilometer_" << i3+1 << " : ";
                          cin >> kilo3[i3];
                    }
                    cout << endl;
                    for (int x3=0; x3<c8; x3++) {
                          cout << kilo3[x3] << " Kilometer = " << kilo3[x3]*1094 << " Yard " << endl;
                    }
                    cout << endl;
                    float kil3;
                    for (int j3=0; j3<c8; j3++) {
                          kil3 = kil3 + kilo3[j3];
                    }
                    float yard;
                    yard = kil3 * 1094;
                    cout << "Total Kilometer " << kil3 << " = " << yard << " Yard";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 4:
              int d8;
              cout << "Enter number of Lengths : ";
              cin >> d8;
              cout << endl;
              float kilo4[20];
              if (d8>0 && d8<=1) {
                    cout << "Enter Kilometer : ";
                    cin >> kilo4[0];
                    cout << endl;
                    cout << kilo4[0] << " Kilometer = " << kilo4[0] /1.609 << " Mile " << endl;
              }
              else if (d8>1 && d8<21) {
                    for (int i4=0; i4<d8; i4++) {
                          cout << "Ener Kilometer_" << i4+1 << " : ";
                          cin >> kilo4[i4];
                    }
                    cout << endl;
                    for (int x4=0; x4<d8; x4++) {
                          cout << kilo4[x4] << " Kilometer = " << kilo4[x4]/1.609 << " Mile " << endl;
                    }
                    cout << endl;
                    float kil4;
                    for (int j4=0; j4<d8; j4++) {
                          kil4 = kil4 + kilo4[j4];
                    }
                   float mile;
                   mile = kil4 / 1.609;
                   cout << "Total kilometer " << kil4 << " = " << mile << " Mile";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 5:
              int e8;
              cout << "Enter number of Lengths : ";
              cin >> e8;
              cout << endl;
              float kilo5[20];
              if (e8>0 && e8<=1) {
                    cout << "Enter Kilometer : ";
                    cin >> kilo5[0];
                    cout << endl;
                    cout << kilo5[0] << " Kilometer = " << kilo5[0] *100000 << " Centimeter " << endl;
              }
              else if (e8>1 && e8<21) {
                    for (int i5=0; i5<e8; i5++) {
                          cout << "Enter Kilometer_" << i5+1 << " : ";
                          cin >> kilo5[i5];
                    }
                    cout << endl;
                    for (int x5=0; x5<e8; x5++) {
                          cout << kilo5[x5] << " Kilometer = " << kilo5[x5]*100000 << " Centimeter " << endl;
                    }
                    cout << endl;
                    float kil5;
                    for (int j5=0; j5<e8; j5++) {
                          kil5 = kil5 + kilo5[j5];
                    } 
                    float centi;
                    centi = kil5 * 100000;
                    cout << "Total Kilometer " << kil5 << " = " << centi << " Centimeter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        case 6:
              int f8;
              cout << "Enter number of Lengths : ";
              cin >> f8;
              cout << endl;
              float kilo6[20];
              if (f8>0 && f8<=1) {
                    cout << "Enter Kilometer : ";
                    cin >> kilo6[0];
                    cout << endl;
                    cout << kilo6[0] << " Kilometer = " << kilo6[0] *1000 << " Meter " << endl;
              }
              else if (f8>1 && f8<21) {
                    for (int i6=0; i6<f8; i6++) {
                          cout << "Enter Kilometer_" << i6+1 << " : ";
                          cin >> kilo6[i6]; 
                    }
                    cout << endl;
                    for (int x6=0; x6<f8; x6++) {
                          cout << kilo6[x6] << " Kilometer = " << kilo6[x6]*1000 << " Meter " << endl; 
                    }
                    cout << endl;
                    float kil6;
                    for (int j6=0; j6<f8; j6++) {
                          kil6 = kil6 + kilo6[j6];
                    }
                    float meter;
                    meter = kil6 * 1000;
                    cout << "Total Kilometer " << kil6 << " = " << meter << " Meter";
              }
              else {
                    cout << "Please! choose number of length less than 20" << endl;
              }
              break;
        default:
              cout << "\nWrong Input\nTry Again" << endl;
              break;      
    }
    again:
    int menu;
    cout << "\n\n";
    cout << "Enter 1 for again Kilometer Quantity Converter\n";
    cout << "Enter 2 for Main Menu\n";
    cout << "Enter 3 for Exit \n";
    cin >> menu;
    switch(menu) {
        case 1:
              kilometer();
              break;
        case 2:
              main();
              break;
        case 3:
              exit(EXIT_SUCCESS);
              break;
        default:
              cout << "Wrong Select \nTry Agian\n";
              goto again;                  
    }
}
void formula() {
    system("cls");
    cout << endl;
    cout << "                                        made by *IQBAL BHATTI " << endl;
    cout << "\n";
    int sel;
    cout << "Quantity Converter Formula's\n";
    cout << "Select any Quantity that you see Calculation Formula" << endl;
    cout << "1. Centimeter Quantity Formula\n";
    cout << "2. Inch Quantity Formula\n";
    cout << "3. Foot Quantity Formula\n";
    cout << "4. Yard Quantity Formula\n";
    cout << "5. Mile Quantity Formula\n";
    cout << "6. Milimeter Quantity Formula\n";
    cout << "7. Meter Quantity Formula\n";
    cout << "8. Kilometer Quantity Formula\n";
    cin >> sel;
    cout << endl;
    switch(sel) {
        case 1:
              system("cls");
              cout << " ______________________________________________\n";
              cout << "|                                              |\n";
              cout << "|***  Centimeter Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
              cout << "\n";
              cout << " => Inch = length / 2.54" << endl;
              cout << " => Foot = length / 30.48" << endl;
              cout << " => Mile = length / 160934" << endl;
              cout << " => Yard = length / 91.44" << endl;
              cout << " => Micrometer = length * 10000" << endl;
              cout << " => Millimeter = length * 10" << endl;
              cout << " => Meter = length / 100" << endl;
              cout << " => Kilometre = length / 100000" << endl;
              cout << endl;
              break;
        case 2:
              system("cls");
              cout << endl;
              cout << " ________________________________________\n";
              cout << "|                                        |\n";
              cout << "|***  Inch Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
              cout << endl;
              cout << " => Foot = length  / 12" << endl;
              cout << " => Yard = length / 36" << endl;
              cout << " => Mile = length  / 63360" << endl;
              cout << " => Millimeter = length * 25.4" << endl;
              cout << " => Centimeter = length * 2.54" << endl;
              cout << " => Meter = length / 39.37" << endl;
              cout << " => Kilometer = length / 39370" << endl;
              cout << endl;
              break;
        case 3:
              system("cls");
              cout << endl;
              cout << " ________________________________________\n";
              cout << "|                                        |\n";
              cout << "|***  Foot Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
              cout << endl;
              cout << " => Inch = length * 12" << endl;
              cout << " => Yard = length / 3" << endl;
              cout << " => Mile = length / 5280" << endl;
              cout << " => Millimetre = length * 305" << endl;
              cout << " => Centimeter = length * 30.48" << endl;
              cout << " => Meter = length / 3.281" << endl;
              cout << " => Kilometer = length / 3281" << endl;
              cout << endl;
              break;
        case 4:
              system("cls");
              cout << endl;
              cout << " ________________________________________\n";
              cout << "|                                        |\n";
              cout << "|***  Yard Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
              cout << endl;
              cout << " => Inch = length * 36" << endl;
              cout << " => Foot = length * 3" << endl;
              cout << " => Mile = length / 1760" << endl;
              cout << " => Millimeter = length * 914.4" << endl;
              cout << " => Centimeter = length * 91.44" << endl;
              cout << " => Meter = length / 1.094" << endl;
              cout << " => Kilometer = length / 1094" << endl;
              cout << endl;
              break;
        case 5:
              system("cls");
              cout << endl;
              cout << " ________________________________________\n";
              cout << "|                                        |\n";
              cout << "|***  Mile Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
              cout << endl;
              cout << " => Inch = length * 63360" << endl;   
              cout << " => Foot = length * 5280" << endl;
              cout << " => Yard = length * 1760" << endl;
              cout << " => Centimeter = length * 160934" << endl;
              cout << " => Meter = length * 1609" << endl;
              cout << " => Kilometer = length * 1.609" << endl;
              cout << endl;
              break;
         case 6:
              system("cls");
              cout << endl;
              cout << " _____________________________________________\n";
              cout << "|                                             |\n";
              cout << "|***  Milimeter Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
              cout << endl;
              cout << " => Inch = length / 25.4" << endl;
              cout << " => Foot = length / 305" << endl;
              cout << " => Yard = length / 914" << endl;
              cout << " => Micrometer = length * 1000" << endl;
              cout << " => Centimeter = length / 10" << endl;
              cout << " => Meter = length / 1000" << endl;
              cout << endl;
              break;
         case 7:
              system("cls");
              cout << endl;
              cout << " _________________________________________\n";
              cout << "|                                         |\n";
              cout << "|***  Meter Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
              cout << endl;   
              cout << " => Inch = length * 39.37" << endl;
              cout << " => Foot = length * 3.281" << endl;
              cout << " => Yard = length * 1.094" << endl;
              cout << " => Mile = length / 1609" << endl;
              cout << " => Millimeter = length * 1000" << endl;
              cout << " => Centimeter = length * 100" << endl;
              cout << " => Kilometer = length / 1000" << endl;
              cout << endl;
              break; 
         case 8:
              system("cls");
              cout << endl;
              cout << " _____________________________________________\n";
              cout << "|                                             |\n";
              cout << "|***  kilometer Quantity Converter Formula ***|\n";
              cout << "|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|\n";
              cout << endl;   
              cout << " => Inch = length * 39370.1" << endl;
              cout << " => Foot = length * 3281" << endl;
              cout << " => Yard = length * 1094" << endl;
              cout << " => Mile = length / 1.609" << endl;
              cout << " => Centimeter = length * 100000" << endl;
              cout << " => Meter = length * 1000" << endl;
              cout << endl;
              break;   
      }    
      again:
      int menuu;
      cout << "\n";
      cout << "Enter 1 for again see Formula\n";
      cout << "Enter 2 for Main Menu\n";
      cout << "Enter 3 for Exit \n";
      cin >> menuu;
      switch(menuu) {
          case 1:
                formula();
                break;
          case 2:
                main();
                break;
          case 3:
                exit(EXIT_SUCCESS);
                break;
          default:
                cout << "Wrong Select \nTry Agian\n";
                goto again;                  
    }
}
