AUTOMAKE_OPTIONS = foreign

SUBDIRS = 

check_PROGRAMS = unittest

unittest_SOURCES = \
	TraderServiceTest.cc
	MDServiceTest.cc


unittest_CPPFLAGS = -I$(top_srcdir) \
		$(BOOST_CPPFLAGS) \
		$(REM_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(RAPIDJSON_CPPFLAGS) \
		$(FMT_CPPFLAGS) \
		$(SPDLOG_CPPFLAGS) \
		$(SOIL_CPPFLAGS)


unittest_LDADD = \
	$(GTEST_LIBADD) \
	../service/libsea.la \
	$(BOOST_LIBADD) \
	$(REM_LIBADD) \
	$(SOIL_LIBADD) \
	$(FMT_LIBADD)



unittest_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread

# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh trader.json

