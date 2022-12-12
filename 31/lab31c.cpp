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