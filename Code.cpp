#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
 string question,choiceA,choiceB,choiceC,choiceD,answer;
char choice;
int no_errors=0;
bool is_hung(int);
bool hung_result=false;
ifstream myfile;
myfile.open("infile.txt");
for(int r =0; r < 16; r++)
 {
 getline(myfile,question);
 getline(myfile,choiceA);
 getline(myfile,choiceB);
 getline(myfile,choiceC);
 getline(myfile,choiceD);
 getline(myfile,answer);
 cout << "************************ MY HANG MAN GAME
************************"<<endl;
 cout << question<<endl;
 cout << choiceA<<endl;
 cout << choiceB<<endl;
 cout << choiceC<<endl;
 cout << choiceD<<endl;
 cout << "Enter the capital letter of your answer: ";
 cin >> choice;
 if (choice == answer[16])
 {
 cout << "CORRECT !!!!\n";
 }
 else
 {
 cout << "INCORRECT !!!!\n";
 no_errors++;
 }
 cout << answer<<endl;
 hung_result = is_hung(no_errors);
 if (hung_result == true)
 {
 return 0;
 }
 cout <<
"******************************************************************"<<endl
;
 //system ("CLS");
 }
myfile.close();
return 0;
}
bool is_hung(int x)
{
 if (x==1)
 {
 cout << "\t \t \t" << " O " << endl;
 return false;
 }
 else if (x==2)
 {
 cout << "\t \t \t" << " O " << endl;
 cout << "\t \t \t" << " | " << endl;
 return false;
 }
 else if(x==3)
 {
 cout << "\t \t \t" << " O " << endl;
 cout << "\t \t \t" << "/|\\" << endl;
 return false;
 }
 else if(x==4)
 {
 cout << "\t \t \t" << " O " << endl;
 cout << "\t \t \t" << "/|\\" << endl;
 cout << "\t \t \t" << " | " << endl;
 return false;
 }
 else if(x==5)
 {
 cout << "\t \t \t" << " O " << endl;
 cout << "\t \t \t" << "/|\\" << endl;
 cout << "\t \t \t" << " | " << endl;
 cout << "\t \t \t" << "/ " << endl;
 return false;
 }
 else if (x==6)
 {
 cout << "\t \t \t" << " O " << endl;
 cout << "\t \t \t" << "/|\\" << endl;
 cout << "\t \t \t" << " | " << endl;
 cout << "\t \t \t" << "/ \\" << endl;
 cout << " YOU ARE HUNG" <<endl;
 return true;
 }
}
