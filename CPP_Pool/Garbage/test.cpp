class Z 
{
	public : 
		virtual void A() 
		{ 
			//Defintion 1 
		} 
		virtual void B ( ) 
		{ 
			//Definition 2 
		} 
} ; 
class X : public Z 
{ 
	public: 
		void A() 
		{ 
			//Definition 3 
		} 
} ; 
class Y : public Z 
{ 
	public: 
		void B() 
		{ 
			//Definition 4 
		} 
} ; 