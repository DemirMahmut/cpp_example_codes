#include <iostream>
#include <memory>
#include <vector>


int main(){

    std::shared_ptr<int> p1{std::make_shared<int>(100)}; // make_shared ile bellekten 100 degeri icin yer ayirdik. new ile de yapilabilir.
    std::cout << "p1: " << *p1 << std::endl;
    std::cout << "p1 use count: " << p1.use_count() << std::endl; // use_count pointerin kac tane kullanimi oldugunu gosterir. p1 use count: 1
    std::shared_ptr<int> p2{p1}; // p2 nin p1 i gosterdigi bellek adresine sahip olmasi icin p1 i p2 ye atadik.
    std::cout << "p1 use count: " << p1.use_count() << std::endl; // p2 de p1 i gosterdigi icin p1 use count: 2
    std::cout << "p2 use count: " << p2.use_count() << std::endl; // p2 nin kendisi de p1 i gosterdigi icin p2 use count: 2

    p1.reset(); // p1 i bosalttik.
    std::cout << "p1 use count: " << p1.use_count() << std::endl; // p1 in artik gosterdigi bir bellek adresi yok. p1 use count: 0
    std::cout << "p2 use count: " << p2.use_count() << std::endl; // p2 nin kendisi de p1 i gosterdigi icin p2 use count: 1
    std::cout << "p2: " << *p2 << std::endl; // p2 nin gosterdigi bellek adresindeki degeri yazdirir. p2: 100

    return 0;
}