#include <iostream>

using namespace std;

#pragma pack(4)

class TestA
{
public:
	TestA() {}
	virtual ~TestA() {}

private:
	int b;
};

typedef struct
{
	char a;
	int b;
	short c;
}TestB;

class TestC
{
public:
	TestC() {}
};

class Foo
{
public:
	virtual void func1() {}
	void func2() {}
	int data1;
	static int data2;
};
int Foo::data2 = 1;

void Test(int array[], int size)
{
	int num = sizeof(array) / sizeof(int);
	for (size_t i = 0; i < num && i < size; i++)
	{
		printf("%d ", array[i]);
	}
}

int main()
{
	// size test
	char str[10] = "hello";
	char* pstTemp;
	cout << "sizeof(TestA)" << sizeof(TestA) << endl;
	cout << "sizeof(TestB)" << sizeof(TestB) << endl;
	cout << "sizeof(TestC)" << sizeof(TestC) << endl;
	cout << "sizeof(str)" << sizeof(str) << endl;
	cout << "sizeof(pstTemp)" << sizeof(pstTemp) << endl;

	//access test
	Foo* p_foo = (Foo*)malloc(sizeof(Foo));
	//p_foo->func1();
	p_foo->func2();
	p_foo->data1 = 2;
	p_foo->data2 = 2;

	//loop test
	int Array[] = {1, 2, 3, 4};
	Test(Array, sizeof(Array)/sizeof(int));

	return 0;
}
