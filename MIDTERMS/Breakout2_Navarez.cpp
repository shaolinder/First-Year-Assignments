/* Breakout Session #2
	
	Using switch-case statement, create a program that will prompt 
	the user to enter BINGO numbers.
	That is  1 to 15 is �B�, 16 to 30 is �I�, and so on. 
	The program will also display "Invalid number" for invalid inputs.
	
	Programmer: Vannessa Ruth A. Navarez
	Date: October 18, 2021

*/

#include <iostream>
using namespace std;

int main (){
	int num;
	
	cout<<"BINGO GAME\n";
	cout<<"Imput Number: ";
	cin>>num;

switch(num){
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15: cout<<"B!"; break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30: cout<<"I!"; break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45: cout<<"N!"; break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60: cout<<"G!"; break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:	
	case 69:
	case 70:
	case 71:
	case 72:
	case 73:
	case 74:
	case 75: cout<<"O!"; break;
	default: cout<<"Invalid Number!";
	}
	
	return 0;


}

