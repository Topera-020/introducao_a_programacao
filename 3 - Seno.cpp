#include <iostream>
#include <vector>
using namespace std;


class _angulo
{
private:
	float x;
	int t;
	double r;
	
public:
	_angulo() {x = 0; r = 0; t = 10;}
	
	void set_angulo(float _x)
		{x = _x; r = _x / 180 * 3.1415926535897932384626433832;}

	void set_tolerancia(float _t)
		{ t = _t;}

	float get_graus()
		{return x;}

	double get_rad()
		{return r;}

	double get_sen()
	{
		double sen, p, f;
		sen = r;
		//cout<<"começou   r ="<< r <<endl;
		for (int i = 1; i <= t; i++)
		{
			//cout<<"for i = "<< i <<"  ";
			p = r;
			f = 1;
			for (int j=1; j<=i; j++)
				{
				p = p*r*r; //cout<<" | p = "<<p;
				}
			for (int j=1; j<=2*i+1; j++)
				{f = f*j;
				//cout<<" | f = "<<f;
				}
			if  ( i%2 == 0 )
				{sen += p/f; 
				//cout<<" +";
				}
			else 
				{sen -= p/f; 
				//cout<<" -";
				}
			//cout<<"sen "<<cos<<endl;
		}
	return (sen);}


	double get_cos()
	{
		double cos, p, f;
		cos = 1;
		//cout<<"começou   x ="<<x<<endl;
		for (int i = 1; i <= t; i++)
		{
			//cout<<"for i = "<<i<<"  ";
			p = 1;
			f = 1;
			for (int j=1; j<=i; j++)
				{
				p = p*r*r; //cout<<" | p = "<<p;
				}
			for (int j=1; j<=2*i; j++)
				{f = f*j;
				//cout<<" | f = "<<f;
				}
			if  ( i%2 == 0 )
				{cos += p/f; 
				//cout<<" +";
				}
			else 
				{cos -= p/f; 
				//cout<<" -";
				}
			//cout<<"cos "<<cos<<endl;
		}
	return (cos);
	}

	double get_tg()
	{ 
		return (get_sen()/get_cos());
	}	
};
	

int main()
{
	int a, n;
	cout<<"Digite o valor do numero de angulos a serem dgitados:\n";
	cin>>n;
	cout<<endl;
	
  	vector<float> angulos;  
	for (int i = 1; i <=n; i++)
  	{
  		cout<<"Angulo"<<i<<":\n";
		cin>>a;
     	angulos.push_back(a);
     	cout<<endl;
	}
	
	_angulo a1;
	
	cout<<" |    angulos   |         seno          |\n";
    for (int i = 0; i < n; i ++)
    {
    	a1.set_angulo(float(angulos[i]));
    	cout<<" |\t"<< angulos[i]<<"\t|\t"<< a1.get_sen()<<"\t | \n";
	}
	     	
	cout<<endl;
	
    system("PAUSE");
  return (0);}
