# pinbitwriter

**pinbitwriter** is an IoT library for writing bits to digital pins like they are a data transfer bus.

## Features

The library can write to 16 pins at most(aka 16 bits a time, which allows writing 2<sup>16</sup> values).

## How to use

First, you need to set how many pins you are going to use.

```c++
com_cezarmathe :: pinCount = x; /*where x is a number between 0 and 16*/
```

Then, you need to tell the library which bit is assigned to which pin.

```c++
com_cezarmathe :: pins[0] = a;
com_cezarmathe :: pins[1] = b;
// ...........................
com_cezarmathe :: pins[15] = o;
// a, b, ... o are pin numbers
```

When you're done, you can start writing data like this:

```c++
com_cezarmathe :: write(your_number); /*where your_number is an unsigned integer*/
```

Make sure not to write numbers that are greater than the maximum value the pin bus can write(2<sup>pinCount</sup> - 1).

Here is an example for an [Arduino LED counter](https://github.com/cezarmathe/pinbitwriter/tree/master/examples/arduino_example.cpp).