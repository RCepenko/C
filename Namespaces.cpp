#include <iostream>
//Namespace = provides a solution for preventing name conflicts
    //            in a large projects.
    //            A namespace allows for identically named entities
    //            as long as the namespaces are different.


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {
    //using namespace first;
    using namespace std; // if we use this type we dont need 
    // to declare cout or string, but std have many dif. entities. 
    // also can use (using std::cout; 
    //or using std::string; to declare ) 

    //std::cout << first::x;
    //std::cout << x;
    cout << second::x;


    return 0;
}