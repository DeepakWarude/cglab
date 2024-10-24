#include <iostream>

// Base class: Fruit
class Fruit {
protected:
    int count;

public:
    Fruit(int count = 0) : count(count) {}

    int getCount() const {
        return count;
    }

    virtual void printCount() const = 0; // Pure virtual function
};

// Derived class: Apples
class Apples : public Fruit {
public:
    Apples(int count = 0) : Fruit(count) {}

    void printCount() const override {
        std::cout << "Number of Apples: " << getCount() << std::endl;
    }
};

// Derived class: Mangoes
class Mangoes : public Fruit {
public:
    Mangoes(int count = 0) : Fruit(count) {}

    void printCount() const override {
        std::cout << "Number of Mangoes: " << getCount() << std::endl;
    }
};

// Basket class to calculate the total number of fruits
class Basket {
private:
    Fruit* fruits[2]; // Array to store pointers to Fruit objects
    int totalFruits;

public:
    Basket(Fruit* fruit1, Fruit* fruit2) : totalFruits(0) {
        fruits[0] = fruit1;
        fruits[1] = fruit2;
        totalFruits = fruits[0]->getCount() + fruits[1]->getCount();
    }

    void printFruitCounts() const {
        for (int i = 0; i < 2; ++i) {
            fruits[i]->printCount();
        }
    }

    void printTotalFruits() const {
        std::cout << "Total Number of Fruits: " << totalFruits << std::endl;
    }
};

int main() {
    int appleCount, mangoCount;

    // User input for the number of apples and mangoes
    std::cout << "Enter the number of apples: ";
    std::cin >> appleCount;

    std::cout << "Enter the number of mangoes: ";
    std::cin >> mangoCount;

    // Create objects for Apples and Mangoes with user input
    Apples apples(appleCount);
    Mangoes mangoes(mangoCount);

    // Create a Basket object
    Basket basket(&apples, &mangoes);

    // Print the number of fruits of each type and the total number of fruits
    basket.printFruitCounts();
    basket.printTotalFruits();

    return 0;
}