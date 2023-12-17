#include <iostream>

int main()
{
      //if statements = do something if a condition is true.
      //                if not, then don't do it.

      int highschoolgrade;

      std::cout << "Enter your high school grade: ";
      std::cin >> highschoolgrade;
     
       if (highschoolgrade > 12){
        std::cout << "Who let you in the building?";
       }
      else if(highschoolgrade >= 10){
        std::cout << "Welcome to the club!";
      }
      else if (highschoolgrade < 9){
        std::cout << "How did you even get here?";
      }   

      else{
      std::cout << "Get out freshie!";
      }
      return 0;
}