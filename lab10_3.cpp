//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()

{

    int count = 0;

    double sum = 0;

    double sum_of_square = 0;

    string textline;

    ifstream source("score.txt");

    while (getline(source, textline))
    {

        sum += stof(textline);

        sum_of_square += pow(stof(textline),2);

        count++;
    }
    double x = sum/count;

    cout << "Number of data = " << count << "\n";

    cout << setprecision(3);

    cout << "Mean = " << x << "\n";

    cout << "Standard deviation = " << pow((sum_of_square/count)-pow(x,2),0.5);
}