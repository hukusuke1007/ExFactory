#include "contents_factory.h"

namespace hukusuke {
	contents_factory::contents_factory(){}
	contents_factory::~contents_factory(){}

	/* Get contents class*/
	contents_framework* contents_factory::create(const REQUEST_ID request_id) 
	{
		contents_framework* contents = NULL;
		switch (request_id)
		{
			case REQUEST_ID_A: contents = new contents_a(); break;		// Create contents_a instance.
			case REQUEST_ID_B: contents = new contents_b(); break;		// Create contents_b instance.
			case REQUEST_ID_C: contents = new contents_c(); break;		// Create contents_c instance.
		default:
			LOG_OUTPUT("Error. Not support request id.");
			break;
		}

		return contents;
	}
}