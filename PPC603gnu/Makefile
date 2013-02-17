# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/HVA_Robot_2013



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = HVA_Robot_2013/$(MODE_DIR)/HVA_Robot_2013.out


#Rules

# HVA_Robot_2013
ifeq ($(DEBUG_MODE),1)
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
HVA_Robot_2013/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
HVA_Robot_2013/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
HVA_Robot_2013/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
HVA_Robot_2013/$(MODE_DIR)/% : IDE_DEFINES = 
HVA_Robot_2013/$(MODE_DIR)/% : PROJECT_TYPE = DKM
HVA_Robot_2013/$(MODE_DIR)/% : DEFINES = 
HVA_Robot_2013/$(MODE_DIR)/% : EXPAND_DBG = 0
HVA_Robot_2013/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
HVA_Robot_2013/$(MODE_DIR)/% : CPU = PPC603
HVA_Robot_2013/$(MODE_DIR)/% : TOOL_FAMILY = gnu
HVA_Robot_2013/$(MODE_DIR)/% : TOOL = gnu
HVA_Robot_2013/$(MODE_DIR)/% : TOOL_PATH = 
HVA_Robot_2013/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
HVA_Robot_2013/$(MODE_DIR)/% : LIBPATH = 
HVA_Robot_2013/$(MODE_DIR)/% : LIBS = 
HVA_Robot_2013/$(MODE_DIR)/% : OBJ_DIR := HVA_Robot_2013/$(MODE_DIR)

HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousDoNothing.o : $(PRJ_ROOT_DIR)/Commands/AutonomousDoNothing.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromCenter.o : $(PRJ_ROOT_DIR)/Commands/AutonomousShootfromCenter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromLeft.o : $(PRJ_ROOT_DIR)/Commands/AutonomousShootfromLeft.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromRight.o : $(PRJ_ROOT_DIR)/Commands/AutonomousShootfromRight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisDriveDistance.o : $(PRJ_ROOT_DIR)/Commands/ChassisDriveDistance.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisDrivetoWall.o : $(PRJ_ROOT_DIR)/Commands/ChassisDrivetoWall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisTurnAngle.o : $(PRJ_ROOT_DIR)/Commands/ChassisTurnAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/Climb.o : $(PRJ_ROOT_DIR)/Commands/Climb.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimbAbort.o : $(PRJ_ROOT_DIR)/Commands/ClimbAbort.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimberExtend.o : $(PRJ_ROOT_DIR)/Commands/ClimberExtend.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimberRetract.o : $(PRJ_ROOT_DIR)/Commands/ClimberRetract.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/DisplayPumpStatus.o : $(PRJ_ROOT_DIR)/Commands/DisplayPumpStatus.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeAim.o : $(PRJ_ROOT_DIR)/Commands/FrisbeeAim.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeAimAndShoot.o : $(PRJ_ROOT_DIR)/Commands/FrisbeeAimAndShoot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeePickup.o : $(PRJ_ROOT_DIR)/Commands/FrisbeePickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeePutDown.o : $(PRJ_ROOT_DIR)/Commands/FrisbeePutDown.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeShoot.o : $(PRJ_ROOT_DIR)/Commands/FrisbeeShoot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookDowntoLimit.o : $(PRJ_ROOT_DIR)/Commands/HookDowntoLimit.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookEngage.o : $(PRJ_ROOT_DIR)/Commands/HookEngage.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookUptoEngage.o : $(PRJ_ROOT_DIR)/Commands/HookUptoEngage.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookUptoLimit.o : $(PRJ_ROOT_DIR)/Commands/HookUptoLimit.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterAngle.o : $(PRJ_ROOT_DIR)/Commands/SetShooterAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterAngleJoystick.o : $(PRJ_ROOT_DIR)/Commands/SetShooterAngleJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterSpeed.o : $(PRJ_ROOT_DIR)/Commands/SetShooterSpeed.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterSpeedJoystick.o : $(PRJ_ROOT_DIR)/Commands/SetShooterSpeedJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/Teleoperated.o : $(PRJ_ROOT_DIR)/Commands/Teleoperated.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/TestAngleAdjust.o : $(PRJ_ROOT_DIR)/Commands/TestAngleAdjust.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/TestAngleModification.o : $(PRJ_ROOT_DIR)/Commands/TestAngleModification.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/UpdateShooterPID.o : $(PRJ_ROOT_DIR)/Commands/UpdateShooterPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Climber.o : $(PRJ_ROOT_DIR)/Subsystems/Climber.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ClimberTipper.o : $(PRJ_ROOT_DIR)/Subsystems/ClimberTipper.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Drivetrain.o : $(PRJ_ROOT_DIR)/Subsystems/Drivetrain.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Pickup.o : $(PRJ_ROOT_DIR)/Subsystems/Pickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Pump.o : $(PRJ_ROOT_DIR)/Subsystems/Pump.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterAngleAdjust.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterAngleAdjust.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterPusher.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterPusher.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterWheel.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterWheel.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_HVA_Robot_2013 = HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousCommand.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousDoNothing.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromCenter.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromLeft.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromRight.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisDriveDistance.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisDrivetoWall.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisTurnAngle.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/Climb.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimbAbort.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimberExtend.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimberRetract.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/DisplayPumpStatus.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeAim.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeAimAndShoot.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeePickup.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeePutDown.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeShoot.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookDowntoLimit.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookEngage.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookUptoEngage.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookUptoLimit.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterAngle.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterAngleJoystick.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterSpeed.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterSpeedJoystick.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/Teleoperated.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/TestAngleAdjust.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/TestAngleModification.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/UpdateShooterPID.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/OI.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Robot.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/RobotMap.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Climber.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ClimberTipper.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Drivetrain.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Pickup.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Pump.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterAngleAdjust.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterPusher.o \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterWheel.o

HVA_Robot_2013/$(MODE_DIR)/HVA_Robot_2013.out : $(OBJECTS_HVA_Robot_2013)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_HVA_Robot_2013) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_HVA_Robot_2013) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

HVA_Robot_2013/$(MODE_DIR)/HVA_Robot_2013_compile_file : $(FILE) ;

_clean :: HVA_Robot_2013/$(MODE_DIR)/HVA_Robot_2013_clean

HVA_Robot_2013/$(MODE_DIR)/HVA_Robot_2013_clean : 
	$(TRACE_FLAG)if [ -d "HVA_Robot_2013" ]; then cd "HVA_Robot_2013"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousCommand.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousDoNothing.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromCenter.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromLeft.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/AutonomousShootfromRight.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisDriveDistance.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisDrivetoWall.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ChassisTurnAngle.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/Climb.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimbAbort.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimberExtend.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/ClimberRetract.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/DisplayPumpStatus.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeAim.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeAimAndShoot.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeePickup.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeePutDown.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/FrisbeeShoot.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookDowntoLimit.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookEngage.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookUptoEngage.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/HookUptoLimit.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterAngle.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterAngleJoystick.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterSpeed.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/SetShooterSpeedJoystick.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/Teleoperated.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/TestAngleAdjust.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/TestAngleModification.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Commands/UpdateShooterPID.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/OI.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Robot.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/RobotMap.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Climber.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ClimberTipper.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Drivetrain.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Pickup.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/Pump.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterAngleAdjust.d \
	 HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterPusher.d HVA_Robot_2013/$(MODE_DIR)/Objects/HVA_Robot_2013/Subsystems/ShooterWheel.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
