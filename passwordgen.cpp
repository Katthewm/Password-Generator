#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(void)
{
srand (time(NULL));
ofstream file;
file.open("password.txt");
char lowletters[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char Upletters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char numbers[]={'0','1','2','3','4','5','6','7','8','9'};

int length;
cout << "How long should the password be? ";
cin >> length;

if(cin.fail())
{
cout << "Not a valid number";
}

for(int i=0; i<length; i++)
{
int roll1=rand()%3;
switch(roll1)
{
case 0:
{
int roll2=rand()%26;
file << lowletters[roll2];
break;
}
case 1:
{
int roll3=rand()%26;
file << Upletters[roll3];
break;
}
case 2:
{
int roll4=rand()%10;
file << numbers[roll4];
break;
}
}
}
cout << "Password creation completed.";
}
