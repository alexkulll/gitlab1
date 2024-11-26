#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void f_1(){
    ifstream filetxt("1.txt");
    vector <string> v1;
    string str;
    while(getline(filetxt,str)){
        v1.push_back(str);
        //cout<<line<<endl;
}
filetxt.close();

}

void f_2(){

}

void f_3(){

}

int main(){
f_1();
f_2();
f_3();
}
