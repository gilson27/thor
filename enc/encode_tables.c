/*
Copyright (c) 2015, Cisco Systems
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or
  other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "global.h"

const double squared_lambda_QP [52] = {
    0.0382, 0.0485, 0.0615, 0.0781, 0.0990, 0.1257, 0.1595, 0.2023, 0.2567,
    0.3257, 0.4132, 0.5243, 0.6652, 0.8440, 1.0709, 1.3588, 1.7240, 2.1874,
    2.7754, 3.5214, 4.4679, 5.6688, 7.1926, 9.1259, 11.5789, 14.6912, 18.6402,
    23.6505, 30.0076, 38.0735, 48.3075, 61.2922, 77.7672, 98.6706, 125.1926, 158.8437,
    201.5399, 255.7126, 324.4467, 411.6560, 522.3067, 662.6996, 840.8294, 1066.8393, 1353.5994,
    1717.4389, 2179.0763, 2764.7991, 3507.9607, 4450.8797, 5647.2498, 7165.1970
};
