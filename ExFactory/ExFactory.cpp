// ExFactory.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "logout.h"
#include "contents_factory.h"
#include "contents_framework.h"
#include "define_common.h"

using namespace std;
using namespace hukusuke;

/* main function. */
int main(void) {
	LOG_OUTPUT("Start.");
	
	// Create factory instance.
	contents_factory factory;

	// Create contents super class.
	contents_framework* contents_a = factory.create(REQUEST_ID_A);
	contents_framework* contents_b = factory.create(REQUEST_ID_B);
	contents_framework* contents_c = factory.create(REQUEST_ID_C);

	// Request to contents sub class.
	if (NULL != contents_a) { contents_a->request(); } else {}
	if (NULL != contents_b) { contents_b->request(); } else {}
	if (NULL != contents_c) { contents_c->request(); } else {}

	// Delete.
	if (NULL != contents_a) { delete contents_a; contents_a = NULL; } else {}
	if (NULL != contents_b) { delete contents_b; contents_b = NULL; } else {}
	if (NULL != contents_c) { delete contents_c; contents_c = NULL; } else {}

	LOG_OUTPUT("Terminate.");

	return 0;
}

