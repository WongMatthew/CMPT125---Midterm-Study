/*
There are two methods to convert from decimal to binary

METHOD 1: Subtraction

For example, our key is 75

STEP 1: Write out a list of values with the base of 2
128  64  32  16  8  4  2  1

STEP 2: Stop at the largest value that is smaller than your key
128  [64]  32  16  8  4  2  1
(64 is the largest value that is smaller than 75)

STEP 3: Subtract 64 from 75 --> 75 - 64 = 11
Step 3.1: Subtract 8 from 11 --> 11 - 8 = 3
STEP 3.2: Subtract 2 from 3 --> 3 - 2 = 1
STEP 3.3: Subtract 1 from 1 --> 1 - 1 = 0 ** Stop when you reach 0.

STEP 4: Record all values that you subtracted as 1 and values you did not subtract as 0.
64  32  16  8  4  2  1
1   0   0   1  0  1  1      <-- this is our answer

*/

