#ifdef LibraryTwo_EXPORTS
#define LIBRARYTWO_API __declspec(dllexport)
#else
#define LIBRARYTWO_API __declspec(dllimport)
#endif

namespace LibraryTwo
{
	extern "C"
	{
		LIBRARYTWO_API int getNumberTwo();
	}
}
