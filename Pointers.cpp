#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string acid_name;
    getline(cin, acid_name);
    int acid_count;
    cin >> acid_count; cin.ignore();
    float water_count;
    cin >> water_count; cin.ignore();

    float temp = (acid_count/(acid_count+water_count)) * 100;
    
  cout << fixed << setprecision(2);     
    if(acid_name == "Hydrochloric" || acid_name == "Sulfuric" ||acid_name == "Nitric" || acid_name == "Citric")
{
        cout <<temp << "% "<< acid_name <<" Acid";
}
    else {
        
        cout << temp << "% "<< "Unknown Acid";
}
}