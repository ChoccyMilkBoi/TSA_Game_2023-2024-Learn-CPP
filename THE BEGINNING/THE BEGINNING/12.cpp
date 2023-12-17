#include <iostream>

int main()
{
    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases

 
       int week;
       std::cout << "Enter the day of the week (1-7): ";
       std::cin >> week;

  switch(week){
    case 1:
    std::cout << "It is Monday";
    break;
    case 2:
    std::cout << "It is chewsday";
    break;
    case 3:
    std::cout << "It is Wednesday";
    break;
    case 4:
    std::cout << "It is Thursday";
    break;
    case 5: 
    std::cout << "It is Friday!";
    break;
    case 6: 
    std::cout << "It is Saturday!";
    break;
    case 7:
    std::cout << "It is Sunday :(";
    break;
    default:
       std::cout << "You've gotta be joshing me rn"; 
  }
   return 0;
}