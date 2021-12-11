#include <iostream>
#include <iterator>
#include <map>
  
using namespace std;
  

void affiche_map(map<string, string> &color_map){
    map<string, string>::iterator itr;
    cout << "\nThe map pf colors is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = color_map.begin(); itr != color_map.end(); ++itr) {
        cout << '\t' << itr->first
             << "\t\t" << itr->second << '\n';
    }
    cout << endl;
}  
  
int main()
{
  
    // empty map container
    map<string, string> color_map;
    
    color_map.insert(pair<string, string>("Black", "B-D-"));
    color_map.insert(pair<string, string>("Blue", "B-dd"));
    color_map.insert(pair<string, string>("Chocolate", "bbD-"));
    color_map.insert(pair<string, string>("Lilac", "bbdd"));
    color_map.insert(pair<string, string>("RedM", "D-O")); // M at the end of RedM for Male
    color_map.insert(pair<string, string>("CreamM", "ddO")); // M at the end of RedM for Male
    color_map.insert(pair<string, string>("RedF", "D-OO")); // F at the end of RedF for Female
    color_map.insert(pair<string, string>("CreamF", "ddOO")); // F at the end of RedF for Female    
    color_map.insert(pair<string, string>("Black-Red Tortie", "B-D-Oo"));
    color_map.insert(pair<string, string>("Blue-Cream Tortie", "B-ddOo"));
    color_map.insert(pair<string, string>("Chocolate-Red Tortie", "bbD-Oo"));
    color_map.insert(pair<string, string>("Lilac-Cream Tortie", "bbddOo"));
    
    affiche_map(color_map);
    
    return 0;    
}
