#pragma once
#include "template.h"
#include "surface.h"

namespace Tmpl8 {

	class Ninja 
	{
	public:		
		Ninja();
		Ninja(Surface* screen);
		void Update(int speed);				

	private:

		Surface* m_screen;
		
	};

}