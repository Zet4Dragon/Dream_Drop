#include <Dream_Drop.h>

class Test : public Dream_Drop::App {
public:
	Test() {

	}

	~Test() {

	}
};

Dream_Drop::App* Dream_Drop::AppCreate() {
	return new Test();
}