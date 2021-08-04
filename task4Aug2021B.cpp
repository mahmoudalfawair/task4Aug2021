#include <iostream>
using namespace std;
int main()
{
int input;
cout << "Enter any number : ";
cin >> input;
cout << "\n";
int j=1;
int sum=0;
for(int i =1;i<=input; j=j*10+1 )
{
sum+=j;
cout << j << " + ";
i++;
if(i > input)
cout << "\b\b\b";
if(i >input)
cout<< " = ";
}
cout << sum << endl;
return 4;
}