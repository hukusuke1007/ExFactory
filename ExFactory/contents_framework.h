#pragma once
#include "define_common.h"
#include "logout.h"

using namespace std;
namespace hukusuke {

	/*--------------------------------*/
	/* contents_framework.            */
	/*--------------------------------*/
	class contents_framework
	{
	public:
		contents_framework();
		~contents_framework();

		void request();						// 外部公開.

	protected:
		virtual void act_request() = 0;		// サブクラスへオーバーライドするための関数.
	};

	/*--------------------------------*/
	/* contents_a.                    */
	/*--------------------------------*/
	class contents_a : public contents_framework
	{
	public:
		contents_a();
		~contents_a();

	private:
		void act_request();					// 処理.

	};

	/*--------------------------------*/
	/* contents_b.                    */
	/*--------------------------------*/
	class contents_b : public contents_framework
	{
	public:
		contents_b();
		~contents_b();

	private:
		void act_request();					// 処理.

	};

	/*--------------------------------*/
	/* contents_c.                    */
	/*--------------------------------*/
	class contents_c : public contents_framework
	{
	public:
		contents_c();
		~contents_c();

	private:
		void act_request();					// 処理.

	};
}

