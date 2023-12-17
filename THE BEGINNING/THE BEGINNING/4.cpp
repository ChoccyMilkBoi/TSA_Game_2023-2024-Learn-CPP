#include <iostream>


    namespace first{
        int x = 1;
    }
namespace second{
        int x = 2;
    }
    
   int main() {
   using namespace first;


   std::cout << x;
   
   return 0;
}

// Namespace = provides a solution for preventing name conflicts
//             in larger projects. Each entity needs a unique name.
//             A namespace allows for identically named entities
//             as long as the namespaces are different