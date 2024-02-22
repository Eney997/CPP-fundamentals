#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //dworing a shape samkutxedi addingtommorow

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



    //Working with Numbers

    cout << 10*5 << endl ;
    cout << 10%3 << endl ;
    cout << (10+10)*8<< endl;

    int wnum = 5;
    double dnum = 5.6;

    wnum++;
    cout << wnum<< endl;

    cout <<5.5+9<<endl;

    cout << 10.0/3<< endl; //difference float and mtel num
    cout <<10/3<<endl;

    cout << pow(2,5)<<endl;
    cout << sqrt(36)<<endl;
    cout << round(4.563)<< endl;
    cout << floor(4.8) << endl;
    cout << fmax(2,9)<<endl;
    cout << fmin(2,9)<<endl;



   // Getting user input


    int asake;
    cout << "Enter your age: " ;
    cin >> asake; //cins stringtan ar viyenebt
    cout << "you are "<<asake<<" years old"<<endl;


    string saxele;
    cout << "Enter Your Name: ";
    getline(cin,saxele); // ase iqcevi stringtan funcia chirdeba
    cout<<"Your name is "<<saxele<<""<< endl;


    // cpp calc ez level

    double num1,num2;

    cout << "Enter first num: ";
    cin >> num1;

    cout <<"Enter sec NUm: ";
    cin >> num2;

    cout <<num1+num2;



    // mad libs game


    string color , plurar , celebrity;

    cout << "Enter a color: ";
    getline(cin,color);

    cout << "Enter a plurar: ";
    getline(cin,plurar);

    cout << "Enter a celebrity: ";
    getline(cin,celebrity);


    cout << "Roses are "<< color <<"" << endl;
    cout << ""<<plurar<<" are blue" << endl;
    cout << "Fuck you "<<celebrity<<" " << endl;



    // array masivebi

    int luckyNum[20] = {2,5,1,7,8,22,332};

    luckyNum[0] = 19; // gadaewereba da 19 daibechdeba

    cout << luckyNum[0];



    return 0;
}
