#include "stdafx.h"
//#include"pointer.h"
//Head file included above.
#include"SequenceList.h"

int main()
{
	#include"inio.cpp"		//命名空间
	using std::cout;
	
	SeqList a;
	InitList(&a);
	cout << a.data;
	TraverseList(&a);
	return 0;
}


