#include <iostream> 
#include <vector>

template <typename T1, typename T2>
class Pair {
private:
    T1 t1;
    T2 t2;
public:
    Pair(T1 t1, T2 t2) : t1(t1), t2(t2) {}
    T1 getT1() const { return t1; }
    T2 getT2() const { return t2; }
};

int main(){
    Pair<int, double> p1(1, 2.5);
    std::cout << p1.getT1() << " / " << p1.getT2() << std::endl;

    Pair<double, int> p2(2.5, 1);
    std::cout << p2.getT1() << " / " << p2.getT2() << std::endl;

    Pair<std::string, int> p3("Hello", 5);
    std::cout << p3.getT1() << " / " << p3.getT2() << std::endl;

    Pair<std::vector<int>, int> p4({1, 2, 3, 4, 5}, 5);
    std::cout << p4.getT1()[0] << " / " << p4.getT2() << std::endl;

    return 0;
}