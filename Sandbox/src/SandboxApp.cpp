#include <Nua.h>

class Sandbox : public Nua::Application
{
public:
	//constructor 
	Sandbox()
	{

	}
	//destructor
	~Sandbox()
	{

	}

};


Nua::Application* Nua::CreateApplication()
{
	return new Sandbox();
}
