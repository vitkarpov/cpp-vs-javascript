#include <iostream>

class Primes {
  public:
    Primes() {
      count = 0;
    }

    int getPrimeCount() const {
      return count;
    }
    int getPrime(int i) const {
      return primes[i];
    }
    void addPrime(int prime) {
      primes[count++] = prime;
    }
    bool isItPrime(int candidate) {
      for (int i = 1; i < count; ++i) {
        if ((candidate % primes[i]) == 0) {
          return false;
        }
      }
      return true;
    }

  private:
    volatile int count;
    volatile int primes[25000];
};

int main() {
  Primes p;
  int n = 1;

  while (p.getPrimeCount() < 25000) {
    if (p.isItPrime(n)) {
      p.addPrime(n);
    }
    n++;
  }

  std::cout << p.getPrime(p.getPrimeCount() - 1) << std::endl;

  return 0;
}