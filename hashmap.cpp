#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks;

    // Insert values
    pair<string,int> pairs( "kka" , 62);
    marks.insert(pairs);

    
    
    
    marks["Rahul"] = 90;
    marks["Amit"] = 85;
    marks["Priya"] = 95;

    
    marks["Amit"] = 90;
    // Access value
    cout << "Marks of Rahul: " << marks["Rahul"] << endl;

    // Check if a key exists
    if (marks.find("Amit") != marks.end()) {
        cout << "Amit is present." << endl;
    }

    // Loop through all entries
    for (auto x : marks) {
        cout << x.first << " => " << x.second << endl;
    }

    cout << marks.at("Amit") << endl;
    cout << marks["Priya"] << endl;


    return 0;
}
