#include <iostream>
using namespace std;
class SimNetworkPackages
{
    public:
          float balance = 6.38;
          float balanceIn;
          float nowBalance;
          float recharge;
          float tax;
          virtual float isBalance() {
              return nowBalance;
          }
};
class Recharge : public SimNetworkPackages {
    public:
          void CheckBalance();
          void RechargeAccount();
          void AllBundles();
};

void Recharge::CheckBalance() 
{
    Recharge* ptr = new Recharge();
    ptr->nowBalance;
    nowBalance = balance;
    cout << "Your balance is " << nowBalance << " PKR" << endl;
}

void Recharge::RechargeAccount()
{
    cout << "Enter 50 to 100000 PKR: ";
    cin >> recharge;
    while (recharge < 50 || recharge > 100000) {
        cout << "Re-enter amount: ";
        cin >> recharge;
    }
    cout << "Transaction successful" << endl;
    tax = 0.143*recharge;
    nowBalance += (recharge-tax);
    cout << "\nBalance is " << nowBalance << " PKR" << endl;
}

void Recharge::AllBundles()
{
    Recharge* Load = new Recharge();
    Load->nowBalance;
    float load;
 
    int select;
    cout << "1. Internet bundles" << endl;
    cout << "2. Call bundles" << endl;
    cout << "3. Social and SMS bundles" << endl;
    cout << "4. Exit" << endl;
    cin >> select;
    switch (select)
    {
      case 1: 
      system("cls");
      int ii;
      cout << "1. 3 Months" << endl;
      cout << "2. Monthly" << endl;
      cout << "3. 2 Weeks" << endl;
      cout << "4. Weekly" << endl;
      cout << "5. 3 Days" << endl;
      cout << "6. Daily" << endl;
      cout << "7. back" << endl;
      cin >> ii;
      if (ii == 1) {
          system("cls");
          int ii1;
          cout << "Internet bundles for 3 months\n" << endl;
          cout << "1. 75GB @ Rs.2250" << endl;
          cout << "2. 50GB @ Rs.1550" << endl;
          cout << "3. 40GB @ Rs.1320" << endl;
          cout << "4. 30GB @ Rs.1160" << endl;
          cout << "5. back to all bundles" << endl;
          cin >> ii1;
          if (ii1 == 1) {
              system("cls");
              int i11;
              cout << "75GB data in 2250 PKR for 3 months\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i11;
              if (i11 == 1) {
                  if (nowBalance >= 2250)
                  {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                      system("cls");
                      exit(EXIT_SUCCESS);
              }
          }
          else if (ii1 == 2) {
              system("cls");
              int i12;
              cout << "50GB data in 1550 PKR for 3 months\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i12;
              if (i12 == 1) {
                  if (nowBalance >= 1550) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii1 == 3) {
              system("cls");
              int i13;
              cout << "40GB data in 1320 PKR for 3 months\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i13;
              if (i13 == 1) {
                  if (nowBalance >= 1320) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii1 == 4) {
              system("cls");
              int i14;
              cout << "30GB data in 1160 PKR for 3 months\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i14;
              if (i14 == 1) {
                  if (nowBalance >= 1160) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii1 == 5) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      } 
      else if (ii == 2) {
          system("cls");
          int ii2;
          cout << "Internet bundles for Monthly\n" << endl;
          cout << "1. 5GB @ Rs.180 " << endl;
          cout << "2. 10GB @ Rs.330" << endl;
          cout << "3. 20GB @ Rs.600" << endl;
          cout << "4. 50GB @ Rs.1249" << endl;
          cout << "5. back to all bundles" << endl;
          cin >> ii2;
          if (ii2 == 1) {
              system("cls");
              int i21;
              cout << "5GB data in 180 PKR for a month\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i21;
              if (i21 == 1) {
                  if (nowBalance >= 180) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii2 == 2) {
              system("cls");
              int i22;
              cout << "10GB data in 330 PKR for a month\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i22;
              if (i22 == 1) {
                  if (nowBalance >= 330) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii2 == 3) {
              system("cls");
              int i23;
              cout << "20GB data in 600 PKR for a month\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i23;
              if (i23 == 1) {
                  if (nowBalance >= 600) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              } 
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii2 == 4) {
              system("cls");
              int i24;
              cout << "50GB data in 1249 PKR for a month\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i24;
              if (i24 == 1) {
                  if (nowBalance >= 1249) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii2 == 5) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ii == 3) {
          system("cls");
          int ii3;
          cout << "Internet bundles for 2 weeks\n" << endl;
          cout << "1. 5GB @ Rs.150" << endl;
          cout << "2. 8GB @ Rs.235" << endl;
          cout << "3. 15GB @ Rs.420" << endl;
          cout << "4. back to all bundles" << endl;
          cin >> ii3;
          if (ii3 == 1) {
              system("cls");
              int i31;
              cout << "5GB data in 150 PKR for 2 weeks\n" << endl;
              cout << "1. confirm" << endl;
              cout << "2. cancel" << endl;
              cin >> i31;
              if (i31 == 1) {
                  if (nowBalance >= 150) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          } 
          else if (ii3 == 2) {
              system("cls");
              int i32;
              cout << "8GB data in 235 PKR for 2 weeks\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i32;
              if (i32 == 1) {
                  if (nowBalance >= 235) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl;
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii3 == 3) {
              system("cls");
              int i33;
              cout << "15GB data in 420 PKR for 2 weeks\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i33;
              if (i33 == 1) {
                  if (nowBalance >= 420) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii3 == 4) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ii == 4) {
          system("cls");
          int ii4;
          cout << "Internet bundles for weekly\n" << endl;
          cout << "1. 3GB @ Rs.100" << endl;
          cout << "2. 6GB @ Rs.190" << endl;
          cout << "3. 10GB @ Rs.265" << endl;
          cout << "4. back to all bundles" << endl;
          cin >> ii4;
          if (ii4 == 1) {
              system("cls");
              int i41;
              cout << "3GB data in 100 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i41;
              if (i41 == 1) {
                  if (nowBalance >= 100) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii4 == 2) {
              system("cls");
              int i42;
              cout << "6GB data in 190 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i42;
              if (i42 == 1) {
                  if (nowBalance >= 190) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii4 == 3) {
              system("cls");
              int i43;
              cout << "10GB data in 265 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i43;
              if (i43 == 1) {
                  if (nowBalance >= 265) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii4 == 4) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ii == 5) {
          system("cls");
          int ii5;
          cout << "Internet bundles for 3 days\n" << endl;
          cout << "1. 2GB @ Rs.80" << endl;
          cout << "2. 5GB @ Rs.160" << endl;
          cout << "3. 12GB @ Rs.325" << endl;
          cout << "4. back to all bundles" << endl;
          cin >> ii5;
          if (ii5 == 1) {
              system("cls");
              int i51;
              cout << "2GB data in 80 PKR for 3 days\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i51;
              if (i51 == 1) {
                  if (nowBalance >= 80) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii5 == 2) {
              system("cls");
              int i52;
              cout << "5GB data in 160 PKR for 3 days\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i52;
              if (i52 == 1) {
                  if (nowBalance >= 160) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii5 == 3) {
              system("cls");
              int i53;
              cout << "12GB data in 325 PKR for 3 days\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i53;
              if (i53 == 1) {
                  if (nowBalance >= 235) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii5 == 4) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ii == 6) {
          system("cls");
          int ii6;
          cout << "Internet bundles for daily\n" << endl;
          cout << "1. 1GB for 2 hours @ Rs.10.5" << endl;
          cout << "2. 2GB for 6 hours @ Rs.25" << endl;
          cout << "3. 5GB for day @ Rs.80" << endl;
          cout << "4. back to all bundles" << endl;
          cin >> ii6;
          if (ii6 == 1) {
              system("cls");
              int i61;
              cout << "1GB data in 10.5 PKR for 2 hours\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i61;
              if (i61 == 1) {
                  if (nowBalance >= 10.5) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii6 == 2) {
              system("cls");
              int i62;
              cout << "2GB data in 25 PKR for 6 hours\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i62;
              if (i62 == 1) {
                  if (nowBalance >= 25) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii6 == 3) {
              system("cls");
              int i63;
              cout << "5GB data in 80 PKR for a day\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> i63;
              if (i63 == 1) {
                  if (nowBalance >= 80) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ii6 == 4) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ii == 7) {
          system("cls");
          AllBundles();
      }
      else {
          system("cls");
          cout << "Invalid Input" << endl;
      } 
      break;
case 2:
      system("cls");
      int cc;
      cout << "1. Monthly" << endl;
      cout << "2. Weekly" << endl;
      cout << "3. Daily" << endl;
      cout << "4. back" << endl;
      cin >> cc;
      if (cc == 1) {
          system("cls");
          int cc1;
          cout << "Call bundles for monthly\n" << endl;
          cout << "1. 1000 On-net Mins & 300 Off-net Mins @ Rs.510" << endl;
          cout << "2. 750 On-net Mins & 200 Off-net Mins @ Rs.385" << endl;
          cout << "3. 500 On-net Mins & 100 Off-net Mins @ Rs.210" << endl;
          cout << "4. 300 On-nets Mins @ Rs.120" << endl;
          cout << "5. 100 Off-nets Mins @ Rs.100" << endl;
          cout << "6. back to all bundles" << endl;
          cin >> cc1;
          if (cc1 == 1) {
              system("cls");
              int c11;
              cout << "1000 On-net Mins & 300 Off-net Mins in 510 PKR for a month\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c11;
              if (c11 == 1) {
                  if (nowBalance >= 510) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc1 == 2) {
              system("cls");
              int c12;
              cout << "750 On-net Mins & 200 Off-net Mins in 385 PKR for a month\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c12;
              if (c12 == 1) {
                  if (nowBalance >= 385) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc1 == 3) {
              system("cls");
              int c13;
              cout << "500 On-net Mins & 100 Off-net Mins in 210 PKR for a month\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c13;
              if (c13 == 1) {
                  if (nowBalance >= 210) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc1 == 4) {
              system("cls");
              int c14;
              cout << "300 On-net Mins in 120 PKR for a month\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c14;
              if (c14 == 1) {
                  if (nowBalance >= 120) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc1 == 5) {
              system("cls");
              int c15;
              cout << "100 Off-net Mins in 100 PKR for a month\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c15;
              if (c15 == 1) {
                  if (nowBalance >= 100) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc1 == 6) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (cc == 2) {
          system("cls");
          int cc2;
          cout << "Call bundles for weekly\n" << endl;
          cout << "1. 500 On-net Mins & 200 Off-net Mins @ Rs.410" << endl;
          cout << "2. 300 On-net Mins & 100 Off-net Mins @ Rs.230" << endl;
          cout << "3. 200 On-nets Mins @ Rs.150" << endl;
          cout << "4. 100 Off-nets Mins @ Rs.120" << endl;
          cout << "5. back to all bundles" << endl;
          cin >> cc2;
          if (cc2 == 1) {
              system("cls");
              int c21;
              cout << "500 On-net Mins & 200 Off-net Mins in 410 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c21;
              if (c21 == 1) {
                  if (nowBalance >= 410) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc2 == 2) {
              system("cls");
              int c22;
              cout << "300 On-net Mins & 100 Off-net Mins in 230 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c22;
              if (c22 == 1) {
                  if (nowBalance >= 230) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc2 == 3) {
              system("cls");
              int c23;
              cout << "200 On-net Mins in 150 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c23;
              if (c23 == 1) {
                  if (nowBalance >= 150) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc2 == 4) {
              system("cls");
              int c24;
              cout << "100 Off-net Mins in 120 PKR for a week\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c24;
              if (c24 == 1) {
                  if (nowBalance >= 120) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc2 == 5) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (cc == 3) {
          system("cls");
          int cc3;
          cout << "Call bundles for a day\n" << endl;
          cout << "1. 200 On-nets Mins @ Rs.100" << endl;
          cout << "2. 50 Off-nets Mins @ Rs.75" << endl;
          cout << "3. Unlimited On-net Mins for 1 hour @ Rs.15" << endl;
          cout << "4. back to all bundles" << endl;
          cin >> cc3;
          if (cc3 == 1) {
              system("cls");
              int c31;
              cout << "200 On-net Mins in 100 PKR for a day\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c31;
              if (c31 == 1) {
                  if (nowBalance >= 100) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc3 == 2) {
              system("cls");
              int c32;
              cout << "50 Off-net Mins in 75 PKR for a day\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c32;
              if (c32 == 1) {
                  if (nowBalance >= 75) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc3 == 3) {
              system("cls");
              int c33;
              cout << "Unlimited On-net Mins in 15 PKR for 1 hour\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> c33;
              if (c33 == 1) {
                  if (nowBalance >= 15) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (cc3 == 4) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (cc == 4) {
          system("cls");
          AllBundles();
      }
      else {
          system("cls");
          cout << "Invalid Input" << endl;
      }
      break;
case 3:
      system("cls");
      int ss;
      cout << "1. Monthly" << endl;
      cout << "2. Weekly" << endl;
      cout << "3. Daily" << endl;
      cout << "4. back" << endl;
      cin >> ss;
      if (ss == 1) {
          system("cls");
          int ss1;
          cout << "Social & SMS bundles for 1 month\n" << endl;
          cout << "1. 10GB Whatsapp + 10GB Facebook & 5000 SMS @ Rs.390" << endl;
          cout << "2. 12GB Whatspp + Facebook & 3000 SMS @ 280" << endl;
          cout << "3. 5GB Whatsapp @ Rs.140" << endl;
          cout << "4. 5GB Facebook @ RS.150" << endl;
          cout << "5. 5000 SMS @ Rs.100" << endl;
          cout << "6. back to all bundles" << endl;
          cin >> ss1;
          if (ss1 == 1) {
              system("cls");
              int s11;
              cout << "10GB Whatsapp + 10GB Facebook data & 5000 SMS in 390 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s11;
              if (s11 == 1) {
                  if (nowBalance >= 390) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss1 == 2) {
              system("cls");
              int s12;
              cout << "12GB Whatsapp + Facebook data & 3000 SMS in 280 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s12;
              if (s12 == 1) {
                  if (nowBalance >= 280) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss1 == 3) {
              system("cls");
              int s13;
              cout << "5GB Whatsapp data in 140 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s13;
              if (s13 == 1) {
                  if (nowBalance >= 140) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss1 == 4) {
              system("cls");
              int s14;
              cout << "5GB Facebook data in 150 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s14;
              if (s14 == 1) {
                  if (nowBalance >= 150) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss1 == 5) {
              system("cls");
              int s15;
              cout << "5000 SMS in 100 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s15;
              if (s15 == 1) {
                  if (nowBalance >= 100) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss1 == 6) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ss == 2) {
          system("cls");
          int ss2;
          cout << "Social & SMS bundles for 1 week\n" << endl;
          cout << "1. 3GB Whatsapp + 3GB Facebook & 1000 SMS @ Rs.180" << endl;
          cout << "2. 4GB Whatsapp + Facebook & 500 SMS @ 120" << endl;
          cout << "3. 1000 SMS @ Rs.50" << endl;
          cout << "4. back to all bundles" << endl;
          cin >> ss2;
          if (ss2 == 1) {
              system("cls");
              int s21;
              cout << "3GB Whatsapp + 3GB Facebook data & 1000 SMS in 180 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s21;
              if (s21 == 1) {
                  if (nowBalance >= 180) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss2 == 2) {
              system("cls");
              int s22;
              cout << "4GB Whatsapp + Facebook data & 500 SMS in 120 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s22;
              if (s22 == 1) {
                  if (nowBalance >= 120) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss2 == 3) {
              system("cls");
              int s23;
              cout << "1000 SMS in 50 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s23;
              if (s23 == 1) {
                  if (nowBalance >= 50) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss2 == 4) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "Invalid Input" << endl;
          }
      }
      else if (ss == 3) {
          system("cls");
          int ss3;
          cout << "Socail & SMS bundles for 1 day\n" << endl;
          cout << "1. 2GB Whatsapp + Facebook @ Rs.40" << endl;
          cout << "2. 1GB Whatsapp @ Rs.22" << endl;
          cout << "3. 1GB Facebook @ Rs.24" << endl;
          cout << "4. 500 SMS @ Rs.18" << endl;
          cout << "5. back to all bundles" << endl;
          cin >> ss3;
          if (ss3 == 1) {
              system("cls");
              int s31;
              cout << "2GB Whatsapp + Facebook in 40 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s31;
              if (s31 == 1) {
                  if (nowBalance >= 40) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss3 == 2) {
              system("cls");
              int s32;
              cout << "1GB Whatsapp in 22 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s32;
              if (s32 == 1) {
                  if (nowBalance >= 22) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss3 == 3) {
              system("cls");
              int s33;
              cout << "1GB Facebook in 24 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s33;
              if (s33 == 1) {
                  if (nowBalance >= 24) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss3 == 4) {
              system("cls");
              int s34;
              cout << "500 SMS in 18 PKR\n" << endl;
              cout << "1. confirm " << endl;
              cout << "2. cancel" << endl;
              cin >> s34;
              if (s34 == 1) {
                  if (nowBalance >= 18) {
                      system("cls");
                      cout << "Congratulations! Your operation has been successful" << endl; 
                  }
                  else {
                      system("cls");
                      cout << "Insuffient Balance\nPlease! Recharge your account" << endl;
                  }
              }
              else {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
          }
          else if (ss3 == 5) {
              system("cls");
              AllBundles();
          }
          else {
              system("cls");
              cout << "invalid Input" << endl;
          }
      }
      else if (ss == 4) {
          system("cls");
          AllBundles();
      }
      else {
          system("cls");
          cout << "Invlid Input" << endl;
      }
      break;
case 4:
      system("cls");
      exit(EXIT_SUCCESS);
      break;
default:
      system("cls");
      cout << "Invalid Input" << endl;
      break;
    }
}
int main() 
{
    system("cls");
    Recharge LoadRecharge;
    Recharge* inBalance = &LoadRecharge;

    int option;
    cout << "1. Balance check and recharge your account" << endl;
    cout << "2. All bundles" << endl;
    cout << "3. Exit" << endl;
    cin >> option;
    switch (option)
    {
        case 1:
              system("cls");
              int option1;
              LoadRecharge.CheckBalance();
              cout << endl;
              cout << "1. Recharge your account" << endl;
              cout << "2. Main Menu" << endl;
              cout << "3. Exit" << endl;
              cin >> option1;
              if (option1 == 1) {
                  system("cls");
                  int if1;
                  LoadRecharge.RechargeAccount();
                  cout << endl;
                  cout << "1. Again recharge your account" << endl;
                  cout << "2. Bundles" << endl;
                  cout << "3. Exit" << endl;
                  cin >> if1;
                  if (if1 == 1) {
                      system("cls");
                      LoadRecharge.RechargeAccount();
                      int ss;
                      cout << endl;
                      cout << "1. Bundles" << endl;
                      cout << "2. Exit" << endl;
                      cin >> ss;
                      if (ss == 1) {
                          system("cls");
                          LoadRecharge.AllBundles();
                      }
                      else if (ss == 2) {
                          system("cls");
                          exit(EXIT_SUCCESS);
                      }
                      else {
                          cout << "Invalid Input" << endl;
                      }
                  }
                  else if (if1 == 2) {
                      system("cls");
                      LoadRecharge.AllBundles();
                  }
                  else if (if1 == 3) {
                      system("cls");
                      exit(EXIT_SUCCESS);
                  }
                  else {
                      system("cls");
                      cout << "Invalid Input";
                  }
              }
              else if (option1 == 2) {
                  system("cls");
                  main();
              }
              else if (option1 == 3) {
                  system("cls");
                  exit(EXIT_SUCCESS);
              }
              else {
                  system("cls");
                  cout << "Invalid Input" << endl;
              }
              break;
        case 2:
              system("cls");
              LoadRecharge.AllBundles();
              break;
        case 3:
              system("cls");
              exit(EXIT_SUCCESS);
              break;
        default:
              system("cls");
              cout << "Invalid Input" << endl;
              break;
    }
    return 0;
}