class leverage
{
	private:
		int crowbar;
	public:
		/*leverage()
		{
        		cout<<__func__<<" : Begin"<<endl;
        		crowbar = 0;
        		cout<<__func__<<" : End"<<endl;
		}*/
		leverage(int c)
		{
        		cout<<__func__<<" : Begin"<<endl;
        		setcrowbar(c);
        		cout<<__func__<<" : End"<<endl;
		}
		int setcrowbar(int crowbar)
		{
			crowbar = 10;
			return crowbar;
		}
		void pry()
		{
        		cout<<__func__<<" : Begin"<<endl;
        		cout<<__func__<<" : End"<<endl;
		}

		int getcrow()
		{
			cout<<__func__<<" : Begin"<<endl;
                        cout<<__func__<<" : End"<<endl;
			return crowbar;
		}
};
