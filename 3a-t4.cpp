#include<iostream>   
using namespace std;   
  
int main()  
{  
int k, i = 1, sum = 0, number1;  
cout << " Enter the amount of integers to sum = "; cin >> k;  
if (k == 0) cout << " Enter right sum next time";  
else {  
do {  
cout << "Enter integer nr. " << i << ": ";   
cin >> number1;  
if (cin.fail()) { cout << "Fail" << endl;  
cin.clear();  
cin.ignore();  
cout << "Enter once more = ";  
cin >> number1;} 
sum_k += number1; i++;  
} while (i <= k);  
cout << " The total sum of " << k << " integers is: "  << sum;}  
return 0;  
}
