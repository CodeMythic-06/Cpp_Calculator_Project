
#include <iostream>
using namespace std;
int main() {

  double num1, num2, result;
  char op;
  
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter operator" << endl;
  cin >> op;
  cout <<"Enter second number" << endl;
  cin >> num2;
  
  switch(op) {
    case'+':
    result = num1 + num2;
    cout << num1 <<op << num2 <<" = " << result << endl;
    break;
    
    case'-':
    result = num1 - num2;
    cout << num1 << op << num2 <<" = " << result << endl;
    break;
    
    case'*':
    result = num1 * num2;
    cout << num1 <<op << num2 <<" = " <<result << endl;
    break;
    
    case'/':
    if (num2 == 0) {
      cout << "Division any number by zero is not allowed" << endl;
    }
      
    else {
      result = num1/num2;
      cout << num1 <<op <<num2 <<" = " << result << endl;
    }
  break;

  default:
  cout << "Invalid number or operator" << endl;
  }

  return 0;
}
