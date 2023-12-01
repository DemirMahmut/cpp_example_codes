#include <iostream>
#include <vector>

class Car
{
private:
    std::string CarName; // attributes
    int MaxVelocity;
    int MaxPassengers;
    std::vector<std::string> MostKnownFeatures;

public:
    Car() // constructor
    {
        CarName = "default";
        MaxVelocity = 0;
        MaxPassengers = 0;
        // mostknownfeatures ı doldurmak için push_back kullanıyoruz
        MostKnownFeatures.push_back("4 doors");
        MostKnownFeatures.push_back("4 wheels");
        MostKnownFeatures.push_back("4 seats");
    }

    Car(std::string carName, int maxVelocity, int maxPassengers) // constructor
    {
        CarName = carName;
        MaxVelocity = maxVelocity;
        MaxPassengers = maxPassengers;
        // mostknownfeatures ı doldurmak için push_back kullanıyoruz
        MostKnownFeatures.push_back("4 doors");
        MostKnownFeatures.push_back("4 wheels");
        MostKnownFeatures.push_back("4 seats");
    }

    ~Car() // destructor
    {
        std::cout << CarName << " object is destroyed" << std::endl;
    }

    void printCarFeatures() // method
    {
        std::cout << CarName << std::endl;
        std::cout << MaxVelocity << std::endl;
        std::cout << MaxPassengers << std::endl;
        for (auto i : MostKnownFeatures)
        {
            std::cout << i << std::endl;
        }
    }
};

int main()
{
    {
        Car bmw("BMW", 200, 5); // object

        bmw.printCarFeatures(); // method
    }                           // bu kısım bitince destructor otomatik çağrılır
    std::cout << "----------------" << std::endl;
    {
        Car audi; // object

        audi.printCarFeatures(); // method
    }                            // bu kısım bitince destructor otomatik çağrılır

    // Car bmw("BMW", 200, 5); //object
    // Car audi; //object

    // bmw.printCarFeatures(); //method
    // audi.printCarFeatures(); //method

    // Car bmw; //object
    // bmw.CarName = "bmw"; //attributes
    // bmw.MaxVelocity = 250;
    // bmw.MaxPassengers = 5;
    // bmw.MostKnownFeatures.push_back("4 doors");
    // bmw.MostKnownFeatures.push_back("4 wheels");
    // bmw.MostKnownFeatures.push_back("4 seats");

    // bmw.printCarFeatures(); //method
}

// #include <iostream>
// #include <list>

// class Car
// {
// public:
//     std::string CarName;
//     int MaxVelocity;
//     int MaxPassengers;
//     std::list<std::string> MostKnownFeatures;

//     Car(int maxVelocity, int maxPassengers, std::string carName)
//     {
//         CarName = carName;
//         MaxVelocity = maxVelocity;
//         MaxPassengers = maxPassengers;
//         // MostKnownFeatures = mostKnownFeatures;
//     }

// };
// void arabam(Car audi)
// {
//     std::cout << audi.CarName << std::endl;
//     std::cout << audi.MaxVelocity << std::endl;
//     std::cout << audi.MaxPassengers << std::endl;
//     for (std::string i : audi.MostKnownFeatures)
//     {
//         std::cout << i << std::endl;
//     }
// }

// int main()
// {
//     Car audi(200, 5, "Audi");

//     audi.MostKnownFeatures.push_back("4 doors");
//     audi.MostKnownFeatures.push_back("4 wheels");
//     audi.MostKnownFeatures.push_back("4 seats");

//     arabam(audi);

//     return 0;
// }