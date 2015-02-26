SET(
	SRC_LIST main
	../parseControl/parseCtrl.h
	../parseControl/parseCtrl.cpp
	../parseControl/parseBase.h
	../parseControl/parseBase.cpp
	../imageParse/imageParse.h
	../imageParse/imageParse.cpp
	../bookParse/bookParse.h
	../bookParse/bookParse.cpp
	../download/downloadControl.h
	../download/downloadControl.cpp
	../allocFile/fileControl.h
	../allocFile/fileControl.cpp
       )

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
ADD_EXECUTABLE(webcrawler ${SRC_LIST})