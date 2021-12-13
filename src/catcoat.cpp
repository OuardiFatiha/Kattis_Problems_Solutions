#include <iostream>
#include <iterator>
#include <map>
  
using namespace std;
  

void affiche_map(map<string, string> &color_map){
    map<string, string>::iterator itr;
    cout << "\nThe map of colors is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = color_map.begin(); itr != color_map.end(); ++itr) {
        cout << '\t' << itr->first
             << "\t\t" << itr->second << '\n';
    }
    cout << endl;
}  

// we suppose that the string have 6 caracters each 2 dedicated for a gene in the following order : B, D, O
// 012345
// BBDDOO 
string simplify(string str){
       // a particular character can be accessed using at /
       // [] operator
       //  substr(a, b) function returns a substring of b length
       //  starting from index a
       if(str[0] == 'B') str.at(1)='-';
       if(str[2] == 'D') str.at(3)='-';
       if(str[4] == 'O' && str[5] != 'o') {str.at(0)='-'; str.at(1)='-';}
       
       return str;
}

//bool isMale(string str){}
//bool isFemale(string str){}

int main()
{
  
    // empty map container
    map<string, string> color_map;
    
    color_map.insert(pair<string, string>("B-D-", "Black"));
    color_map.insert(pair<string, string>("B-dd", "Blue"));
    color_map.insert(pair<string, string>("bbD-", "Chocolate"));
    color_map.insert(pair<string, string>("bbdd", "Lilac"));
    color_map.insert(pair<string, string>("D-O", "RedM")); // M at the end of RedM for Male
    color_map.insert(pair<string, string>("ddO", "CreamM")); // M at the end of RedM for Male
    color_map.insert(pair<string, string>("D-OO", "RedF")); // F at the end of RedF for Female
    color_map.insert(pair<string, string>("ddOO", "CreamF")); // F at the end of RedF for Female    
    color_map.insert(pair<string, string>("B-D-Oo", "Black-Red Tortie"));
    color_map.insert(pair<string, string>("B-ddOo", "Blue-Cream Tortie"));
    color_map.insert(pair<string, string>("bbD-Oo", "Chocolate-Red Tortie"));
    color_map.insert(pair<string, string>("bbddOo", "Lilac-Cream Tortie"));
    
    affiche_map(color_map);

    string s="BbDdOo";

    cout<<simplify(s)<<endl;

    return 0;    
}
