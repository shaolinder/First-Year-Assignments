#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
	int number=18,total=0,countPos=0,countNeg=0,sumEven=0,sumOdd=0,temp=0,largest,smallest,i=0;
	stringstream posNum,negNum;





	while(i<12){


        cout <<" "<<number;


        //Largest ug smallest//
		if (temp < number) {
            largest=number;
            temp=number;

		} else {

		    smallest=number;
		    temp=number;
		}
		//Largest ug smallest END//



		//Negative Numbers and positive//
        if(number>0) {
            posNum<<number <<" ";
        } else if (number<0){
            negNum<<number <<" ";

        }

        //Negative Numbers and positive//

		if(number>0 && number%2!=0) {
			countPos++;
		}


		if(number<0 && number%2==0) {

		    countNeg++;
		}

		if(number<0 && number%2!=0) {
			sumOdd+=number;

		}

		if(number>0 && number%2==0) {

		    sumEven+=number;
		}

        number-=3;
		i++;

	}



	cout << endl << "Positive numbers: " <<posNum.str();
	cout << endl << "Negative numbers: " <<negNum.str();
	cout << "\nCount of positive odd numbers: " << countPos;
	cout << "\nCount of negative even numbers: " << countNeg;
	cout << "\nSum of negative odd numbers: " << sumOdd;
	cout << "\nSum of positive even numbers: " << sumEven;
	cout << "\nSmallest: " << smallest;
	cout << "\nLargest: " << largest;




	return 0;
}

