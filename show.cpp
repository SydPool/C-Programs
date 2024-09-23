#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        
        

    int j = 0;
    int drops = 0;

    while (j < line.length()){

        if (line[i] == 'f'){

            drops++;
            i+=3;
        }

        else{
            i++;
        }



    }
    cout << drops <<'\n';

}
    return 0;
}