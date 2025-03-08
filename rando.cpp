#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main(){
    // unsigned int seed = static_cast<unsigned int>(std::time(0));
    random_device rd;
    cout << "Seed: " << rd() << endl;

    std::default_random_engine generator(rd());
    std::normal_distribution<double> distribution(10, 3);
    
    int dice_roll = distribution(generator);  // generates number in the range 1..6 

    cout << "generated number: " << dice_roll << endl; 

    return 0;
}