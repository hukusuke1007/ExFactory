#include "contents_framework.h"


namespace hukusuke {
	/*--------------------------------*/
	/* contents_framework.            */
	/*--------------------------------*/
	contents_framework::contents_framework(){}
	contents_framework::~contents_framework(){}

	/* Public method*/
	void contents_framework::request() {
		this->act_request();
	}

	/* Virtual method*/
	void contents_framework::act_request() {
		LOG_OUTPUT("Not override.");
	}

	/*--------------------------------*/
	/* contents_a.                    */
	/*--------------------------------*/
	contents_a::contents_a() {}
	contents_a::~contents_a() {}

	/* Override method*/
	void contents_a::act_request() {
		LOG_OUTPUT("Contents A.");
	}

	/*--------------------------------*/
	/* contents_b.                    */
	/*--------------------------------*/
	contents_b::contents_b() {}
	contents_b::~contents_b() {}

	/* Override method*/
	void contents_b::act_request() {
		LOG_OUTPUT("Contents B.");
	}

	/*--------------------------------*/
	/* contents_c.                    */
	/*--------------------------------*/
	contents_c::contents_c() {}
	contents_c::~contents_c() {}

	/* Override method*/
	void contents_c::act_request() {
		LOG_OUTPUT("Contents C.");
	}
}
