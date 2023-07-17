#include <iostream>
#include <iomanip>
using namespace std;
void Origial();
void Vanilla();
void Red_Velvet();
int main()
{
    int choose_flavor;
    cout << "****DAIRY FULL MILKTEA SHOP****" << endl << endl;
    cout << "======WELLCOME TO OUR SHOP=====" << endl;
    cout << "=============MENU==============" << endl;
    cout << "Flavors" << setw(21) <<"Size" << endl;
    cout << setw(20) << "S" << setw(5) << "M" << setw(6) << "L" << endl;
    cout << "1. ORIGINAL       " << "95   105   115" << endl;
    cout << "2. VANILLA        " << "100  110   120" << endl;
    cout << "3. RED VEVELT     " << "110  120   130" << endl;
    cout << "\nCHOOSE FLAVOR: ";
    cin >> choose_flavor;
    char any;
    switch(choose_flavor)
    {
        case 1:
           Origial();
           cout << "\n\nPress any key for new bill: ";
           cin >> any;
           if (any) {
               system("cls");
               main();
           } else {
               system("cls");
               main();
           }
           break;
        case 2:
           Vanilla();
           cout << "\n\nPress any key for new bill: ";
           cin >> any;
           if (any) {
               system("cls");
               main();
           } else {
               system("cls");
               main();
           }
           break;
        case 3:
           Red_Velvet();
           cout << "\n\nPress any key for new bill: ";
           cin >> any;
           if (any) {
               system("cls");
               main();
           } else {
               system("cls");
               main();
           }
           break;
        default:
           system("cls");
           main();
    }
    return 0;
}

void Origial()
{
    int choose_size;
    int take_order, total_price, your_cash;
    cout << "\n**********CHOOSE SIZE**********" << endl;
    cout << endl << "1. SMALL" << endl;
    cout << "2. MEDIUM" << endl;
    cout << "3. LARGE" << endl;
    cout << "\nCHOOSE SIZE: ";
    cin >> choose_size;
    switch(choose_size)
    {
        case 1:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Origial" << setw(10) << "Small" << setw(6) << "95" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 95 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        case 2:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Origial" << setw(10) << "Medium" << setw(6) << "105" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 105 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        case 3:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Origial" << setw(10) << "Large" << setw(6) << "115" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 115 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        default:
           cout << "Wrong Choose" << endl;
           break;
    }
}

void Vanilla()
{
    int choose_size;
    int take_order, total_price, your_cash;
    cout << "\n**********CHOOSE SIZE**********" << endl;
    cout << endl << "1. SMALL" << endl;
    cout << "2. MEDIUM" << endl;
    cout << "3. LARGE" << endl;
    cout << "\nCHOOSE SIZE: ";
    cin >> choose_size;
    switch(choose_size)
    {
        case 1:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Vanilla" << setw(10) << "Small" << setw(6) << "100" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 100 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        case 2:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Vanilla" << setw(10) << "Medium" << setw(6) << "110" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 110 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        case 3:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Vanilla" << setw(10) << "Large" << setw(6) << "120" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 120 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        default:
           cout << "Wrong Choose" << endl;
           break;
    }
}

void Red_Velvet()
{
    int choose_size;
    int take_order, total_price, your_cash;
    cout << "\n**********CHOOSE SIZE**********" << endl;
    cout << endl << "1. SMALL" << endl;
    cout << "2. MEDIUM" << endl;
    cout << "3. LARGE" << endl;
    cout << "\nCHOOSE SIZE: ";
    cin >> choose_size;
    switch(choose_size)
    {
        case 1:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Red Velvet" << setw(10) << "Small" << setw(6) << "110" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 110 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        case 2:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Red Velvet" << setw(10) << "Medium" << setw(6) << "120" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 120 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        case 3:
           cout << "\nFlavor" << setw(10) << "Size" << setw(10) << "Price" << endl;
           cout << "Red Velvet" << setw(10) << "Large" << setw(6) << "130" << endl;
           cout << "\nHow many orders you wonder: ";
           cin >> take_order;
           total_price = 130 * take_order;
           cout << "=============PAYMENT==========" << endl;
           cout << "Total Payment" << setw(12) << total_price << endl;
           cout << "==============================" << endl;
           cout << "Your Cash: ";
           cin >> your_cash;
           cout << "==============================" << endl;
           if (your_cash >= total_price) {
               cout << "Your Change: " << your_cash - total_price << endl;
           } else {
               cout << "Repayment" << endl;
           }
           break;
        default:
           cout << "Wrong Choose" << endl;
           break;
    }
}