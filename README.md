# C++ vs Javascript V8 performance

There're two exactly the same solutions of the same problem written on c++ and javascript. By the light of nature c++ code should work much more faster. However it could be not truth.

## The problem

Compute the 25.000th prime

## The algorithm

Iterate over all natural numbers and check if the number on each step is not devisable by any members of any initially empty list of primes, add x to the list until we have 25.000

## The results

```
$> time ./primes

287107

real    0m1.779s
user    0m1.775s
sys 0m0.003s
```

```
$> time node primes.js

287107

real    0m1.186s
user    0m1.173s
sys 0m0.019s
```

```
process.versions

{
    ...
    v8: '3.14.5.9',
    ...
}
```

Version of v8 were used: *3.14.5.9*

## Illation

Javascript could be really fast but you should use it properly. It's necessary to know v8's basic concepts, such as hidden classes and so forth.

[Google I/O 2012 - Breaking the JavaScript Speed Limit with V8](http://www.youtube.com/watch?v=UJPdhx5zTaw)
