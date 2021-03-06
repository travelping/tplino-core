DEFAULTTUNE ?= "i586"

require conf/machine/include/ia32/arch-ia32.inc

# Extra tune features
TUNEVALID[i586] = "Enable i586 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "i586", "-march=i586", "", d)}"

# Extra tune selections
AVAILTUNES += "i586"
TUNE_FEATURES_tune-i586 = "${TUNE_FEATURES_tune-x86} i586"
BASE_LIB_tune-i586 = "lib"
TUNE_PKGARCH_tune-i586 = "i586"
PACKAGE_EXTRA_ARCHS_tune-i586 = "${PACKAGE_EXTRA_ARCHS_tune-x86} i386 i486 i586"
