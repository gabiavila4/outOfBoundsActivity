//
//  main.cpp
//  outOfBoundsActivity
//
//  Created by Gabriela Avila on 10/18/25.
//

#include <iostream>
#include <array>
#include <vector>
using namespace std;

class out_of_bounds : public exception{
public:
    virtual const char* what() const throw(){
        return "Index Out of Bounds";
    }
} oob;

string findInArray(vector<int> v, int idx){
    
    if (idx >= 0 && idx < v.size()){
        string s = to_string(v[idx]);
        cout << s << endl;
        return s;
    }else{
        throw oob;
    }
}

int main() {
   
    vector<int> vec = {31, 19, 23, 42, 53};
    //string test = findInArray(vec, 6);
    try{
        findInArray(vec, 3);
    }catch(out_of_bounds& oob){
        cout << oob.what() << endl;
    }try{
        findInArray(vec, 4);
    }catch(out_of_bounds& oob){
        cout << oob.what() << endl;
    }try{
        findInArray(vec, 32);
    }catch(out_of_bounds& oob){
        cout << oob.what() << endl;
    }try{
        findInArray(vec, -1);
    }catch(out_of_bounds& oob){
        cout << oob.what() << endl;
    }
  
}
