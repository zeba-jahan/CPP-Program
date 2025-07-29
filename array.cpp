// #include <iostream>
// #include <memory>

// int main() {
// std::unique_ptr<int> p1(new int(24));
// std::cout << "Number: " << *p1 << std::endl;
// return 0;
// }

// #include <iostream>
// #include <memory>

// int main() {
//     std::shared_ptr<int> a(new int(100)); 
//     std::shared_ptr<int> b = a;           
//     std::shared_ptr<int> c = b;           

//     std::cout << "Use count: " << a.use_count() << std::endl;
//     return 0;
// }



// #include <iostream>
// #include <memory>

// int main() {

//     std::shared_ptr<int> ptr1 = std::make_shared<int>(10);
//     std::shared_ptr<int> ptr2 = ptr1;
//     std::cout << "Number of owners: " << ptr1.use_count() << std::endl;
//     return 0;
// }


//  #include <iostream>
//  #include <memory>

//  int main() {
    
//    std::unique_ptr<double> ptr = std::make_unique<double>(4.5);
//    std::cout << *ptr << std::endl;
    
//     return 0;
//  }

// #include <iostream>
// #include <memory>

// int main() {
//     std::unique_ptr<int> num = std::make_unique<int>(42);
//     std::cout << *num << std::endl;
//     return 0;
// }

#include <iostream>
#include <memory>

int main() {
    
    std::shared_ptr<int> a = std::make_shared<int>(100);
    std::shared_ptr<int> b = a;
    std::shared_ptr<int> c = a;
    std::cout << "Value: " << *a << std::endl;
    std::cout << "Number of owners: " << a.use_count() << std::endl;

    return 0;
}
