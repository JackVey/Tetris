#include <iostream>
#include <random>
using namespace std;
int generateRandomNumber(int N, int P)
{
    //generate random number from P to N
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(N, P);
    return dist(gen);
}

int main() {
    for (int i = 0; i < 50 ; i++){
        cout << generateRandomNumber(2, 8) << endl;
    }
    return 0;
}
