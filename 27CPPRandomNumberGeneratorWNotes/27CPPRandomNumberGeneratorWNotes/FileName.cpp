#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0)); // We start by includeing this line to seed the random number with a starting point of time
	//to make results truly random or as random as they can get.

	for (int x = 1; x < 25; x++) {//So we start with intital value of 1 and go to 25 if true:
		// First iteration is 1<25? True, execute remainder of codeblock
		cout << 1 + rand() % 6 << endl;
		//First iteration we see out 1 + rand() because rand default starts at 0. The % (modulo(us)) operator takes whatever
		// By using % 6 we get a random number 0-5.  By adding 1 we get a rand number 1-6 (think dice.
		//that result is, divides it by 6 and then takes the remainder. This info is seen out to screen.
		//So lets just say first rand number was 26. 26/4 is 4 with 2 left over. We then add 1 so we are not left
		// With a 0 as a random number. So in the fist element of the list
		//3 would be the random number.
		// //After this in we would go to increment step x++ would be 1++= 1+1+2. So x would increment to 2 to start the
		//2nd iteration. x =2 and then 2<25 continue the codeblock...
		//Next lets say the rand number was 30. 30%6 would be 5 with 0 left over. So as the code says add 1.
		//Now because we added we have 1 as the ramainder and that is the random number
		//would be the number on the list.  We divide by 6 so we have left over a random 1-10. And not double digits.
		
	}

}