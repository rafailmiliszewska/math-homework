// Function to calculate the factorial of a given number
int factorial(int n) {
  if (n == 0) return 1;
  else return n * factorial(n-1);
}

// Testing the function with different inputs
int main() {
  cout << "Factorial of 5 is: " << factorial(5) << endl;
  cout << "Factorial of 7 is: " << factorial(7) << endl;
  return 0;
}