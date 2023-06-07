#include "stack.h"

//constructor
// posisi _top = 0
Stack::Stack()
{
	_top = 0;
	//array harus diinisialisasi
	for(int i = 0; i < 10; ++i)
		_elements[i] = 0;
}

//fungsi push()
//memasukan elemen e ke stack
void Stack::push(int e)
{
	//syarat: stack tidak boleh penuh
	if(!full())
	{
		_elements[_top] = 0;
		++_top;
	}
}

//fungsi pop
//mengambil elemen paling atas
void Stack::pop()
{
	//syarat: stack tidak boleh kosong
	if(!empty())
	{
		--_top;
	}
}

//fungsi full
//memeriksa apakah stack dalam kondisi penuh
bool Stack::full()
{
	return _top;
}

//fungsi empty
//memeriksa apakah stack dalam kondisis kosong 
bool Stack::empty()
{
	return _top == 0;
}

//fungsi size
//membca jumlah elemen yang tersimpan
int Stack::size()
{
	return _top;
}

//fungsi top ()
//membaca elemen paling atas
int Stack::top()
{
	return _elements[_top -1];
}
