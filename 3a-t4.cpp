int main()  
{  
int k, i = 1, sum = 0, number;  
cout << " Enter the amount of integers to sum = "; cin >> k;  
if (k == 0) cout << " Enter right sum next time";  
else {  
do {  
cout << "Enter integer " << i << ": ";   
cin >> number;  }  
sum += number; i++;  
} while (i <= k);  
cout << " The total sum of " << k << " integers is: "  << sum;}  
return 0;  
}

