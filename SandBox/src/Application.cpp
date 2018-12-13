#include <GRE.h>


class SandBox : public GRE::Application {
public:
	SandBox() {

	}

	~SandBox() {

	}
};

GRE::Application* GRE::CreateApplication() {
	return new SandBox();
}