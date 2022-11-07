
#include <iostream>
using namespace std;

int main()
{
    int* p = nullptr;
    int x = 5;
    p = &x;
    cout << p << endl; // imi afiseaza adresa
    cout << *p << endl; // imi afiseaza ce este la adresa respectiva
    p++;
    cout << p << endl; // a crescut cu 4 adresa
    int* q = p - 2;
    cout << q << endl; // a scazut cu 8 adresa
    cout << p - q << endl; // imi afiseaza 2, scadem 2 pointeri
    // cout << p + q << endl; // nu se pot aduna 2 pointeri


    // cout << *p << endl; // imi afiseaza o adresa random deoarece am facut mai sus p++, astfel am schimbat pointerul p
    // p = nullptr;
    // cout << *p << endl; // eroare de executie, nu se poate extrage continutul de la adresa 0

    p--;
    //  cout << *p << endl; // afiseaza 5
    cout << &p << endl; // imi ia adresa de la p
    cout << p << endl; // in VS imi ia adresa de la p

    int** r = &p;
    cout << *r << endl; // imi afiseaza adresa din x, r ia adresa lui p, iar p lui x mai sus
    cout << **r << endl; // imi afiseaza 5, adica valoarea de la adresa p, adica x

    // daca pun ampersant in fata unei valori atunci tipul mai capata o steluta

    // CAZUL CONST
    // 1. pointer constant la intreg

    int a = 5;
    int b = 10;
    int* const po = &a; // adresa lui po nu poate fi schimbata
    // po = &y; // eroare de compilare deoarece p are adresa constanta la x
    *po = 7; // valoarea insa o putem schimba, dar ADRESA NU
    cout << *po << endl; // afiseaza 7

    // 2. pointer la o zona de memorie constanta (pointer la int constant)

    const int* q = &a; // acum valoarea lui a nu mai poate fi modificata
    // *a = 4; // eroare de compilare

     // 3. Pointer constant la o zona de memorie constanta
    const int* const w = &a; // nu pot schimba nici adresa nici valoarea
    //  w = &b; // eroare de compilare
    //  *w = 9; // eroare de compilare






}
