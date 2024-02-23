#include <iostream>
#include <cmath>

using namespace std;


    void sayHi(string name, int age);
    double cube(double num);
    int getMax(int rcx1,int rcx2 ,int rcx3);

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


    // function inc++

    sayHi("Rene",20);
    sayHi("Jacob",20);
    sayHi("Ruby",20);
    sayHi("Louis",20);
    sayHi("Rustin",20);



    // return statemant in C++

    double answer = cube(90);
    cout<< answer<< endl;


     // if statemant in C++


    bool mamri = true;
    bool isTall = true;

    if(mamri && isTall){
        cout<< "You are a tall male";
    }else if(mamri && !isTall){
        cout<< "You are short man";
    }else if(!mamri && isTall){
        cout<< "you are tall but pussy";
    } else {
        cout<< "You are not a tall male";
    };


    // more about if statemant

     cout<<getMax(1,2,3)<< endl;

     // building normal calculator
     double mun1;
     double mun2;
     char ope;

     cout << "Enter your first number: ";
     cin >> mun1;

     cout << "Enter your second number: ";
     cin >> mun2;

     cout << "Enter your operator: ";
     cin >> ope;

     int rees;
     if(ope == '+'){
        rees = mun1+mun2;
     }else if(ope == '-'){
        rees =  mun1-mun2;
     }else if(ope == '/'){
        rees = mun1/mun2;
     }else if(ope == '*'){
        rees = mun1*mun2;
     }else {
        cout<< "Error 404 : Please enter the number";
     }
     cout<< rees;




     // switch case



    return 0;
}


    void sayHi(string name, int age){
     cout<<"hello "<< name<<" you are "<<age<<" years old "<< endl;
    };

    double cube(double num){
     double result = num*num*num;  // also u can write like that return num*num*num; shortCode
     return result;
    };


    int getMax(int rcx1,int rcx2,int rcx3){
      int result;
      if(rcx1 >= rcx2 && rcx1 >= rcx3){
        result = rcx1;
      }else if(rcx2 >= rcx1 && rcx2 >= rcx3){
        result = rcx2;
      }else{
        result = rcx3;
      }
      return result;
    };


