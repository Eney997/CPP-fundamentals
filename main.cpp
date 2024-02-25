#include <iostream>
#include <cmath>

using namespace std;


    void sayHi(string name, int age);
    double cube(double num);
    int getMax(int rcx1,int rcx2 ,int rcx3);
    string getDayOfWeek(int dayNum);
    int power(int baseNumber, int powerNumber);
    class Book{
    public:
       string tittle;
       string author;
       int pages;
    };

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

     cout<<getDayOfWeek(0)<<endl;



     // while and do while loop in C++

     int i = 1;
     while(i<=5){
        cout<<i <<endl;
        i++;
     };

     int j = 6;
     do{
        cout << j<< endl;
        j++;
     }while(j<=5);


     // bilding guessing game

     int secretNum = 7;
     int guess;
     int guessCount = 0;
     int guessLimit = 3;
     bool outOfGuesses = false;

     while(secretNum != guess && !outOfGuesses){
        if(guessCount<guessLimit){
        cout<< "Enter guess: ";
        cin >> guess;
        guessCount++;
        }else {
        outOfGuesses = true;
       }
     };
     if(outOfGuesses){
     cout<<"You Lose!"<<endl;
     }else{
     cout<<"You Win!"<< endl;
     };


     // for loop in c++

     int ebi[] = {1,3,9,12,34,322};

     for(int l = 0 ;l<5;l++){
        cout<<ebi[l]<<endl;
     };

    //exponent function in c++

    cout<<power(4,2)<<endl;


    //2d array nested loop
    //gridRow ramdeni obja
    //gridColumn ramdeni elementia im objebshi
    //row horizontali
    //column vertikali
    int numberGrid[3][2] = {
                         {1,2},
                         {3,4},
                         {5,6}
                         };
    //cout<<numberGrid[0][0]<<endl; amoigebs romel elementsac ginda calke

    for(int b = 0;b<3;b++){
        for(int x = 0;x<2;x++){
            cout<<numberGrid[b][x];
        }
        cout<<endl;
    }


    // coments in c++

    //*forward slashes are comments*//



    //pointers in c++

    int ageee = 19;
    int *pAge = &ageee; //pointer memory saved in variable
    double  gpaaa = 2.7;
    string nameeee = "Rene";

    cout <<"Age: "<< &ageee <<endl;
    cout <<"Gpa: "<< &gpaaa <<endl;
    cout <<"Name: "<< &nameeee <<endl;
    cout <<pAge<<endl;


    // dereferencing pointer
    // means you are stealing information which one is inside pointer addres i mean information wich one is holded by pointer
    cout<<*pAge<<endl;// ase amoigeb mnishvnelobas rac pontershi imaleba ogond aq viyeneb pointer cvlads
    cout<<*&ageee<<endl; // asec amoigeb mnishvnelobas ogond aq viyeneb !pointer cvlads
    // astrixs amateb cvlads da egaa ra
    //umtyvnelesi ragacaa dzma


    //classes and objects

    Book book1;
    book1.tittle = "Harry Potter";
    book1.author = "KJ Rowling";
    book1.pages = 500;

    Book book2;
    book2.tittle = "Lord of the rings";
    book2.author = "Tolkein";
    book2.pages = 900;


    cout<<book1.tittle<<endl;
    cout<<book1.author<<endl;
    cout<<book1.pages<<endl;
    cout<<book2.tittle<<endl;
    cout<<book2.author<<endl;
    cout<<book2.pages<<endl;



    //constructor function






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


    string getDayOfWeek(int dayNum){
       string dayName;

       switch(dayNum){
       case 0 :
       dayName = "Sunday";
       break;
       case 1:
        dayName = "Monday";
        break;
        case 2:
        dayName = "Thuesday";
        break;
        case 3:
        dayName = "Wednesday";
        break;
        case 4:
        dayName = "Thursday";
        break;
        case 5:
        dayName = "Friday";
        break;
        case 6:
        dayName = "Saturday";
        break;
        default:
            dayName = "Invalid statemant";
       };
       return dayName;
    };


    int power(int baseNumber, int powerNumber){
    int result = 1;

    for(int q = 0;q< powerNumber;q++){
        result = result * baseNumber;
    }
    return result;
}
