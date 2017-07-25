#pragma once

#include "contents_framework.h"
#include "logout.h"
#include "define_common.h"

using namespace std;
namespace hukusuke {

	class contents_factory
	{
	public:
		contents_factory();
		~contents_factory();

		// Get contents class.
		contents_framework* create( const REQUEST_ID request_id );

	};
}

