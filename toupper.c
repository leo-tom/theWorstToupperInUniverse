/*
Copyright (c) 2020, Leo Tomura
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
* Redistributions of source code must retain the above copyright notice, 
  this list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, 
  this list of conditions and the following disclaimer in the documentation 
  and/or other materials provided with the distribution.
* Neither the name of the Leo Tomura nor the names of its contributors 
  may be used to endorse or promote products derived from this software 
  without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL Leo Tomura BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include <stdio.h>
char my_toupper(char v){
return 
		((	(((v >> 0) & 0x1) & 1 )
 ^ 0 ) << 0)
 | 		((	(((v >> 1) & 0x1) & 1 )
 ^ 0 ) << 1)
 | 		((	(((v >> 2) & 0x1) & 1 )
 ^ 0 ) << 2)
 | 		((	(((v >> 3) & 0x1) & 1 )
 ^ 0 ) << 3)
 | 		((	(((v >> 4) & 0x1) & 1 )
 ^ 0 ) << 4)
 | 		((	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 1) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 2) & 0x1) & ((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 2) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 3) & 0x1) & ((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & ((v >> 7) & 0x1) & 1 )
 ^	(((v >> 0) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 1) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 2) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 3) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 4) & 0x1) & ((v >> 5) & 0x1) & ((v >> 6) & 0x1) & 1 )
 ^	(((v >> 5) & 0x1) & 1 )
 ^ 0 ) << 5)
 | 		((	(((v >> 6) & 0x1) & 1 )
 ^ 0 ) << 6)
 | 		((	(((v >> 7) & 0x1) & 1 )
 ^ 0 ) << 7)
 | 0;
}

int main(){
	int c;
    for(c = 0;c < 128;c++){
		char val = my_toupper(c);
        printf("\'%c\'[%x] => \'%c\'[%x]\n",c,c,val,val);
    }
}

