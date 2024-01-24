using namespace std;
class Obj
{
	private:
		static int i,j;
	public:
		int a() const;
		int b() const;
};
class ObjectContainer
{
	private:
		vector<Obj*>a1;
	public:
		void add(Obj *obj);
		friend class SmartPointer;
};
class SmartPointer
{
	private:
		ObjectContainer oc;
		int index;
	public:
		SmartPointer(ObjectContainer &objc);
		bool operator++();
		bool operator++(int);
		Obj* operator->() const;
};
