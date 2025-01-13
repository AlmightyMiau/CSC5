#include "myheader.h"

/*-----------------------------------------------------------------------------*
 *  Searches through the array "names" of "length" number elements, looking    *
 *  for "search". If "search" is found, the index it is found is is returned.  *
 *  If "search" is not found, -1 is returned.                                  *
 *-----------------------------------------------------------------------------*/
int SearchForMatch(
		string* names,
		int length,
		string search
		)
{
	// Make first character uppercase so it matches names in list
	search[0] = toupper(search[0]);

	// Look for search term in list of names
	for (int i = 0; i < length; i++) {
		if (strstr(names[i].c_str(), (search.c_str())) != NULL) {
			return i;
		}
	}

	return -1;
}
