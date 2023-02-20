#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string sentence ="hellohello hellohellohello";
    string searchWord = "ell";
    stringstream ha(sentence);
    string words;
    int count = 0;
    
    while(ha >> words){
        size_t found = words.find(searchWord);
        count++;
        if(found != string::npos){
            cout<<searchWord<< " Occured at "<<count<<endl;
        }
        else{
            cout<<"false at: "<<words<<endl;
        }

    }
    return 0;
}
