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

set(LIBRARY_NAME LibraryOne)

set(HEADER_FILES
	include/LibraryOne.h
	)

set(SOURCE_FILES
	src/LibraryOne.cpp
	)

source_group("Headers" FILES
	include/LibraryOne.h
	)

source_group("Sources" FILES
	${SOURCE_FILES}
	)

set(LIBRARYONE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(${LIBRARY_NAME} SHARED  ${SOURCE_FILES} ${HEADER_FILES})
set_target_properties(${LIBRARY_NAME} PROPERTIES FOLDER "Library one")

set(LIBRARYONE_INCLUDED ON PARENT_SCOPE)