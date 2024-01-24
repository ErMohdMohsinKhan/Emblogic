using namespace std;
class Mother: public BaseZebra: public BaseDolphine
{
 protected:
     char name[40];
     int age;
 public:
     set_value();

};
class BaseZebra:public Mother
{
    public:
        BaseZebra(char,int);
};

class BaseDolphine:
 {
     public:
        BaseDolphine(char,int);
 };
