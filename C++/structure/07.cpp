#include <iostream>
#include <cstring>
using namespace std;
/*Structures as a paramter*/
struct Student 
{
        char name[20];
        int Marks[5];
};
/*Function that takes a struct as a parameter*/
struct Student details (struct Student S1) 
{
        strcpy(S1.name, "Dean Jones");
        S1.Marks[0] = 84; 
        S1.Marks[1] = 78; 
        S1.Marks[2] = 80; 
        S1.Marks[3] = 67; 
        S1.Marks[4] = 91; 
        return S1; 
}
int main ()
{
        struct Student S;
        S = details(S);
        int total = 0;; 
        for(int i=0; i<5; i++)
        {
                cout<<S.Marks[i]<<endl;
                total = S.Marks[i] + total;
        }
        cout<<"Total : "<<total<<endl;
        cout<<"Remarks : ";
        (total > 199)?cout<<"PASS"<<endl:cout<<"FAIL"<<endl;
}
