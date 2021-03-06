NAME=initff
NAME1=paramff
CPP=..\cpp
OBJ=..\obj
LIB=e:;$(OBJ)
INCLUDE=e:;..\include
TLINK=e:tlink
BCC=e:bcc
CFG= -c -n$(OBJ) -ml -f87 -I$(INCLUDE) 

# *************************************************************************

initff.exe	:	$(OBJ)\$(NAME).obj\
	  		$(OBJ)\$(NAME1).obj
  TLINK /v /x /c /L$(LIB) c0l+$(OBJ)\$(NAME)+$(OBJ)\$(NAME1),initff,,fp87+mathl+cl

# *************************************************************************

$(OBJ)\$(NAME).obj :		$(NAME).cpp	..\include\param.h
  $(BCC)  $(CFG)		$(NAME).cpp

# *************************************************************************

$(OBJ)\$(NAME1).obj :		$(CPP)\$(NAME1).cpp	..\include\param.h
  $(BCC)  $(CFG)		$(CPP)\$(NAME1).cpp

# *************************************************************************
