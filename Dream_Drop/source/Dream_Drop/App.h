#pragma once

#include "Gist.h"

namespace Dream_Drop {

	class DREAMDROP_API App
	{
	public:
		//Contructor & Destructor
		App();
		virtual ~App();

		//Functions
		void run();
	};

	//Defined by client
	App* AppCreate();
}