#include "LibraryTwo.h"
#include "LibraryOne.h"

LIBRARYTWO_API int LibraryTwo::getNumberTwo()
{
	return LibraryOne::getNumberOne() + 1;
}
