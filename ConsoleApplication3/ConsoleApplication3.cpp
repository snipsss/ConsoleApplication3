#include <locale.h>
#include <set>
#include <iostream>
using namespace std;



int pap() {
    enum color { red, green = 5, blue };
    std::cout << "smth::" << red << endl;

    enum coutm { urtich, pointer = 3, pattern, yur, gleb, alex,nik };
    std::wcout << "wanna::" << pattern << endl;

    wchar_t ure = 'eqwe';
    long long r = 33.3310000000004213313104;
    int rr;
    rr = (int)r;
    float ug;
    ug = (float)r;
    std::cout << "to float ug r:" << ug << endl;
    std::cout << "rounded int rr is::" << rr << endl;
    int q[] = { 10,9,8,7,6,5,4,3,2,1,0 };
    std::cout << "size: " << sizeof(q) / 4 << endl;
    for(int i = 0;i < sizeof(q)/ 4;i++){
        std::cout << "index::" << q[i] << endl;
    }
    return 0;
}



int pie(int ptr) {
    pap();
    int* ptr_b = &ptr;
    ptr++;
    std::cout << "your strange smth is::" << *ptr_b << "address" << ptr_b << endl;;
    
    
    
   
    //как передать ссылку в функцию;
    // посмореть операторы
    // switch , do while 
    // ссылки и указатели 
    // область видимости 
    //          перегрузка операторов 
    //  бонус   равесли 
    //          алгоритмы и структуры данных 
    //          паттерны




    return 0;
}


void strr(int len) {
    for (int i = 1; i <= len; i++) {
        for (int j = i; j <= len; j++) {
            std::cout << "* ";
        }
        std::cout << " " << endl;
    }

    return;
}



void palace(int h) {
    for (int i = 1; i <= h; i++) {
        for (int p = i; p <= h; p++) {
            std::cout << " ";
        }
        for (int p = 1; p <= i; p++) {
            std::cout << "* ";
        }
        std::cout << endl;
    }
    return;
}




int colt() {
    pie(444);
    strr(7);
    palace(5);
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int p = i; p <= n; p++) {
            std::cout <<" ";
        }
        for(int p = 1; p <= i; p++) {
            std::cout << "* ";
        }
        std::cout << " " << endl;
    }

    return 0;
}





int malta() {
    colt();
    int n = 5;
    for (int p = 1; p <= n; p++) {
        for(int i = 1; i <=p; i++) {
            std::cout << "* ";
        }
        std::cout << endl;
    }

   
    
    int p = 83;
    int* ptr_p = &p;
    int& ref_arg_p = p;
    std::cout <<  "pointer link ptr_p is:" << "\t" << ptr_p << endl;
    std::cout << "ref of ptr_p:""\t" << &ptr_p << endl;
std:cout << "check value:""\t" << ref_arg_p << "\t" << "unpacking:" << "\t" << &ref_arg_p << "link on pointer::"<<*ptr_p << endl;
         
    int py = 88;
    float g[] = { 331.3,4421,334,442,228,113 };
    int t = 83;
    bool x = true;
    bool l = false;
    if (sizeof(py) == char(t)) {
        std::cout << "answer correct::";
        return true;
    }
    else {
        int o = 0;
        for (int i = 0; i < sizeof(g) / 4; i++) {
            std::cout << "index:" << g[i] << endl;
        }
        std::cout << "answer is not correct";
        
        
        
        return false;
    }



    return 0;
}
 



int free() {
    float deg = 88.1;
    const char y = 'targ';
    int bib[] = { 66,331,74,994.1,74.2 };

    const char* ptr_y = &y;
    const char** new_ptr_y = &ptr_y;
    std::cout << "const pointer char_y:  " << &ptr_y<<"\t" << "link on link ptr_y:: "<< &new_ptr_y << endl;
    std::cout << "size mass::  " << sizeof(bib) / 4 << endl;
    



    int g = 0;
    int* ptr_k = &g;
    int& ref_k = g;



    std::cout << "address of prt_g::""\t" << &ref_k << endl;
    std::cout << "address of ptr_k::""\t" << ptr_k << endl;


    return 0;
}


int main()
{
    free();
    malta();
    int b;
    std::cout << "type number: ";
    cin >> b;
    int* ptr_b = &b;
    int& refi = b;
    std::cout << "fucking pointer:: " << ptr_b << "\t" << "fucking ref: " << &refi << endl;
    
    int set  = {};
    float a[] = { 1,2,3,4.5,645,54 };
    float* ptr_a = a;
    for (int i = 0; i < sizeof(a) / 4; i++) {
        std::cout << ptr_a[i] << endl;


    }
 

    setlocale(LC_ALL, "Rus");
    std::cout << "YA NENAVIJU C+++++++" << "\n";
    int varik;
    int& ref = varik;

    cin >> ref;
    cout << varik << "\t" << "reference:" << "\t" << &ref << "value ref:" << ref << endl;

    //cout << "address:" << &varik << endl;
      //  cin >> varik;
       // cout << "address_2:" << &varik << endl;
    
   //     int value = 9;
     //   int* ptrvalue = &value;
       // std::cout << *ptrvalue << "\t" << ":" << ptrvalue << endl;
        //cin >> *ptrvalue;
       // std::cout << *ptrvalue << "\t" << ":" << ptrvalue << endl;

//        std::cout << "cell:  " << ptrvalue << ":" << &value << endl;

  //      std::cout << " double pointer:" << endl;
    //    int** ptr_ptrvalue = &ptrvalue;
      //  cout << value << endl;

    


    int i, peter[5];
    for (i = 0; i < 5; i++) {
        std::cout << "insert data:";
        std::cin >> peter[i];
    }
    for (int i = 0; i < 5; i++) {
        std::cout << "peter------>[" << i << "]" << peter[i] << endl;
    }
    {
        std::cout << "size mass peter is:" << sizeof(peter) / 4 << endl;

    }
    
   
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;

    
    return 0;
}




