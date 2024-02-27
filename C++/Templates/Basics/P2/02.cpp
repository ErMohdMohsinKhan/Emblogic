#include <iostream>
using namespace std;
template <class T>
class Arth
{
        private:
                T a;
                T b;
        public:
                Arth(T, T);
                T add();
                T sub();
};

template <class T>
Arth <T>::Arth(T v1, T v2)
{
        this->a = v1;
        this->b = v2;
}

template <class T>
T Arth<T>::add()
{
        return (a+b);
}

template <class T>
T Arth<T>::sub()
{
        return (a-b);
}

int main ()
{
        int c1, c2;
        cout<<"Enter two values "<<endl;
        cin >> c1 >> c2;
        Arth <int> r(c1, c2);
        cout<< "Add : "<<(float)r.add()<<endl;
        cout<< "Sub : "<<(float)r.sub()<<endl;
        return 0;
}

