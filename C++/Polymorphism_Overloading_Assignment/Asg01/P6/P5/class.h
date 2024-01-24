using namespace std;
class String
{
        private:
                enum {SZ=80};
                char str[SZ];
        public:
                String(); //Const
                String(const char[]);
                int display() const;
		int getstr();
                bool operator > (const String) const;
};
