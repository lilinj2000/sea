AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libsea.la
libsea_la_SOURCES = \
		TraderOptions.cc TraderSpiImpl.cc \
		TraderServiceImpl.cc MDOptions.cc \
		SeaUtil.cc MDSpiImpl.cc MDServiceImpl.cc

libsea_la_CPPFLAGS = -I$(top_srcdir) \
			$(BOOST_CPPFLAGS) \
			$(REM_CPPFLAGS) \
			$(SOIL_CPPFLAGS)

libsea_la_LIBADD = $(REM_LIBADD) \
		$(BOOST_LIBADD) \
		$(SOIL_LIBADD)

libsea_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

# header files
noinst_HEADERS = \
	TraderOptions.hh \
	TraderServiceImpl.hh \
	TraderSpiImpl.hh \
	SeaLog.hh \
	EesTraderDefinePrint.hh \
	MDOptions.hh \
	EESQuoteDefinePrint.hh \
	SeaUtil.hh \
	MDSpiImpl.hh \
	MDServiceImpl.hh


