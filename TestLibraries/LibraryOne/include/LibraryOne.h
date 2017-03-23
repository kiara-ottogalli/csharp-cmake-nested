// It is important that the library in <Library name>_EXPORTS
// has the same name as in the CMakeLists set(LIBRARY_NAME <Library name>)
#ifdef LibraryOne_EXPORTS
#define LIBRARYONE_API __declspec(dllexport)
#else
#define LIBRARYONE_API __declspec(dllimport)
#endif

namespace LibraryOne
{
	extern "C"
	{
		LIBRARYONE_API int getNumberOne();
	}
}
