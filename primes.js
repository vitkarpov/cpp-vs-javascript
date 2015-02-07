function Primes() {
  this.count = 0;
  this.primes = new Array(25000);
}

Primes.prototype.getPrimeCount = function() {
  return this.count;
};

Primes.prototype.getPrime = function(i) {
  return this.primes[i];
};

Primes.prototype.addPrime = function(n) {
  this.primes[this.count++] = n;
};

Primes.prototype.isItPrime = function(candidate) {
  for (var i = 1; i < this.count; ++i) {
    if ((candidate % this.primes[i]) == 0) {
      return false;
    }
  }
  return true;
};

(function() {
  var p = new Primes();
  var n = 1;

  while (p.getPrimeCount() < 25000) {
    if (p.isItPrime(n)) {
      p.addPrime(n);
    }
    n++;
  }

  console.log(p.getPrime(p.getPrimeCount() - 1));
}());
