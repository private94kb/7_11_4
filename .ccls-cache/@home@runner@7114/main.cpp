#include <iostream> 
#include <time.h> 
#include <stdlib.h> 
using namespace std; 

  int Number() { 
  int x; 
  cout << " Enter any number: "; 
  cin >> x; 

  return x; 
  } 
  int main() { 
  int A = Number(); 
  int numberOf=0; 
  int arr[9]; 
  int min = 1; 
  int max = 50; 

    srand(time(NULL)); 

      for (int i = 0; i <9; i++) { 
      arr[i]= min + rand() % (max - min + 1); 
        } 
      for (int i = 0; i < 9; i++) { 

      if (A < arr[i]) 
      numberOf++; 
      } 
     cout << "Amount of elements greater than A:  " << numberOf << endl; 
      system("pause"); 
    } 