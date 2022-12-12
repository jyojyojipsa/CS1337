// Kangmin Kim
// CS 1337
// Lab 31



// step 0) we need to make an integer array such that we account for the reverse numbering
// as well as numbering beginning at 1
// step 1) make four new variables called recParityBitX where X is 1,2,4,8
// 			recParityBit1=bits[1]
//			recParityBit2=bits[2]
// .....
// Step 2) make four new variables called calcParityBitY where Y is 1,2,4,8
//			vac1ParityBit1=(bit[3]+bit[5]+bit[7]+bit[9]+bit[11])%2;
//			.....

// Step 4) I need to compare recParityBitX to calcParityBitX
// int locationOfError
// if(recParityBit1!=calcParityBit1)
//		locationOfError+=1;
// if(recParityBit4!=calcParityBit4)
//		locationOfError+=4;
// do this for parity bits 2 and 8

// Step 4) I need to flip the bit[locationOfError]
// if its a 0 change it to a 1
// else change it to a 0
// Step 5) pull all the data bits out of the bits array and form my ASCII value
// ( hint cmath -> pow function)

// Step 6) static_cast<char>(value)
// so for our example we would cast the integer 77 to the character 'M'


// What do I have to do
//1) create your own main to read in the input
//2) apply the above algorithm to find and fix potential errors

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <bitset>
#include <climits>
#include <bits.h>
using namespace std;

const int N = sizeof(int) * CHAR_BIT;

unsigned int invBit(unsigned int word, int n)
{
	
	unsigned int invBit = ~getBit(word, n);
	word = setBit(word, n, getBit(invBit, N));;
	return word;
}

int main()
{
  int x, sum, number;
  
  cout << "Kangmin Kim, CS 1337, Lab 31\n\n";
  while (cin >> x)
  {
	sum = 0;
	x = getBits(x, 0, 11);
	if(getBit(x, 10) != (getBit(x, 8) + getBit(x, 6) + getBit(x, 4) + getBit(x, 2) + getBit(x, 0)) % 2)
		sum += 1;
	if(getBit(x, 9) != (getBit(x, 8) + getBit(x, 5) + getBit(x, 4) + getBit(x, 1) + getBit(x, 0)) % 2)
		sum += 2;
	if(getBit(x, 7) != (getBit(x, 6) + getBit(x, 5) + getBit(x, 4)) % 2)
		sum += 4;
	if(getBit(x, 3) != (getBit(x, 2) + getBit(x, 1) + getBit(x, 0)) % 2)
		sum += 8;
	if(sum != 0)
		x = invBit(x, 11 - sum);
	number = getBit(x, 8) * 64 + getBit(x, 6) * 32 + getBit(x, 5) * 16 + getBit(x, 4) * 8 + getBit(x, 2) * 4 + getBit(x, 1) * 2 + getBit(x, 0);
	cout << (char)number;
  }
  
  cout << "\n";

  return EXIT_SUCCESS;
}
