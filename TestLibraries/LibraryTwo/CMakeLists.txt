############################################################################
# Centro de Investigaciones Tecnicas de Gipuzkoa (CEIT)                    #
# Paseo de Manuel Lardizabal, N. 15                                        #
# 20018, Donostia - San Sebastian                                          #
# SPAIN                                                                    #
#                                                                          #
# Copyright (c) 2015 by CEIT.                                              #
# All rights reserved.                                                     #
# CEIT provides this product without warranty of any kind and shall        #
# not be liable for any damages caused by the use of this product.         #
############################################################################

set(LIBRARY_NAME LibraryTwo)

set(HEADER_FILES
	include/LibraryTwo.h
	)

set(SOURCE_FILES
	src/LibraryTwo.cpp
	)

source_group("Headers" FILES
	include/LibraryTwo.h
	)

source_group("Sources" FILES
	${SOURCE_FILES}
	)

set(TEST_LIBRARIES "TEST_LIBRARIES-NOTFOUND" CACHE PATH "Path to TestLibraries")
add_subdirectory(${TEST_LIBRARIES}/LibraryOne ${CMAKE_BINARY_DIR}/LibraryOne)
	
set(LIBRARYTWO_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${LIBRARYONE_INCLUDE_DIR})
add_library(${LIBRARY_NAME} SHARED  ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(${LIBRARY_NAME} LibraryOne)
set_target_properties(${LIBRARY_NAME} PROPERTIES FOLDER "Library two")

set(LIBRARYTWO_INCLUDED ON PARENT_SCOPE)