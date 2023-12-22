#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


double mean,SD,num_2;
double sum = 0;
int count = 0;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        num_2 += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count;
    SD = sqrt((num_2/count)-pow(mean,2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD;
}