/**
 * Copyright (c) 2019 Cezar Mathe <cezarmathe@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 **/
#include<Arduino.h>
#include<pinbitwriter> /*note that including the library might be diffrent for you*/

void setup() {
    // We set how many pins will be used for writing
    com_cezarmathe :: pinCount = 3;

    // Then we tell the library what pins will represent what bits
    com_cezarmathe :: pins[0] = 2;
    com_cezarmathe :: pins[1] = 4;
    com_cezarmathe :: pins[2] = 7;

    // init() sets the pinMode to output for each pin
    com_cezarmathe :: init();

    Serial.begin(9600);
}

void loop() {
    for (int i = 0; i < 8; i++) {
        // We write a number to the pins
        com_cezarmathe :: write(i);
        Serial.println("Wrote " + i);
        delay(1500);
    }
}