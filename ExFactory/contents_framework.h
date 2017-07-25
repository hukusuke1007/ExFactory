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

		void request();						// �O�����J.

	protected:
		virtual void act_request() = 0;		// �T�u�N���X�փI�[�o�[���C�h���邽�߂̊֐�.
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
		void act_request();					// ����.

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
		void act_request();					// ����.

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
		void act_request();					// ����.

	};
}

