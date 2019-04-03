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
#include "pinbitwriter.h"

#ifndef PINBITWRITER_CPP
#define PINBITWRITER_CPP
void com_cezarmathe :: write(int bits) {
    for (int i = 0; i < com_cezarmathe :: pinCount; i++) {
        digitalWrite(
            com_cezarmathe :: pins[i],
            bits % 2 == 0 ? 0x0 : 0x1
        );
        bits /= 2;
    }
}

void com_cezarmathe :: init() {
    for (int i = 0; i < com_cezarmathe :: pinCount; i++) {
        pinMode(com_cezarmathe :: pins[i], 0x1);
    }
}
#endif