#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#define _GLIBCXX_DEBUG

#include "enum_operator.hpp"

enum class MyEnumClass
{
	begin,
	A, B, C, D, E, F, G,
	end
};

// ‰‰ŽZŽq‚ð—^‚¦‚é
template<> struct enum_operator::calculation<MyEnumClass> : std::true_type {};
template<> struct enum_operator::has_and_or_operators<MyEnumClass> : std::true_type {};
template<> struct enum_operator::has_bitwise_operators<MyEnumClass> : std::true_type {};

int main()
{
	MyEnumClass Enum1;

	for (auto i = MyEnumClass::begin; i != MyEnumClass::end; ++i);

	++Enum1;
	--Enum1;
	Enum1 + Enum1;
	Enum1 - Enum1;
	Enum1 * Enum1;
	Enum1 / Enum1;
	Enum1 += Enum1;
	Enum1 -= Enum1;
	Enum1 *= Enum1;
	Enum1 /= Enum1;
	Enum1 ^= Enum1;
	Enum1 ^ Enum1;
	Enum1 = ~Enum1;
	Enum1 & Enum1;
	Enum1 &= Enum1;
	Enum1 | Enum1;
	Enum1 |= Enum1;

	return std::system("PAUSE");
}