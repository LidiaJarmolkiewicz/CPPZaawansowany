
#include <iostream>
#include<memory>
#include <vector>
class Chicken
{
public:

    Chicken()
    {
        std::cout << "konstruktor Chicken" << std::endl;
    };
    ~Chicken()
    {
        std::cout << "destruktor Chicken" << std::endl;
    };
    
};
void fun()
{
   Chicken* rawPtr = new Chicken();
    
    std::unique_ptr<Chicken> smartPtr(new Chicken());
    delete rawPtr;

   
   
};
void copyCh(int x,std::shared_ptr<Chicken> sharedPtr)
{
    std::vector<std::shared_ptr<Chicken>>chickens;
    std::cout << "copy chicken count" << "_" << sharedPtr.use_count() << std::endl;
    for (int i = 0; i < x; ++i)
    {
        chickens.push_back(sharedPtr);
        std::cout << "chicken count push_back" << "_" << sharedPtr.use_count() << std::endl;
    }

}


int main()

{
    //fun();
    std::shared_ptr<Chicken> sharedPtr = std::make_shared<Chicken>();//1 blok szybki i jest safety
   //std::shared_ptr<Chicken> sharedPtr2(new Chicken());
    std::cout << "chicken count-begining" <<"_"<< sharedPtr.use_count() << std::endl;
    copyCh(5, sharedPtr);
    std::cout << "chicken count po funkcji copyCh" << "_" << sharedPtr.use_count() << std::endl;
}