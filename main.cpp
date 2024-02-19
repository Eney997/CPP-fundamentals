#include <iostream>

using namespace std;

int main()
{
    //dworing a shape samkutxedi

    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;

    //Variables in C++

    string name ="Rene";
    int age = 25;

    cout << "There once was a man named " << name << endl;
    cout << "He was "<< age <<" years old" << endl;

    name = "Tom";
    cout << "He liked the name " << name << endl;
    cout << "But didnt liked being " << age << endl;


    // Data tipes

    char grade = 'A';
    string phrases = "My name";
    int asak = 12;
    double ganatlebisQula = 3.2;
    bool isMale = true;
    float ganatlebisQulaSec = 3.0;



    //Working with STRINGS


    string rameStringi = "lorem";
    rameStringi[0] = 'A';

    cout << rameStringi.length()<< endl;
    cout << rameStringi[0]<< endl;
    cout << rameStringi<< endl;
    cout << rameStringi.substr(1,3)<< endl;

    string secramestr = "raviShechema";
    string thirdramestr;
    thirdramestr = secramestr.substr(0,3);
    cout<<thirdramestr;




    return 0;
}
